#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FDFF0
// Address: 0x2fdff0 - 0x2fe060
void sub_002FDFF0_0x2fdff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDFF0_0x2fdff0");
#endif

    switch (ctx->pc) {
        case 0x2fe008u: goto label_2fe008;
        case 0x2fe044u: goto label_2fe044;
        default: break;
    }

    ctx->pc = 0x2fdff0u;

    // 0x2fdff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fdff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fdff4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2fdff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2fdff8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fdff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fdffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fdffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe000: 0xc0691d0  jal         func_1A4740
    ctx->pc = 0x2FE000u;
    SET_GPR_U32(ctx, 31, 0x2FE008u);
    ctx->pc = 0x2FE004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE000u;
            // 0x2fe004: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4740u;
    if (runtime->hasFunction(0x1A4740u)) {
        auto targetFn = runtime->lookupFunction(0x1A4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE008u; }
        if (ctx->pc != 0x2FE008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4740_0x1a4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE008u; }
        if (ctx->pc != 0x2FE008u) { return; }
    }
    ctx->pc = 0x2FE008u;
label_2fe008:
    // 0x2fe008: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE008u;
    {
        const bool branch_taken_0x2fe008 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe008) {
            ctx->pc = 0x2FE01Cu;
            goto label_2fe01c;
        }
    }
    ctx->pc = 0x2FE010u;
    // 0x2fe010: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe014: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE014u;
    {
        const bool branch_taken_0x2fe014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE014u;
            // 0x2fe018: 0xac50be80  sw          $s0, -0x4180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe014) {
            ctx->pc = 0x2FE02Cu;
            goto label_2fe02c;
        }
    }
    ctx->pc = 0x2FE01Cu;
label_2fe01c:
    // 0x2fe01c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2fe01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2fe020: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe024: 0x2463da10  addiu       $v1, $v1, -0x25F0
    ctx->pc = 0x2fe024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957584));
    // 0x2fe028: 0xac43be80  sw          $v1, -0x4180($v0)
    ctx->pc = 0x2fe028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
label_2fe02c:
    // 0x2fe02c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fe02cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fe030: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fe030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fe034: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe038: 0x2484dae0  addiu       $a0, $a0, -0x2520
    ctx->pc = 0x2fe038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957792));
    // 0x2fe03c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FE03Cu;
    SET_GPR_U32(ctx, 31, 0x2FE044u);
    ctx->pc = 0x2FE040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE03Cu;
            // 0x2fe040: 0xa443be90  sh          $v1, -0x4170($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE044u; }
        if (ctx->pc != 0x2FE044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE044u; }
        if (ctx->pc != 0x2FE044u) { return; }
    }
    ctx->pc = 0x2FE044u;
label_2fe044:
    // 0x2fe044: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fe044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe04c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE04Cu;
            // 0x2fe050: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE054u;
    // 0x2fe054: 0x0  nop
    ctx->pc = 0x2fe054u;
    // NOP
    // 0x2fe058: 0x0  nop
    ctx->pc = 0x2fe058u;
    // NOP
    // 0x2fe05c: 0x0  nop
    ctx->pc = 0x2fe05cu;
    // NOP
    ctx->pc = 0x2fe060u;
}
