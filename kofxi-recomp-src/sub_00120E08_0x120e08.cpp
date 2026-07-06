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

// Function: sub_00120E08
// Address: 0x120e08 - 0x120f38
void sub_00120E08_0x120e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120E08_0x120e08");
#endif

    switch (ctx->pc) {
        case 0x120ec8u: goto label_120ec8;
        default: break;
    }

    ctx->pc = 0x120e08u;

    // 0x120e08: 0x4783c  dsll32      $t7, $a0, 0
    ctx->pc = 0x120e08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) << (32 + 0));
    // 0x120e0c: 0x5703c  dsll32      $t6, $a1, 0
    ctx->pc = 0x120e0cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) << (32 + 0));
    // 0x120e10: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x120e10u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x120e14: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x120e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x120e18: 0xf7823  negu        $t7, $t7
    ctx->pc = 0x120e18u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x120e1c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x120e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x120e20: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x120e20u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x120e24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x120e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x120e28: 0xf683c  dsll32      $t5, $t7, 0
    ctx->pc = 0x120e28u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) << (32 + 0));
    // 0x120e2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x120e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x120e30: 0xe7023  negu        $t6, $t6
    ctx->pc = 0x120e30u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x120e34: 0x4783f  dsra32      $t7, $a0, 0
    ctx->pc = 0x120e34u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x120e38: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x120e38u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x120e3c: 0x5603f  dsra32      $t4, $a1, 0
    ctx->pc = 0x120e3cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x120e40: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x120e40u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x120e44: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x120e44u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x120e48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x120e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e4c: 0xf4823  negu        $t1, $t7
    ctx->pc = 0x120e4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x120e50: 0x5e1000e  bgez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x120E50u;
    {
        const bool branch_taken_0x120e50 = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x120E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E50u;
        // 0x120e54: 0xc4023  negu        $t0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e50) {
            ctx->pc = 0x120E8Cu;
            goto label_120e8c;
        }
    }
    ctx->pc = 0x120E58u;
    // 0x120e58: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x120e58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120e5c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x120e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120e60: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x120e60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x120e64: 0x16f5824  and         $t3, $t3, $t7
    ctx->pc = 0x120e64u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 15));
    // 0x120e68: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x120e68u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x120e6c: 0xb783c  dsll32      $t7, $t3, 0
    ctx->pc = 0x120e6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) << (32 + 0));
    // 0x120e70: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x120e70u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x120e74: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x120e74u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x120e78: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x120e78u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x120e7c: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x120e7cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x120e80: 0x12f7823  subu        $t7, $t1, $t7
    ctx->pc = 0x120e80u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
    // 0x120e84: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x120e84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x120e88: 0x16f2025  or          $a0, $t3, $t7
    ctx->pc = 0x120e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) | GPR_U64(ctx, 15));
label_120e8c:
    // 0x120e8c: 0x581000c  bgez        $t4, . + 4 + (0xC << 2)
    ctx->pc = 0x120E8Cu;
    {
        const bool branch_taken_0x120e8c = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x120E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120E8Cu;
        // 0x120e90: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120e8c) {
            ctx->pc = 0x120EC0u;
            goto label_120ec0;
        }
    }
    ctx->pc = 0x120E94u;
    // 0x120e94: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x120e94u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x120e98: 0x14f5024  and         $t2, $t2, $t7
    ctx->pc = 0x120e98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 15));
    // 0x120e9c: 0x14e5025  or          $t2, $t2, $t6
    ctx->pc = 0x120e9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 14));
    // 0x120ea0: 0xa783c  dsll32      $t7, $t2, 0
    ctx->pc = 0x120ea0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) << (32 + 0));
    // 0x120ea4: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x120ea4u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x120ea8: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x120ea8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x120eac: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x120eacu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x120eb0: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x120eb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x120eb4: 0x10f7823  subu        $t7, $t0, $t7
    ctx->pc = 0x120eb4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 15)));
    // 0x120eb8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x120eb8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x120ebc: 0x14f2825  or          $a1, $t2, $t7
    ctx->pc = 0x120ebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 15));
label_120ec0:
    // 0x120ec0: 0xc0483ce  jal         func_120F38
    ctx->pc = 0x120EC0u;
    SET_GPR_U32(ctx, 31, 0x120EC8u);
    ctx->pc = 0x120EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120EC0u;
    // 0x120ec4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120F38u, 0x120EC0u, 0x120EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120EC8u;
label_120ec8:
    // 0x120ec8: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x120EC8u;
    {
        const bool branch_taken_0x120ec8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x120ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120EC8u;
        // 0x120ecc: 0xdfad0000  ld          $t5, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ec8) {
            ctx->pc = 0x120F20u;
            goto label_120f20;
        }
    }
    ctx->pc = 0x120ED0u;
    // 0x120ed0: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x120ed0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120ed4: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x120ed4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x120ed8: 0xd783c  dsll32      $t7, $t5, 0
    ctx->pc = 0x120ed8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) << (32 + 0));
    // 0x120edc: 0x20e8024  and         $s0, $s0, $t6
    ctx->pc = 0x120edcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 14));
    // 0x120ee0: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x120ee0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x120ee4: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x120ee4u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x120ee8: 0xf7823  negu        $t7, $t7
    ctx->pc = 0x120ee8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x120eec: 0xd6823  negu        $t5, $t5
    ctx->pc = 0x120eecu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 13)));
    // 0x120ef0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x120ef0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x120ef4: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x120ef4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x120ef8: 0x20f8025  or          $s0, $s0, $t7
    ctx->pc = 0x120ef8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 15));
    // 0x120efc: 0x10703c  dsll32      $t6, $s0, 0
    ctx->pc = 0x120efcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) << (32 + 0));
    // 0x120f00: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x120f00u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x120f04: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x120f04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x120f08: 0xe702b  sltu        $t6, $zero, $t6
    ctx->pc = 0x120f08u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x120f0c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x120f0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x120f10: 0x1ae6823  subu        $t5, $t5, $t6
    ctx->pc = 0x120f10u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x120f14: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x120f14u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x120f18: 0x20d8025  or          $s0, $s0, $t5
    ctx->pc = 0x120f18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 13));
    // 0x120f1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x120f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_120f20:
    // 0x120f20: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x120f20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120f24: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x120f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120f28: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x120f28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x120f2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x120f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120f30: 0x3e00008  jr          $ra
    ctx->pc = 0x120F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F30u;
        // 0x120f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120F38u;
}
