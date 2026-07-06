#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032D010
// Address: 0x32d010 - 0x32d0a0
void sub_0032D010_0x32d010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D010_0x32d010");
#endif

    switch (ctx->pc) {
        case 0x32d040u: goto label_32d040;
        case 0x32d054u: goto label_32d054;
        case 0x32d074u: goto label_32d074;
        case 0x32d088u: goto label_32d088;
        default: break;
    }

    ctx->pc = 0x32d010u;

    // 0x32d010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d014: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32d014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32d018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d01c: 0x9042f35b  lbu         $v0, -0xCA5($v0)
    ctx->pc = 0x32d01cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964059)));
    // 0x32d020: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32D020u;
    {
        const bool branch_taken_0x32d020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D020u;
            // 0x32d024: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d020) {
            ctx->pc = 0x32D05Cu;
            goto label_32d05c;
        }
    }
    ctx->pc = 0x32D028u;
    // 0x32d028: 0x28c10018  slti        $at, $a2, 0x18
    ctx->pc = 0x32d028u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x32d02c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x32D02Cu;
    {
        const bool branch_taken_0x32d02c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d02c) {
            ctx->pc = 0x32D048u;
            goto label_32d048;
        }
    }
    ctx->pc = 0x32D034u;
    // 0x32d034: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x32d034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x32d038: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x32D038u;
    SET_GPR_U32(ctx, 31, 0x32D040u);
    ctx->pc = 0x32D03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D038u;
            // 0x32d03c: 0x24a545e8  addiu       $a1, $a1, 0x45E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D040u; }
        if (ctx->pc != 0x32D040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D040u; }
        if (ctx->pc != 0x32D040u) { return; }
    }
    ctx->pc = 0x32D040u;
label_32d040:
    // 0x32d040: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32D040u;
    {
        const bool branch_taken_0x32d040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D040u;
            // 0x32d044: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d040) {
            ctx->pc = 0x32D08Cu;
            goto label_32d08c;
        }
    }
    ctx->pc = 0x32D048u;
label_32d048:
    // 0x32d048: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x32d048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x32d04c: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x32D04Cu;
    SET_GPR_U32(ctx, 31, 0x32D054u);
    ctx->pc = 0x32D050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D04Cu;
            // 0x32d050: 0x24a545f8  addiu       $a1, $a1, 0x45F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D054u; }
        if (ctx->pc != 0x32D054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D054u; }
        if (ctx->pc != 0x32D054u) { return; }
    }
    ctx->pc = 0x32D054u;
label_32d054:
    // 0x32d054: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x32D054u;
    {
        const bool branch_taken_0x32d054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d054) {
            ctx->pc = 0x32D088u;
            goto label_32d088;
        }
    }
    ctx->pc = 0x32D05Cu;
label_32d05c:
    // 0x32d05c: 0x28c10018  slti        $at, $a2, 0x18
    ctx->pc = 0x32d05cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x32d060: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x32D060u;
    {
        const bool branch_taken_0x32d060 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d060) {
            ctx->pc = 0x32D07Cu;
            goto label_32d07c;
        }
    }
    ctx->pc = 0x32D068u;
    // 0x32d068: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x32d068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x32d06c: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x32D06Cu;
    SET_GPR_U32(ctx, 31, 0x32D074u);
    ctx->pc = 0x32D070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D06Cu;
            // 0x32d070: 0x24a54608  addiu       $a1, $a1, 0x4608 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D074u; }
        if (ctx->pc != 0x32D074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D074u; }
        if (ctx->pc != 0x32D074u) { return; }
    }
    ctx->pc = 0x32D074u;
label_32d074:
    // 0x32d074: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32D074u;
    {
        const bool branch_taken_0x32d074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d074) {
            ctx->pc = 0x32D088u;
            goto label_32d088;
        }
    }
    ctx->pc = 0x32D07Cu;
label_32d07c:
    // 0x32d07c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x32d07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x32d080: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x32D080u;
    SET_GPR_U32(ctx, 31, 0x32D088u);
    ctx->pc = 0x32D084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32D080u;
            // 0x32d084: 0x24a54618  addiu       $a1, $a1, 0x4618 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D088u; }
        if (ctx->pc != 0x32D088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32D088u; }
        if (ctx->pc != 0x32D088u) { return; }
    }
    ctx->pc = 0x32D088u;
label_32d088:
    // 0x32d088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32d08c:
    // 0x32d08c: 0x3e00008  jr          $ra
    ctx->pc = 0x32D08Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D08Cu;
            // 0x32d090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32D094u;
    // 0x32d094: 0x0  nop
    ctx->pc = 0x32d094u;
    // NOP
    // 0x32d098: 0x0  nop
    ctx->pc = 0x32d098u;
    // NOP
    // 0x32d09c: 0x0  nop
    ctx->pc = 0x32d09cu;
    // NOP
    ctx->pc = 0x32d0a0u;
}
