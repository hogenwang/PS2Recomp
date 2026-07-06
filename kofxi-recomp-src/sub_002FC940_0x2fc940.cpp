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

// Function: sub_002FC940
// Address: 0x2fc940 - 0x2fc9b0
void sub_002FC940_0x2fc940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC940_0x2fc940");
#endif

    switch (ctx->pc) {
        case 0x2fc974u: goto label_2fc974;
        case 0x2fc98cu: goto label_2fc98c;
        case 0x2fc994u: goto label_2fc994;
        default: break;
    }

    ctx->pc = 0x2fc940u;

    // 0x2fc940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fc940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fc944: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2fc944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2fc948: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2fc948u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2fc94c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2fc94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2fc950: 0x822206b0  lb          $v0, 0x6B0($s1)
    ctx->pc = 0x2fc950u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1712)));
    // 0x2fc954: 0x263206b0  addiu       $s2, $s1, 0x6B0
    ctx->pc = 0x2fc954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1712));
    // 0x2fc958: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fc958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fc95c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FC95Cu;
    {
        const bool branch_taken_0x2fc95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC95Cu;
        // 0x2fc960: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc95c) {
            ctx->pc = 0x2FC994u;
            goto label_2fc994;
        }
    }
    ctx->pc = 0x2FC964u;
    // 0x2fc964: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fc964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fc968: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fc968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc96c: 0xc04485c  jal         func_112170
    ctx->pc = 0x2FC96Cu;
    SET_GPR_U32(ctx, 31, 0x2FC974u);
    ctx->pc = 0x2FC970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC96Cu;
    // 0x2fc970: 0x24843040  addiu       $a0, $a0, 0x3040 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112170u, 0x2FC96Cu, 0x2FC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC974u;
label_2fc974:
    // 0x2fc974: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fc974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc978: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC978u;
    {
        const bool branch_taken_0x2fc978 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2FC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC978u;
        // 0x2fc97c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc978) {
            ctx->pc = 0x2FC994u;
            goto label_2fc994;
        }
    }
    ctx->pc = 0x2FC980u;
    // 0x2fc980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fc980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc984: 0xc0449ee  jal         func_1127B8
    ctx->pc = 0x2FC984u;
    SET_GPR_U32(ctx, 31, 0x2FC98Cu);
    ctx->pc = 0x2FC988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC984u;
    // 0x2fc988: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127B8u, 0x2FC984u, 0x2FC98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC98Cu;
label_2fc98c:
    // 0x2fc98c: 0xc044900  jal         func_112400
    ctx->pc = 0x2FC98Cu;
    SET_GPR_U32(ctx, 31, 0x2FC994u);
    ctx->pc = 0x2FC990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC98Cu;
    // 0x2fc990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112400u, 0x2FC98Cu, 0x2FC994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC994u;
label_2fc994:
    // 0x2fc994: 0x262206b0  addiu       $v0, $s1, 0x6B0
    ctx->pc = 0x2fc994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1712));
    // 0x2fc998: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fc998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fc99c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2fc99cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fc9a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fc9a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc9a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc9a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC9A8u;
        // 0x2fc9ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC9B0u;
}
