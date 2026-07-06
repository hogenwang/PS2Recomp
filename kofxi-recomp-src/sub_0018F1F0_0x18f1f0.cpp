#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018F1F0
// Address: 0x18f1f0 - 0x18f2b0
void sub_0018F1F0_0x18f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F1F0_0x18f1f0");
#endif

    switch (ctx->pc) {
        case 0x18f258u: goto label_18f258;
        case 0x18f26cu: goto label_18f26c;
        case 0x18f278u: goto label_18f278;
        default: break;
    }

    ctx->pc = 0x18f1f0u;

    // 0x18f1f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18f1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18f1f4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x18f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18f1f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18f1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18f1fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18f1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18f200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f204: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x18f204u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x18f208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f20c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x18f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x18f210: 0x2484bc40  addiu       $a0, $a0, -0x43C0
    ctx->pc = 0x18f210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949952));
    // 0x18f214: 0x918021  addu        $s0, $a0, $s1
    ctx->pc = 0x18f214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x18f218: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x18f218u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18f21c: 0x5083001d  beql        $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x18F21Cu;
    {
        const bool branch_taken_0x18f21c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18f21c) {
            ctx->pc = 0x18F220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F21Cu;
            // 0x18f220: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F294u;
            goto label_18f294;
        }
    }
    ctx->pc = 0x18F224u;
    // 0x18f224: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18f224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18f228: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18f228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18f22c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f230: 0x2442bd50  addiu       $v0, $v0, -0x42B0
    ctx->pc = 0x18f230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950224));
    // 0x18f234: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18f234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18f238: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18f238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18f23c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18f240: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x18f240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f244: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x18f244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x18f248: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F248u;
    {
        const bool branch_taken_0x18f248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f248) {
            ctx->pc = 0x18F24Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F248u;
            // 0x18f24c: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F25Cu;
            goto label_18f25c;
        }
    }
    ctx->pc = 0x18F250u;
    // 0x18f250: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F250u;
    SET_GPR_U32(ctx, 31, 0x18F258u);
    ctx->pc = 0x18F254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F250u;
            // 0x18f254: 0x26440014  addiu       $a0, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F258u; }
        if (ctx->pc != 0x18F258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F258u; }
        if (ctx->pc != 0x18F258u) { return; }
    }
    ctx->pc = 0x18F258u;
label_18f258:
    // 0x18f258: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x18f258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_18f25c:
    // 0x18f25c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F25Cu;
    {
        const bool branch_taken_0x18f25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f25c) {
            ctx->pc = 0x18F260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18F25Cu;
            // 0x18f260: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18F270u;
            goto label_18f270;
        }
    }
    ctx->pc = 0x18F264u;
    // 0x18f264: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18F264u;
    SET_GPR_U32(ctx, 31, 0x18F26Cu);
    ctx->pc = 0x18F268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F264u;
            // 0x18f268: 0x26440078  addiu       $a0, $s2, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F26Cu; }
        if (ctx->pc != 0x18F26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F26Cu; }
        if (ctx->pc != 0x18F26Cu) { return; }
    }
    ctx->pc = 0x18F26Cu;
label_18f26c:
    // 0x18f26c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18f26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18f270:
    // 0x18f270: 0xc06353c  jal         func_18D4F0
    ctx->pc = 0x18F270u;
    SET_GPR_U32(ctx, 31, 0x18F278u);
    ctx->pc = 0x18D4F0u;
    if (runtime->hasFunction(0x18D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x18D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F278u; }
        if (ctx->pc != 0x18F278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D4F0_0x18d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F278u; }
        if (ctx->pc != 0x18F278u) { return; }
    }
    ctx->pc = 0x18F278u;
label_18f278:
    // 0x18f278: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18f278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18f27c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x18f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18f280: 0x2463bcc0  addiu       $v1, $v1, -0x4340
    ctx->pc = 0x18f280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950080));
    // 0x18f284: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x18f284u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18f288: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x18f288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18f28c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x18f28cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18f290: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18f290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18f294:
    // 0x18f294: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18f294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18f298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f29c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x18F2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F2A0u;
            // 0x18f2a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F2A8u;
    // 0x18f2a8: 0x0  nop
    ctx->pc = 0x18f2a8u;
    // NOP
    // 0x18f2ac: 0x0  nop
    ctx->pc = 0x18f2acu;
    // NOP
    ctx->pc = 0x18f2b0u;
}
