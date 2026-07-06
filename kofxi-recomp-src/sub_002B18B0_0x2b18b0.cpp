#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B18B0
// Address: 0x2b18b0 - 0x2b1968
void sub_002B18B0_0x2b18b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B18B0_0x2b18b0");
#endif

    switch (ctx->pc) {
        case 0x2b1904u: goto label_2b1904;
        case 0x2b1928u: goto label_2b1928;
        case 0x2b1940u: goto label_2b1940;
        case 0x2b1950u: goto label_2b1950;
        default: break;
    }

    ctx->pc = 0x2b18b0u;

    // 0x2b18b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b18b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b18b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b18b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b18b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b18b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b18bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b18bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b18c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b18c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b18c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b18c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b18c8: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B18C8u;
    {
        const bool branch_taken_0x2b18c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B18CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B18C8u;
            // 0x2b18cc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b18c8) {
            ctx->pc = 0x2B18E0u;
            goto label_2b18e0;
        }
    }
    ctx->pc = 0x2B18D0u;
    // 0x2b18d0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b18d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b18d4: 0x240500c7  addiu       $a1, $zero, 0xC7
    ctx->pc = 0x2b18d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x2b18d8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B18D8u;
    {
        const bool branch_taken_0x2b18d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B18DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B18D8u;
            // 0x2b18dc: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b18d8) {
            ctx->pc = 0x2B191Cu;
            goto label_2b191c;
        }
    }
    ctx->pc = 0x2B18E0u;
label_2b18e0:
    // 0x2b18e0: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x2b18e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2b18e4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B18E4u;
    {
        const bool branch_taken_0x2b18e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b18e4) {
            ctx->pc = 0x2B18FCu;
            goto label_2b18fc;
        }
    }
    ctx->pc = 0x2B18ECu;
    // 0x2b18ec: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x2b18ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x2b18f0: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x2b18f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2b18f4: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B18F4u;
    {
        const bool branch_taken_0x2b18f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b18f4) {
            ctx->pc = 0x2B1948u;
            goto label_2b1948;
        }
    }
    ctx->pc = 0x2B18FCu;
label_2b18fc:
    // 0x2b18fc: 0xc0abe46  jal         func_2AF918
    ctx->pc = 0x2B18FCu;
    SET_GPR_U32(ctx, 31, 0x2B1904u);
    ctx->pc = 0x2AF918u;
    if (runtime->hasFunction(0x2AF918u)) {
        auto targetFn = runtime->lookupFunction(0x2AF918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1904u; }
        if (ctx->pc != 0x2B1904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AF918_0x2af918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1904u; }
        if (ctx->pc != 0x2B1904u) { return; }
    }
    ctx->pc = 0x2B1904u;
label_2b1904:
    // 0x2b1904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b1904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1908: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B1908u;
    {
        const bool branch_taken_0x2b1908 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1908) {
            ctx->pc = 0x2B190Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1908u;
            // 0x2b190c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B1930u;
            goto label_2b1930;
        }
    }
    ctx->pc = 0x2B1910u;
    // 0x2b1910: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b1910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b1914: 0x240500c7  addiu       $a1, $zero, 0xC7
    ctx->pc = 0x2b1914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x2b1918: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2b1918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2b191c:
    // 0x2b191c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b191cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1920: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B1920u;
    SET_GPR_U32(ctx, 31, 0x2B1928u);
    ctx->pc = 0x2B1924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1920u;
            // 0x2b1924: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1928u; }
        if (ctx->pc != 0x2B1928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1928u; }
        if (ctx->pc != 0x2B1928u) { return; }
    }
    ctx->pc = 0x2B1928u;
label_2b1928:
    // 0x2b1928: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B1928u;
    {
        const bool branch_taken_0x2b1928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B192Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1928u;
            // 0x2b192c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1928) {
            ctx->pc = 0x2B1950u;
            goto label_2b1950;
        }
    }
    ctx->pc = 0x2B1930u;
label_2b1930:
    // 0x2b1930: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1930u;
    {
        const bool branch_taken_0x2b1930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1930) {
            ctx->pc = 0x2B1934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1930u;
            // 0x2b1934: 0xae300084  sw          $s0, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B1944u;
            goto label_2b1944;
        }
    }
    ctx->pc = 0x2B1938u;
    // 0x2b1938: 0xc0abe62  jal         func_2AF988
    ctx->pc = 0x2B1938u;
    SET_GPR_U32(ctx, 31, 0x2B1940u);
    ctx->pc = 0x2AF988u;
    if (runtime->hasFunction(0x2AF988u)) {
        auto targetFn = runtime->lookupFunction(0x2AF988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1940u; }
        if (ctx->pc != 0x2B1940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AF988_0x2af988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1940u; }
        if (ctx->pc != 0x2B1940u) { return; }
    }
    ctx->pc = 0x2B1940u;
label_2b1940:
    // 0x2b1940: 0xae300084  sw          $s0, 0x84($s1)
    ctx->pc = 0x2b1940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 16));
label_2b1944:
    // 0x2b1944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1948:
    // 0x2b1948: 0xc0ac712  jal         func_2B1C48
    ctx->pc = 0x2B1948u;
    SET_GPR_U32(ctx, 31, 0x2B1950u);
    ctx->pc = 0x2B194Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1948u;
            // 0x2b194c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1C48u;
    if (runtime->hasFunction(0x2B1C48u)) {
        auto targetFn = runtime->lookupFunction(0x2B1C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1950u; }
        if (ctx->pc != 0x2B1950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1C48_0x2b1c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1950u; }
        if (ctx->pc != 0x2B1950u) { return; }
    }
    ctx->pc = 0x2B1950u;
label_2b1950:
    // 0x2b1950: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b1950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1954: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b1954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1958: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b1958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b195c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b195cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1960: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1960u;
            // 0x2b1964: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B1968u;
    ctx->pc = 0x2b1968u;
}
