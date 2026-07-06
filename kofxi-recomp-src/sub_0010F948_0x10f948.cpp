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

// Function: sub_0010F948
// Address: 0x10f948 - 0x10f9c8
void sub_0010F948_0x10f948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F948_0x10f948");
#endif

    switch (ctx->pc) {
        case 0x10f980u: goto label_10f980;
        case 0x10f9a4u: goto label_10f9a4;
        case 0x10f9b4u: goto label_10f9b4;
        default: break;
    }

    ctx->pc = 0x10f948u;

    // 0x10f948: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x10f948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x10f94c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10f94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10f950: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10f950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10f954: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10f954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f958: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10f958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10f95c: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x10f95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x10f960: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x10f960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x10f964: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x10f964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x10f968: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x10f968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x10f96c: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x10f96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x10f970: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x10f970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x10f974: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x10f974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x10f978: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10F978u;
    SET_GPR_U32(ctx, 31, 0x10F980u);
    ctx->pc = 0x10F97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F978u;
    // 0x10f97c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10F978u, 0x10F980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F980u;
label_10f980:
    // 0x10f980: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x10f980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x10f984: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x10f984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x10f988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10f988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f98c: 0x2484f7b8  addiu       $a0, $a0, -0x848
    ctx->pc = 0x10f98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965176));
    // 0x10f990: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10f990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f994: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f998: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x10f998u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x10f99c: 0xc043a92  jal         func_10EA48
    ctx->pc = 0x10F99Cu;
    SET_GPR_U32(ctx, 31, 0x10F9A4u);
    ctx->pc = 0x10F9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F99Cu;
    // 0x10f9a0: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EA48u, 0x10F99Cu, 0x10F9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F9A4u;
label_10f9a4:
    // 0x10f9a4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F9A4u;
    {
        const bool branch_taken_0x10f9a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9A4u;
        // 0x10f9a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f9a4) {
            ctx->pc = 0x10F9B8u;
            goto label_10f9b8;
        }
    }
    ctx->pc = 0x10F9ACu;
    // 0x10f9ac: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10F9ACu;
    SET_GPR_U32(ctx, 31, 0x10F9B4u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x10F9ACu, 0x10F9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F9B4u;
label_10f9b4:
    // 0x10f9b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10f9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10f9b8:
    // 0x10f9b8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10f9b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f9bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10f9bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x10F9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9C0u;
        // 0x10f9c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F9C8u;
}
