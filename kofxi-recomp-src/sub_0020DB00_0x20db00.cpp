#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020DB00
// Address: 0x20db00 - 0x20db80
void sub_0020DB00_0x20db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DB00_0x20db00");
#endif

    switch (ctx->pc) {
        case 0x20db2cu: goto label_20db2c;
        case 0x20db50u: goto label_20db50;
        default: break;
    }

    ctx->pc = 0x20db00u;

    // 0x20db00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20db04: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20db04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20db08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20db08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20db0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20db0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20db10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20db10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20db14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20db14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20db18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20db18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20db1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20db1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20db20: 0x94c90000  lhu         $t1, 0x0($a2)
    ctx->pc = 0x20db20u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20db24: 0x11230010  beq         $t1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20DB24u;
    {
        const bool branch_taken_0x20db24 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x20DB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DB24u;
            // 0x20db28: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db24) {
            ctx->pc = 0x20DB68u;
            goto label_20db68;
        }
    }
    ctx->pc = 0x20DB2Cu;
label_20db2c:
    // 0x20db2c: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x20db2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x20db30: 0x11230007  beq         $t1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20DB30u;
    {
        const bool branch_taken_0x20db30 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x20db30) {
            ctx->pc = 0x20DB50u;
            goto label_20db50;
        }
    }
    ctx->pc = 0x20DB38u;
    // 0x20db38: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x20db38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20db3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20db3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20db40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20db40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20db44: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x20db44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20db48: 0xc08369c  jal         func_20DA70
    ctx->pc = 0x20DB48u;
    SET_GPR_U32(ctx, 31, 0x20DB50u);
    ctx->pc = 0x20DB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DB48u;
            // 0x20db4c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20DA70u;
    if (runtime->hasFunction(0x20DA70u)) {
        auto targetFn = runtime->lookupFunction(0x20DA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DB50u; }
        if (ctx->pc != 0x20DB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020DA70_0x20da70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DB50u; }
        if (ctx->pc != 0x20DB50u) { return; }
    }
    ctx->pc = 0x20DB50u;
label_20db50:
    // 0x20db50: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x20db50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x20db54: 0x96090000  lhu         $t1, 0x0($s0)
    ctx->pc = 0x20db54u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20db58: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20db58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20db5c: 0x1523fff3  bne         $t1, $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x20DB5Cu;
    {
        const bool branch_taken_0x20db5c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x20DB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DB5Cu;
            // 0x20db60: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20db5c) {
            ctx->pc = 0x20DB2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20db2c;
        }
    }
    ctx->pc = 0x20DB64u;
    // 0x20db64: 0x0  nop
    ctx->pc = 0x20db64u;
    // NOP
label_20db68:
    // 0x20db68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20db68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20db6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20db6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20db70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20db70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20db74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20db74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20db78: 0x3e00008  jr          $ra
    ctx->pc = 0x20DB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DB78u;
            // 0x20db7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20DB80u;
    ctx->pc = 0x20db80u;
}
