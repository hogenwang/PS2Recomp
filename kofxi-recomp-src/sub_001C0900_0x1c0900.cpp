#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0900
// Address: 0x1c0900 - 0x1c0968
void sub_001C0900_0x1c0900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0900_0x1c0900");
#endif

    switch (ctx->pc) {
        case 0x1c0914u: goto label_1c0914;
        case 0x1c092cu: goto label_1c092c;
        case 0x1c0950u: goto label_1c0950;
        default: break;
    }

    ctx->pc = 0x1c0900u;

    // 0x1c0900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c0904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c0908: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c0908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c090c: 0xc0736de  jal         func_1CDB78
    ctx->pc = 0x1C090Cu;
    SET_GPR_U32(ctx, 31, 0x1C0914u);
    ctx->pc = 0x1C0910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C090Cu;
    // 0x1c0910: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB78u, 0x1C090Cu, 0x1C0914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0914u;
label_1c0914:
    // 0x1c0914: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c0914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c0918: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c091c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C091Cu;
    {
        const bool branch_taken_0x1c091c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C091Cu;
        // 0x1c0920: 0x24849790  addiu       $a0, $a0, -0x6870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c091c) {
            ctx->pc = 0x1C0938u;
            goto label_1c0938;
        }
    }
    ctx->pc = 0x1C0924u;
    // 0x1c0924: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C0924u;
    SET_GPR_U32(ctx, 31, 0x1C092Cu);
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1C0924u, 0x1C092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C092Cu;
label_1c092c:
    // 0x1c092c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C092Cu;
    {
        const bool branch_taken_0x1c092c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C092Cu;
        // 0x1c0930: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c092c) {
            ctx->pc = 0x1C095Cu;
            goto label_1c095c;
        }
    }
    ctx->pc = 0x1C0934u;
    // 0x1c0934: 0x0  nop
    ctx->pc = 0x1c0934u;
    // NOP
label_1c0938:
    // 0x1c0938: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c0938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c093c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C093Cu;
    {
        const bool branch_taken_0x1c093c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c093c) {
            ctx->pc = 0x1C0940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C093Cu;
            // 0x1c0940: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0958u;
            goto label_1c0958;
        }
    }
    ctx->pc = 0x1C0944u;
    // 0x1c0944: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c0944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c0948: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C0948u;
    SET_GPR_U32(ctx, 31, 0x1C0950u);
    ctx->pc = 0x1C094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0948u;
    // 0x1c094c: 0x248497b0  addiu       $a0, $a0, -0x6850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1C0948u, 0x1C0950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0950u;
label_1c0950:
    // 0x1c0950: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C0950u;
    {
        const bool branch_taken_0x1c0950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0950u;
        // 0x1c0954: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0950) {
            ctx->pc = 0x1C095Cu;
            goto label_1c095c;
        }
    }
    ctx->pc = 0x1C0958u;
label_1c0958:
    // 0x1c0958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c0958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c095c:
    // 0x1c095c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c095cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c0960: 0x80736fc  j           func_1CDBF0
    ctx->pc = 0x1C0960u;
    ctx->pc = 0x1C0964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0960u;
    // 0x1c0964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDBF0u;
    sub_001CDBF0_0x1cdbf0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C0968u;
}
