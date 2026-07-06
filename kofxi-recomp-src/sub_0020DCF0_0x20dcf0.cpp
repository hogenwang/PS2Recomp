#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020DCF0
// Address: 0x20dcf0 - 0x20dda0
void sub_0020DCF0_0x20dcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DCF0_0x20dcf0");
#endif

    switch (ctx->pc) {
        case 0x20dd90u: goto label_20dd90;
        default: break;
    }

    ctx->pc = 0x20dcf0u;

    // 0x20dcf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20dcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20dcf4: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x20dcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x20dcf8: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x20dcf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x20dcfc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x20DCFCu;
    {
        const bool branch_taken_0x20dcfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DCFCu;
            // 0x20dd00: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcfc) {
            ctx->pc = 0x20DD2Cu;
            goto label_20dd2c;
        }
    }
    ctx->pc = 0x20DD04u;
    // 0x20dd04: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x20dd04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20dd08: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DD08u;
    {
        const bool branch_taken_0x20dd08 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20DD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD08u;
            // 0x20dd0c: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd08) {
            ctx->pc = 0x20DD1Cu;
            goto label_20dd1c;
        }
    }
    ctx->pc = 0x20DD10u;
    // 0x20dd10: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DD10u;
    {
        const bool branch_taken_0x20dd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dd10) {
            ctx->pc = 0x20DD14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD10u;
            // 0x20dd14: 0x3122ffff  andi        $v0, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20DD20u;
            goto label_20dd20;
        }
    }
    ctx->pc = 0x20DD18u;
    // 0x20dd18: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x20dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_20dd1c:
    // 0x20dd1c: 0x3122ffff  andi        $v0, $t1, 0xFFFF
    ctx->pc = 0x20dd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
label_20dd20:
    // 0x20dd20: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x20dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x20dd24: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x20DD24u;
    {
        const bool branch_taken_0x20dd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD24u;
            // 0x20dd28: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd24) {
            ctx->pc = 0x20DD74u;
            goto label_20dd74;
        }
    }
    ctx->pc = 0x20DD2Cu;
label_20dd2c:
    // 0x20dd2c: 0x28410120  slti        $at, $v0, 0x120
    ctx->pc = 0x20dd2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)288) ? 1 : 0);
    // 0x20dd30: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x20DD30u;
    {
        const bool branch_taken_0x20dd30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dd30) {
            ctx->pc = 0x20DD34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD30u;
            // 0x20dd34: 0x240c0002  addiu       $t4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20DD5Cu;
            goto label_20dd5c;
        }
    }
    ctx->pc = 0x20DD38u;
    // 0x20dd38: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x20dd38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20dd3c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DD3Cu;
    {
        const bool branch_taken_0x20dd3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20DD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD3Cu;
            // 0x20dd40: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd3c) {
            ctx->pc = 0x20DD50u;
            goto label_20dd50;
        }
    }
    ctx->pc = 0x20DD44u;
    // 0x20dd44: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20DD44u;
    {
        const bool branch_taken_0x20dd44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dd44) {
            ctx->pc = 0x20DD48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD44u;
            // 0x20dd48: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20DD74u;
            goto label_20dd74;
        }
    }
    ctx->pc = 0x20DD4Cu;
    // 0x20dd4c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x20dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_20dd50:
    // 0x20dd50: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x20dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x20dd54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20DD54u;
    {
        const bool branch_taken_0x20dd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dd54) {
            ctx->pc = 0x20DD74u;
            goto label_20dd74;
        }
    }
    ctx->pc = 0x20DD5Cu;
label_20dd5c:
    // 0x20dd5c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DD5Cu;
    {
        const bool branch_taken_0x20dd5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20DD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD5Cu;
            // 0x20dd60: 0x3043000f  andi        $v1, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd5c) {
            ctx->pc = 0x20DD70u;
            goto label_20dd70;
        }
    }
    ctx->pc = 0x20DD64u;
    // 0x20dd64: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DD64u;
    {
        const bool branch_taken_0x20dd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dd64) {
            ctx->pc = 0x20DD68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD64u;
            // 0x20dd68: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20DD74u;
            goto label_20dd74;
        }
    }
    ctx->pc = 0x20DD6Cu;
    // 0x20dd6c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x20dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_20dd70:
    // 0x20dd70: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x20dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_20dd74:
    // 0x20dd74: 0x25900  sll         $t3, $v0, 4
    ctx->pc = 0x20dd74u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20dd78: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x20dd78u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20dd7c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x20dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20dd80: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x20dd80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dd84: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20dd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20dd88: 0xc083680  jal         func_20DA00
    ctx->pc = 0x20DD88u;
    SET_GPR_U32(ctx, 31, 0x20DD90u);
    ctx->pc = 0x20DD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD88u;
            // 0x20dd8c: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20DA00u;
    if (runtime->hasFunction(0x20DA00u)) {
        auto targetFn = runtime->lookupFunction(0x20DA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DD90u; }
        if (ctx->pc != 0x20DD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020DA00_0x20da00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DD90u; }
        if (ctx->pc != 0x20DD90u) { return; }
    }
    ctx->pc = 0x20DD90u;
label_20dd90:
    // 0x20dd90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20dd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dd94: 0x3e00008  jr          $ra
    ctx->pc = 0x20DD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD94u;
            // 0x20dd98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20DD9Cu;
    // 0x20dd9c: 0x0  nop
    ctx->pc = 0x20dd9cu;
    // NOP
    ctx->pc = 0x20dda0u;
}
