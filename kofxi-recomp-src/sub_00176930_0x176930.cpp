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

// Function: sub_00176930
// Address: 0x176930 - 0x1769b0
void sub_00176930_0x176930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176930_0x176930");
#endif

    switch (ctx->pc) {
        case 0x176948u: goto label_176948;
        case 0x176970u: goto label_176970;
        default: break;
    }

    ctx->pc = 0x176930u;

    // 0x176930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x176934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x176934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x176938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x176938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17693c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17693cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176940: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x176940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176944: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x176944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176948:
    // 0x176948: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x176948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17694c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17694cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176950: 0x9044db10  lbu         $a0, -0x24F0($v0)
    ctx->pc = 0x176950u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x176954: 0x2231004  sllv        $v0, $v1, $s1
    ctx->pc = 0x176954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x176958: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x176958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x17695c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17695Cu;
    {
        const bool branch_taken_0x17695c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17695c) {
            ctx->pc = 0x176980u;
            goto label_176980;
        }
    }
    ctx->pc = 0x176964u;
    // 0x176964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176968: 0xc05c6cc  jal         func_171B30
    ctx->pc = 0x176968u;
    SET_GPR_U32(ctx, 31, 0x176970u);
    ctx->pc = 0x17696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176968u;
    // 0x17696c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171B30u, 0x176968u, 0x176970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176970u;
label_176970:
    // 0x176970: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x176970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x176974: 0x2402dfff  addiu       $v0, $zero, -0x2001
    ctx->pc = 0x176974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x176978: 0x2031825  or          $v1, $s0, $v1
    ctx->pc = 0x176978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x17697c: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x17697cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_176980:
    // 0x176980: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x176980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x176984: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x176984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x176988: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x176988u;
    {
        const bool branch_taken_0x176988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176988) {
            ctx->pc = 0x176948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_176948;
        }
    }
    ctx->pc = 0x176990u;
    // 0x176990: 0x32021f00  andi        $v0, $s0, 0x1F00
    ctx->pc = 0x176990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7936);
    // 0x176994: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x176994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176998: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17699c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17699cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1769a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1769a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1769a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1769A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1769A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1769A4u;
        // 0x1769a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1769A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1769ACu;
    // 0x1769ac: 0x0  nop
    ctx->pc = 0x1769acu;
    // NOP
}
