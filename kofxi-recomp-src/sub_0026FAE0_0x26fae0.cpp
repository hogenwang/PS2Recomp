#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026FAE0
// Address: 0x26fae0 - 0x26fb68
void sub_0026FAE0_0x26fae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FAE0_0x26fae0");
#endif

    switch (ctx->pc) {
        case 0x26fb08u: goto label_26fb08;
        case 0x26fb1cu: goto label_26fb1c;
        case 0x26fb34u: goto label_26fb34;
        case 0x26fb4cu: goto label_26fb4c;
        default: break;
    }

    ctx->pc = 0x26fae0u;

    // 0x26fae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26fae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26fae4: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x26fae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x26fae8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26fae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x26faec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26faecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26faf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26faf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26faf4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26faf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26faf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26faf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26fafc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb00: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26FB00u;
    SET_GPR_U32(ctx, 31, 0x26FB08u);
    ctx->pc = 0x26FB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB00u;
            // 0x26fb04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FB08u; }
        if (ctx->pc != 0x26FB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FB08u; }
        if (ctx->pc != 0x26FB08u) { return; }
    }
    ctx->pc = 0x26FB08u;
label_26fb08:
    // 0x26fb08: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26fb08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26fb0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb10: 0x24a598f0  addiu       $a1, $a1, -0x6710
    ctx->pc = 0x26fb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940912));
    // 0x26fb14: 0xc04a966  jal         func_12A598
    ctx->pc = 0x26FB14u;
    SET_GPR_U32(ctx, 31, 0x26FB1Cu);
    ctx->pc = 0x26FB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB14u;
            // 0x26fb18: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FB1Cu; }
        if (ctx->pc != 0x26FB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FB1Cu; }
        if (ctx->pc != 0x26FB1Cu) { return; }
    }
    ctx->pc = 0x26FB1Cu;
label_26fb1c:
    // 0x26fb1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26fb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb20: 0x3405c084  ori         $a1, $zero, 0xC084
    ctx->pc = 0x26fb20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49284);
    // 0x26fb24: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26fb24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26fb28: 0x34a569d3  ori         $a1, $a1, 0x69D3
    ctx->pc = 0x26fb28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27091);
    // 0x26fb2c: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x26FB2Cu;
    SET_GPR_U32(ctx, 31, 0x26FB34u);
    ctx->pc = 0x26FB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB2Cu;
            // 0x26fb30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FB34u; }
        if (ctx->pc != 0x26FB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FB34u; }
        if (ctx->pc != 0x26FB34u) { return; }
    }
    ctx->pc = 0x26FB34u;
label_26fb34:
    // 0x26fb34: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26FB34u;
    {
        const bool branch_taken_0x26fb34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26FB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB34u;
            // 0x26fb38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb34) {
            ctx->pc = 0x26FB50u;
            goto label_26fb50;
        }
    }
    ctx->pc = 0x26FB3Cu;
    // 0x26fb3c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26fb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26fb40: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26fb44: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x26FB44u;
    SET_GPR_U32(ctx, 31, 0x26FB4Cu);
    ctx->pc = 0x26FB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB44u;
            // 0x26fb48: 0x24a59900  addiu       $a1, $a1, -0x6700 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FB4Cu; }
        if (ctx->pc != 0x26FB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FB4Cu; }
        if (ctx->pc != 0x26FB4Cu) { return; }
    }
    ctx->pc = 0x26FB4Cu;
label_26fb4c:
    // 0x26fb4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26fb50:
    // 0x26fb50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26fb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fb54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26fb54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fb58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26fb58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x26FB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB5Cu;
            // 0x26fb60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26FB64u;
    // 0x26fb64: 0x0  nop
    ctx->pc = 0x26fb64u;
    // NOP
    ctx->pc = 0x26fb68u;
}
