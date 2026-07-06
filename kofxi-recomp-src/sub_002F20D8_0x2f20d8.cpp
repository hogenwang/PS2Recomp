#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F20D8
// Address: 0x2f20d8 - 0x2f2178
void sub_002F20D8_0x2f20d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F20D8_0x2f20d8");
#endif

    switch (ctx->pc) {
        case 0x2f20ecu: goto label_2f20ec;
        case 0x2f20fcu: goto label_2f20fc;
        case 0x2f2108u: goto label_2f2108;
        case 0x2f2114u: goto label_2f2114;
        case 0x2f2138u: goto label_2f2138;
        case 0x2f2148u: goto label_2f2148;
        case 0x2f215cu: goto label_2f215c;
        case 0x2f2164u: goto label_2f2164;
        default: break;
    }

    ctx->pc = 0x2f20d8u;

    // 0x2f20d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f20d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f20dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f20dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f20e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f20e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f20e4: 0xc0bdfd2  jal         func_2F7F48
    ctx->pc = 0x2F20E4u;
    SET_GPR_U32(ctx, 31, 0x2F20ECu);
    ctx->pc = 0x2F20E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F20E4u;
            // 0x2f20e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7F48u;
    if (runtime->hasFunction(0x2F7F48u)) {
        auto targetFn = runtime->lookupFunction(0x2F7F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20ECu; }
        if (ctx->pc != 0x2F20ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7F48_0x2f7f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20ECu; }
        if (ctx->pc != 0x2F20ECu) { return; }
    }
    ctx->pc = 0x2F20ECu;
label_2f20ec:
    // 0x2f20ec: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2f20ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2f20f0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2f20f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2f20f4: 0xc0bd44c  jal         func_2F5130
    ctx->pc = 0x2F20F4u;
    SET_GPR_U32(ctx, 31, 0x2F20FCu);
    ctx->pc = 0x2F20F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F20F4u;
            // 0x2f20f8: 0x8e040090  lw          $a0, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5130u;
    if (runtime->hasFunction(0x2F5130u)) {
        auto targetFn = runtime->lookupFunction(0x2F5130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20FCu; }
        if (ctx->pc != 0x2F20FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5130_0x2f5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F20FCu; }
        if (ctx->pc != 0x2F20FCu) { return; }
    }
    ctx->pc = 0x2F20FCu;
label_2f20fc:
    // 0x2f20fc: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2f20fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x2f2100: 0xc0bd44c  jal         func_2F5130
    ctx->pc = 0x2F2100u;
    SET_GPR_U32(ctx, 31, 0x2F2108u);
    ctx->pc = 0x2F2104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2100u;
            // 0x2f2104: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5130u;
    if (runtime->hasFunction(0x2F5130u)) {
        auto targetFn = runtime->lookupFunction(0x2F5130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2108u; }
        if (ctx->pc != 0x2F2108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5130_0x2f5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2108u; }
        if (ctx->pc != 0x2F2108u) { return; }
    }
    ctx->pc = 0x2F2108u;
label_2f2108:
    // 0x2f2108: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x2f2108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x2f210c: 0xc0bd594  jal         func_2F5650
    ctx->pc = 0x2F210Cu;
    SET_GPR_U32(ctx, 31, 0x2F2114u);
    ctx->pc = 0x2F2110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F210Cu;
            // 0x2f2110: 0x8e0400bc  lw          $a0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5650u;
    if (runtime->hasFunction(0x2F5650u)) {
        auto targetFn = runtime->lookupFunction(0x2F5650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2114u; }
        if (ctx->pc != 0x2F2114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5650_0x2f5650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2114u; }
        if (ctx->pc != 0x2F2114u) { return; }
    }
    ctx->pc = 0x2F2114u;
label_2f2114:
    // 0x2f2114: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x2f2114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2f2118: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2118u;
    {
        const bool branch_taken_0x2f2118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F211Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2118u;
            // 0x2f211c: 0xae0000bc  sw          $zero, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2118) {
            ctx->pc = 0x2F2138u;
            goto label_2f2138;
        }
    }
    ctx->pc = 0x2F2120u;
    // 0x2f2120: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x2f2120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2f2124: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2f2124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2f2128: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2128u;
    {
        const bool branch_taken_0x2f2128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2128) {
            ctx->pc = 0x2F212Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2128u;
            // 0x2f212c: 0xae0000c0  sw          $zero, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F213Cu;
            goto label_2f213c;
        }
    }
    ctx->pc = 0x2F2130u;
    // 0x2f2130: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F2130u;
    SET_GPR_U32(ctx, 31, 0x2F2138u);
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2138u; }
        if (ctx->pc != 0x2F2138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2138u; }
        if (ctx->pc != 0x2F2138u) { return; }
    }
    ctx->pc = 0x2F2138u;
label_2f2138:
    // 0x2f2138: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x2f2138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_2f213c:
    // 0x2f213c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f213cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2140: 0xc0bc82e  jal         func_2F20B8
    ctx->pc = 0x2F2140u;
    SET_GPR_U32(ctx, 31, 0x2F2148u);
    ctx->pc = 0x2F2144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2140u;
            // 0x2f2144: 0xae0000c4  sw          $zero, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F20B8u;
    if (runtime->hasFunction(0x2F20B8u)) {
        auto targetFn = runtime->lookupFunction(0x2F20B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2148u; }
        if (ctx->pc != 0x2F2148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F20B8_0x2f20b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2148u; }
        if (ctx->pc != 0x2F2148u) { return; }
    }
    ctx->pc = 0x2F2148u;
label_2f2148:
    // 0x2f2148: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f2148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f214c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F214Cu;
    {
        const bool branch_taken_0x2f214c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f214c) {
            ctx->pc = 0x2F215Cu;
            goto label_2f215c;
        }
    }
    ctx->pc = 0x2F2154u;
    // 0x2f2154: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F2154u;
    SET_GPR_U32(ctx, 31, 0x2F215Cu);
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F215Cu; }
        if (ctx->pc != 0x2F215Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F215Cu; }
        if (ctx->pc != 0x2F215Cu) { return; }
    }
    ctx->pc = 0x2F215Cu;
label_2f215c:
    // 0x2f215c: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F215Cu;
    SET_GPR_U32(ctx, 31, 0x2F2164u);
    ctx->pc = 0x2F2160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F215Cu;
            // 0x2f2160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (runtime->hasFunction(0x2F9178u)) {
        auto targetFn = runtime->lookupFunction(0x2F9178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2164u; }
        if (ctx->pc != 0x2F2164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9178_0x2f9178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2164u; }
        if (ctx->pc != 0x2F2164u) { return; }
    }
    ctx->pc = 0x2F2164u;
label_2f2164:
    // 0x2f2164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f2164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2168: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f2168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f216c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f216cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2170: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2170u;
            // 0x2f2174: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F2178u;
    ctx->pc = 0x2f2178u;
}
