#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00283100
// Address: 0x283100 - 0x2831a8
void sub_00283100_0x283100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283100_0x283100");
#endif

    switch (ctx->pc) {
        case 0x283180u: goto label_283180;
        case 0x283190u: goto label_283190;
        default: break;
    }

    ctx->pc = 0x283100u;

    // 0x283100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x283100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x283104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x283104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x283108: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x283108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28310c: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x28310Cu;
    {
        const bool branch_taken_0x28310c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x283110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28310Cu;
            // 0x283110: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28310c) {
            ctx->pc = 0x283198u;
            goto label_283198;
        }
    }
    ctx->pc = 0x283114u;
    // 0x283114: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x283114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x283118: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x283118u;
    {
        const bool branch_taken_0x283118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28311Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283118u;
            // 0x28311c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283118) {
            ctx->pc = 0x28319Cu;
            goto label_28319c;
        }
    }
    ctx->pc = 0x283120u;
    // 0x283120: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x283120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x283124: 0x2862001d  slti        $v0, $v1, 0x1D
    ctx->pc = 0x283124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x283128: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x283128u;
    {
        const bool branch_taken_0x283128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28312Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283128u;
            // 0x28312c: 0x28620010  slti        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283128) {
            ctx->pc = 0x28315Cu;
            goto label_28315c;
        }
    }
    ctx->pc = 0x283130u;
    // 0x283130: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x283130u;
    {
        const bool branch_taken_0x283130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283130u;
            // 0x283134: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283130) {
            ctx->pc = 0x283188u;
            goto label_283188;
        }
    }
    ctx->pc = 0x283138u;
    // 0x283138: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x283138u;
    {
        const bool branch_taken_0x283138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283138) {
            ctx->pc = 0x28313Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283138u;
            // 0x28313c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x283194u;
            goto label_283194;
        }
    }
    ctx->pc = 0x283140u;
    // 0x283140: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x283140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x283144: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x283144u;
    {
        const bool branch_taken_0x283144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283144u;
            // 0x283148: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283144) {
            ctx->pc = 0x283188u;
            goto label_283188;
        }
    }
    ctx->pc = 0x28314Cu;
    // 0x28314c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28314Cu;
    {
        const bool branch_taken_0x28314c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28314c) {
            ctx->pc = 0x283178u;
            goto label_283178;
        }
    }
    ctx->pc = 0x283154u;
    // 0x283154: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x283154u;
    {
        const bool branch_taken_0x283154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283154u;
            // 0x283158: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283154) {
            ctx->pc = 0x283194u;
            goto label_283194;
        }
    }
    ctx->pc = 0x28315Cu;
label_28315c:
    // 0x28315c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x28315cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x283160: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x283160u;
    {
        const bool branch_taken_0x283160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x283164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283160u;
            // 0x283164: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283160) {
            ctx->pc = 0x283188u;
            goto label_283188;
        }
    }
    ctx->pc = 0x283168u;
    // 0x283168: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x283168u;
    {
        const bool branch_taken_0x283168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x283168) {
            ctx->pc = 0x283188u;
            goto label_283188;
        }
    }
    ctx->pc = 0x283170u;
    // 0x283170: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x283170u;
    {
        const bool branch_taken_0x283170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283170u;
            // 0x283174: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283170) {
            ctx->pc = 0x283194u;
            goto label_283194;
        }
    }
    ctx->pc = 0x283178u;
label_283178:
    // 0x283178: 0xc0a03b6  jal         func_280ED8
    ctx->pc = 0x283178u;
    SET_GPR_U32(ctx, 31, 0x283180u);
    ctx->pc = 0x280ED8u;
    if (runtime->hasFunction(0x280ED8u)) {
        auto targetFn = runtime->lookupFunction(0x280ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283180u; }
        if (ctx->pc != 0x283180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280ED8_0x280ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283180u; }
        if (ctx->pc != 0x283180u) { return; }
    }
    ctx->pc = 0x283180u;
label_283180:
    // 0x283180: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x283180u;
    {
        const bool branch_taken_0x283180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283180u;
            // 0x283184: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283180) {
            ctx->pc = 0x283194u;
            goto label_283194;
        }
    }
    ctx->pc = 0x283188u;
label_283188:
    // 0x283188: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x283188u;
    SET_GPR_U32(ctx, 31, 0x283190u);
    ctx->pc = 0x28318Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283188u;
            // 0x28318c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281C30u;
    if (runtime->hasFunction(0x281C30u)) {
        auto targetFn = runtime->lookupFunction(0x281C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283190u; }
        if (ctx->pc != 0x283190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281C30_0x281c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283190u; }
        if (ctx->pc != 0x283190u) { return; }
    }
    ctx->pc = 0x283190u;
label_283190:
    // 0x283190: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x283190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_283194:
    // 0x283194: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x283194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_283198:
    // 0x283198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28319c:
    // 0x28319c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28319cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2831a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2831A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2831A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2831A0u;
            // 0x2831a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2831A8u;
    ctx->pc = 0x2831a8u;
}
