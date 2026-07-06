#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033AD30
// Address: 0x33ad30 - 0x33adb0
void sub_0033AD30_0x33ad30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AD30_0x33ad30");
#endif

    switch (ctx->pc) {
        case 0x33ad74u: goto label_33ad74;
        case 0x33ad90u: goto label_33ad90;
        case 0x33ad9cu: goto label_33ad9c;
        default: break;
    }

    ctx->pc = 0x33ad30u;

    // 0x33ad30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33ad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33ad34: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33ad38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33ad38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33ad3c: 0x9064b249  lbu         $a0, -0x4DB7($v1)
    ctx->pc = 0x33ad3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947401)));
    // 0x33ad40: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33ad44: 0x9063e871  lbu         $v1, -0x178F($v1)
    ctx->pc = 0x33ad44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961265)));
    // 0x33ad48: 0x50640015  beql        $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x33AD48u;
    {
        const bool branch_taken_0x33ad48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33ad48) {
            ctx->pc = 0x33AD4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33AD48u;
            // 0x33ad4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33ADA0u;
            goto label_33ada0;
        }
    }
    ctx->pc = 0x33AD50u;
    // 0x33ad50: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x33ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x33ad54: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x33AD54u;
    {
        const bool branch_taken_0x33ad54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ad54) {
            ctx->pc = 0x33AD9Cu;
            goto label_33ad9c;
        }
    }
    ctx->pc = 0x33AD5Cu;
    // 0x33ad5c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33ad60: 0x906395c8  lbu         $v1, -0x6A38($v1)
    ctx->pc = 0x33ad60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940104)));
    // 0x33ad64: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x33AD64u;
    {
        const bool branch_taken_0x33ad64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ad64) {
            ctx->pc = 0x33AD9Cu;
            goto label_33ad9c;
        }
    }
    ctx->pc = 0x33AD6Cu;
    // 0x33ad6c: 0xc055684  jal         func_155A10
    ctx->pc = 0x33AD6Cu;
    SET_GPR_U32(ctx, 31, 0x33AD74u);
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AD74u; }
        if (ctx->pc != 0x33AD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AD74u; }
        if (ctx->pc != 0x33AD74u) { return; }
    }
    ctx->pc = 0x33AD74u;
label_33ad74:
    // 0x33ad74: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33ad78: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x33ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x33ad7c: 0x9042b249  lbu         $v0, -0x4DB7($v0)
    ctx->pc = 0x33ad7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947401)));
    // 0x33ad80: 0x24632db0  addiu       $v1, $v1, 0x2DB0
    ctx->pc = 0x33ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11696));
    // 0x33ad84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x33ad84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33ad88: 0xc0550fc  jal         func_1543F0
    ctx->pc = 0x33AD88u;
    SET_GPR_U32(ctx, 31, 0x33AD90u);
    ctx->pc = 0x33AD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AD88u;
            // 0x33ad8c: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1543F0u;
    if (runtime->hasFunction(0x1543F0u)) {
        auto targetFn = runtime->lookupFunction(0x1543F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AD90u; }
        if (ctx->pc != 0x33AD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001543F0_0x1543f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AD90u; }
        if (ctx->pc != 0x33AD90u) { return; }
    }
    ctx->pc = 0x33AD90u;
label_33ad90:
    // 0x33ad90: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x33ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x33ad94: 0xc052d44  jal         func_14B510
    ctx->pc = 0x33AD94u;
    SET_GPR_U32(ctx, 31, 0x33AD9Cu);
    ctx->pc = 0x33AD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33AD94u;
            // 0x33ad98: 0x8044f340  lb          $a0, -0xCC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B510u;
    if (runtime->hasFunction(0x14B510u)) {
        auto targetFn = runtime->lookupFunction(0x14B510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AD9Cu; }
        if (ctx->pc != 0x33AD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B510_0x14b510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33AD9Cu; }
        if (ctx->pc != 0x33AD9Cu) { return; }
    }
    ctx->pc = 0x33AD9Cu;
label_33ad9c:
    // 0x33ad9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33ad9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33ada0:
    // 0x33ada0: 0x3e00008  jr          $ra
    ctx->pc = 0x33ADA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33ADA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33ADA0u;
            // 0x33ada4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33ADA8u;
    // 0x33ada8: 0x0  nop
    ctx->pc = 0x33ada8u;
    // NOP
    // 0x33adac: 0x0  nop
    ctx->pc = 0x33adacu;
    // NOP
    ctx->pc = 0x33adb0u;
}
