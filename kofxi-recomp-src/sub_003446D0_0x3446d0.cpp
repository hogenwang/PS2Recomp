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

// Function: sub_003446D0
// Address: 0x3446d0 - 0x344720
void sub_003446D0_0x3446d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003446D0_0x3446d0");
#endif

    switch (ctx->pc) {
        case 0x3446e4u: goto label_3446e4;
        default: break;
    }

    ctx->pc = 0x3446d0u;

    // 0x3446d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3446d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3446d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3446d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3446d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3446d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3446dc: 0xc0828d8  jal         func_20A360
    ctx->pc = 0x3446DCu;
    SET_GPR_U32(ctx, 31, 0x3446E4u);
    ctx->pc = 0x3446E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3446DCu;
    // 0x3446e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A360u, 0x3446DCu, 0x3446E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3446E4u;
label_3446e4:
    // 0x3446e4: 0x28410041  slti        $at, $v0, 0x41
    ctx->pc = 0x3446e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x3446e8: 0x54200007  bnel        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3446E8u;
    {
        const bool branch_taken_0x3446e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3446e8) {
            ctx->pc = 0x3446ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3446E8u;
            // 0x3446ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344708u;
            goto label_344708;
        }
    }
    ctx->pc = 0x3446F0u;
    // 0x3446f0: 0x2404011a  addiu       $a0, $zero, 0x11A
    ctx->pc = 0x3446f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 282));
    // 0x3446f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3446f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3446f8: 0xa604007c  sh          $a0, 0x7C($s0)
    ctx->pc = 0x3446f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 4));
    // 0x3446fc: 0xa604007e  sh          $a0, 0x7E($s0)
    ctx->pc = 0x3446fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 4));
    // 0x344700: 0xa6030080  sh          $v1, 0x80($s0)
    ctx->pc = 0x344700u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 3));
    // 0x344704: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_344708:
    // 0x344708: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x344708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34470c: 0x3e00008  jr          $ra
    ctx->pc = 0x34470Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34470Cu;
        // 0x344710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34470Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344714u;
    // 0x344714: 0x0  nop
    ctx->pc = 0x344714u;
    // NOP
    // 0x344718: 0x0  nop
    ctx->pc = 0x344718u;
    // NOP
    // 0x34471c: 0x0  nop
    ctx->pc = 0x34471cu;
    // NOP
}
