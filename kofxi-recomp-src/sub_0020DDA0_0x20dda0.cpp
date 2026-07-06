#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020DDA0
// Address: 0x20dda0 - 0x20de20
void sub_0020DDA0_0x20dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DDA0_0x20dda0");
#endif

    switch (ctx->pc) {
        case 0x20ddccu: goto label_20ddcc;
        case 0x20ddf0u: goto label_20ddf0;
        default: break;
    }

    ctx->pc = 0x20dda0u;

    // 0x20dda0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20dda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20dda4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20dda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20dda8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20dda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20ddac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20ddacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20ddb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20ddb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20ddb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20ddb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ddb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20ddb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20ddbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20ddbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ddc0: 0x94c90000  lhu         $t1, 0x0($a2)
    ctx->pc = 0x20ddc0u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20ddc4: 0x11230010  beq         $t1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20DDC4u;
    {
        const bool branch_taken_0x20ddc4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x20DDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DDC4u;
            // 0x20ddc8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddc4) {
            ctx->pc = 0x20DE08u;
            goto label_20de08;
        }
    }
    ctx->pc = 0x20DDCCu;
label_20ddcc:
    // 0x20ddcc: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x20ddccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x20ddd0: 0x11230007  beq         $t1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DDD0u;
    {
        const bool branch_taken_0x20ddd0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x20ddd0) {
            ctx->pc = 0x20DDF0u;
            goto label_20ddf0;
        }
    }
    ctx->pc = 0x20DDD8u;
    // 0x20ddd8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x20ddd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20dddc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20dddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dde0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20dde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dde4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x20dde4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dde8: 0xc08373c  jal         func_20DCF0
    ctx->pc = 0x20DDE8u;
    SET_GPR_U32(ctx, 31, 0x20DDF0u);
    ctx->pc = 0x20DDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DDE8u;
            // 0x20ddec: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20DCF0u;
    if (runtime->hasFunction(0x20DCF0u)) {
        auto targetFn = runtime->lookupFunction(0x20DCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDF0u; }
        if (ctx->pc != 0x20DDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020DCF0_0x20dcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDF0u; }
        if (ctx->pc != 0x20DDF0u) { return; }
    }
    ctx->pc = 0x20DDF0u;
label_20ddf0:
    // 0x20ddf0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x20ddf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x20ddf4: 0x96090000  lhu         $t1, 0x0($s0)
    ctx->pc = 0x20ddf4u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20ddf8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20ddf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20ddfc: 0x1523fff3  bne         $t1, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x20DDFCu;
    {
        const bool branch_taken_0x20ddfc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x20DE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DDFCu;
            // 0x20de00: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddfc) {
            ctx->pc = 0x20DDCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ddcc;
        }
    }
    ctx->pc = 0x20DE04u;
    // 0x20de04: 0x0  nop
    ctx->pc = 0x20de04u;
    // NOP
label_20de08:
    // 0x20de08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20de08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20de0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20de0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20de10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20de10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20de14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20de14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20de18: 0x3e00008  jr          $ra
    ctx->pc = 0x20DE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DE18u;
            // 0x20de1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20DE20u;
    ctx->pc = 0x20de20u;
}
