#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D18B0
// Address: 0x2d18b0 - 0x2d19a8
void sub_002D18B0_0x2d18b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D18B0_0x2d18b0");
#endif

    switch (ctx->pc) {
        case 0x2d18b8u: goto label_2d18b8;
        case 0x2d18f4u: goto label_2d18f4;
        case 0x2d1918u: goto label_2d1918;
        case 0x2d1924u: goto label_2d1924;
        case 0x2d1938u: goto label_2d1938;
        case 0x2d194cu: goto label_2d194c;
        case 0x2d1954u: goto label_2d1954;
        case 0x2d1978u: goto label_2d1978;
        case 0x2d1980u: goto label_2d1980;
        default: break;
    }

    ctx->pc = 0x2d18b0u;

    // 0x2d18b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d18b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d18b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d18b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d18b8:
    // 0x2d18b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d18b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d18bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d18bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d18c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d18c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d18c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d18c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d18c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d18c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d18cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d18ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d18d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d18d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d18d4: 0x72182a  slt         $v1, $v1, $s2
    ctx->pc = 0x2d18d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2d18d8: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D18D8u;
    {
        const bool branch_taken_0x2d18d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D18DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D18D8u;
            // 0x2d18dc: 0x1220c0  sll         $a0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d18d8) {
            ctx->pc = 0x2D1990u;
            goto label_2d1990;
        }
    }
    ctx->pc = 0x2D18E0u;
    // 0x2d18e0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d18e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D18E4u;
    {
        const bool branch_taken_0x2d18e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d18e4) {
            ctx->pc = 0x2D1910u;
            goto label_2d1910;
        }
    }
    ctx->pc = 0x2D18ECu;
    // 0x2d18ec: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2D18ECu;
    SET_GPR_U32(ctx, 31, 0x2D18F4u);
    ctx->pc = 0x2D18F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D18ECu;
            // 0x2d18f0: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D18F4u; }
        if (ctx->pc != 0x2D18F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D18F4u; }
        if (ctx->pc != 0x2D18F4u) { return; }
    }
    ctx->pc = 0x2D18F4u;
label_2d18f4:
    // 0x2d18f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d18f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d18f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d18f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d18fc: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D18FCu;
    {
        const bool branch_taken_0x2d18fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D18FCu;
            // 0x2d1900: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d18fc) {
            ctx->pc = 0x2D1990u;
            goto label_2d1990;
        }
    }
    ctx->pc = 0x2D1904u;
    // 0x2d1904: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d1904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d1908: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2D1908u;
    {
        const bool branch_taken_0x2d1908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D190Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1908u;
            // 0x2d190c: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1908) {
            ctx->pc = 0x2D1990u;
            goto label_2d1990;
        }
    }
    ctx->pc = 0x2D1910u;
label_2d1910:
    // 0x2d1910: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2D1910u;
    SET_GPR_U32(ctx, 31, 0x2D1918u);
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1918u; }
        if (ctx->pc != 0x2D1918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1918u; }
        if (ctx->pc != 0x2D1918u) { return; }
    }
    ctx->pc = 0x2D1918u;
label_2d1918:
    // 0x2d1918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d1918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d191c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d191cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1920: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_2d1924:
    if (ctx->pc == 0x2D1924u) {
        ctx->pc = 0x2D1924u;
            // 0x2d1924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D1928u;
        goto label_fallthrough_0x2d1920;
    }
    ctx->pc = 0x2D1920u;
    {
        const bool branch_taken_0x2d1920 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1920u;
            // 0x2d1924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1920) {
            ctx->pc = 0x2D1968u;
            goto label_2d1968;
        }
    }
label_fallthrough_0x2d1920:
    ctx->pc = 0x2D1928u;
    // 0x2d1928: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2d1928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d192c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2d192cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d1930: 0xc0b6098  jal         func_2D8260
    ctx->pc = 0x2D1930u;
    SET_GPR_U32(ctx, 31, 0x2D1938u);
    ctx->pc = 0x2D1934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1930u;
            // 0x2d1934: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1938u; }
        if (ctx->pc != 0x2D1938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1938u; }
        if (ctx->pc != 0x2D1938u) { return; }
    }
    ctx->pc = 0x2D1938u;
label_2d1938:
    // 0x2d1938: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d1938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d193c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2d193cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d1940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d1940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1944: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D1944u;
    SET_GPR_U32(ctx, 31, 0x2D194Cu);
    ctx->pc = 0x2D1948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1944u;
            // 0x2d1948: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D194Cu; }
        if (ctx->pc != 0x2D194Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D194Cu; }
        if (ctx->pc != 0x2D194Cu) { return; }
    }
    ctx->pc = 0x2D194Cu;
label_2d194c:
    // 0x2d194c: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D194Cu;
    SET_GPR_U32(ctx, 31, 0x2D1954u);
    ctx->pc = 0x2D1950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D194Cu;
            // 0x2d1950: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1954u; }
        if (ctx->pc != 0x2D1954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1954u; }
        if (ctx->pc != 0x2D1954u) { return; }
    }
    ctx->pc = 0x2D1954u;
label_2d1954:
    // 0x2d1954: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2d1954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2d1958: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x2d1958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x2d195c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2D195Cu;
    {
        const bool branch_taken_0x2d195c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D195Cu;
            // 0x2d1960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d195c) {
            ctx->pc = 0x2D1990u;
            goto label_2d1990;
        }
    }
    ctx->pc = 0x2D1964u;
    // 0x2d1964: 0x0  nop
    ctx->pc = 0x2d1964u;
    // NOP
label_2d1968:
    // 0x2d1968: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d1968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d196c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2d196cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d1970: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D1970u;
    SET_GPR_U32(ctx, 31, 0x2D1978u);
    ctx->pc = 0x2D1974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1970u;
            // 0x2d1974: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1978u; }
        if (ctx->pc != 0x2D1978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1978u; }
        if (ctx->pc != 0x2D1978u) { return; }
    }
    ctx->pc = 0x2D1978u;
label_2d1978:
    // 0x2d1978: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D1978u;
    SET_GPR_U32(ctx, 31, 0x2D1980u);
    ctx->pc = 0x2D197Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1978u;
            // 0x2d197c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1980u; }
        if (ctx->pc != 0x2D1980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1980u; }
        if (ctx->pc != 0x2D1980u) { return; }
    }
    ctx->pc = 0x2D1980u;
label_2d1980:
    // 0x2d1980: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d1980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d1984: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2d1984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2d1988: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2d1988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d198c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d198cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2d1990:
    // 0x2d1990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d1990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1994: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d1994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d1998: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d1998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d199c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d199cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d19a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D19A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D19A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D19A0u;
            // 0x2d19a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D19A8u;
    ctx->pc = 0x2d19a8u;
}
