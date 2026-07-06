#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D5BE8
// Address: 0x2d5be8 - 0x2d5d60
void sub_002D5BE8_0x2d5be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5BE8_0x2d5be8");
#endif

    switch (ctx->pc) {
        case 0x2d5c34u: goto label_2d5c34;
        case 0x2d5c54u: goto label_2d5c54;
        case 0x2d5c5cu: goto label_2d5c5c;
        case 0x2d5c64u: goto label_2d5c64;
        case 0x2d5c88u: goto label_2d5c88;
        case 0x2d5cdcu: goto label_2d5cdc;
        case 0x2d5cecu: goto label_2d5cec;
        case 0x2d5cf8u: goto label_2d5cf8;
        case 0x2d5d0cu: goto label_2d5d0c;
        default: break;
    }

    ctx->pc = 0x2d5be8u;

    // 0x2d5be8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d5be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d5bec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d5becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d5bf0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2d5bf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bf4: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x2d5bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2d5bf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d5bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d5bfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d5bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d5c00: 0x59880  sll         $s3, $a1, 2
    ctx->pc = 0x2d5c00u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d5c04: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d5c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d5c08: 0x26750020  addiu       $s5, $s3, 0x20
    ctx->pc = 0x2d5c08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2d5c0c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d5c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2d5c10: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2d5c10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c14: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d5c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2d5c18: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2d5c18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c1c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2d5c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2d5c20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d5c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d5c24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d5c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d5c28: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d5c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2d5c2c: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2D5C2Cu;
    SET_GPR_U32(ctx, 31, 0x2D5C34u);
    ctx->pc = 0x2D5C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5C2Cu;
            // 0x2d5c30: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5C34u; }
        if (ctx->pc != 0x2D5C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5C34u; }
        if (ctx->pc != 0x2D5C34u) { return; }
    }
    ctx->pc = 0x2D5C34u;
label_2d5c34:
    // 0x2d5c34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d5c34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c38: 0x24020206  addiu       $v0, $zero, 0x206
    ctx->pc = 0x2d5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    // 0x2d5c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d5c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c40: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x2d5c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2d5c44: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D5C44u;
    {
        const bool branch_taken_0x2d5c44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5C44u;
            // 0x2d5c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c44) {
            ctx->pc = 0x2D5D30u;
            goto label_2d5d30;
        }
    }
    ctx->pc = 0x2D5C4Cu;
    // 0x2d5c4c: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D5C4Cu;
    SET_GPR_U32(ctx, 31, 0x2D5C54u);
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5C54u; }
        if (ctx->pc != 0x2D5C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5C54u; }
        if (ctx->pc != 0x2D5C54u) { return; }
    }
    ctx->pc = 0x2D5C54u;
label_2d5c54:
    // 0x2d5c54: 0xc0b3dc2  jal         func_2CF708
    ctx->pc = 0x2D5C54u;
    SET_GPR_U32(ctx, 31, 0x2D5C5Cu);
    ctx->pc = 0x2D5C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5C54u;
            // 0x2d5c58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF708u;
    if (runtime->hasFunction(0x2CF708u)) {
        auto targetFn = runtime->lookupFunction(0x2CF708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5C5Cu; }
        if (ctx->pc != 0x2D5C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF708_0x2cf708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5C5Cu; }
        if (ctx->pc != 0x2D5C5Cu) { return; }
    }
    ctx->pc = 0x2D5C5Cu;
label_2d5c5c:
    // 0x2d5c5c: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2D5C5Cu;
    SET_GPR_U32(ctx, 31, 0x2D5C64u);
    ctx->pc = 0x2D5C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5C5Cu;
            // 0x2d5c60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5C64u; }
        if (ctx->pc != 0x2D5C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5C64u; }
        if (ctx->pc != 0x2D5C64u) { return; }
    }
    ctx->pc = 0x2D5C64u;
label_2d5c64:
    // 0x2d5c64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d5c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c6c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2d5c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c70: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2d5c70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c74: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D5C74u;
    {
        const bool branch_taken_0x2d5c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5C74u;
            // 0x2d5c78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c74) {
            ctx->pc = 0x2D5CF0u;
            goto label_2d5cf0;
        }
    }
    ctx->pc = 0x2D5C7Cu;
    // 0x2d5c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d5c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c80: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D5C80u;
    SET_GPR_U32(ctx, 31, 0x2D5C88u);
    ctx->pc = 0x2D5C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5C80u;
            // 0x2d5c84: 0x26500018  addiu       $s0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5C88u; }
        if (ctx->pc != 0x2D5C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5C88u; }
        if (ctx->pc != 0x2D5C88u) { return; }
    }
    ctx->pc = 0x2D5C88u;
label_2d5c88:
    // 0x2d5c88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d5c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c8c: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x2d5c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x2d5c90: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d5c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d5c94: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2d5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d5c98: 0x24639630  addiu       $v1, $v1, -0x69D0
    ctx->pc = 0x2d5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940208));
    // 0x2d5c9c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x2d5c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2d5ca0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2d5ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2d5ca4: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x2d5ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x2d5ca8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d5ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5cac: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x2d5cacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x2d5cb0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d5cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5cb4: 0xae370020  sw          $s7, 0x20($s1)
    ctx->pc = 0x2d5cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 23));
    // 0x2d5cb8: 0xae3e001c  sw          $fp, 0x1C($s1)
    ctx->pc = 0x2d5cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 30));
    // 0x2d5cbc: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D5CBCu;
    {
        const bool branch_taken_0x2d5cbc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5CBCu;
            // 0x2d5cc0: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5cbc) {
            ctx->pc = 0x2D5CD4u;
            goto label_2d5cd4;
        }
    }
    ctx->pc = 0x2D5CC4u;
    // 0x2d5cc4: 0x6ac20007  ldl         $v0, 0x7($s6)
    ctx->pc = 0x2d5cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d5cc8: 0x6ec20000  ldr         $v0, 0x0($s6)
    ctx->pc = 0x2d5cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d5ccc: 0xb222001b  sdl         $v0, 0x1B($s1)
    ctx->pc = 0x2d5cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d5cd0: 0xb6220014  sdr         $v0, 0x14($s1)
    ctx->pc = 0x2d5cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d5cd4:
    // 0x2d5cd4: 0xc0b3dfa  jal         func_2CF7E8
    ctx->pc = 0x2D5CD4u;
    SET_GPR_U32(ctx, 31, 0x2D5CDCu);
    ctx->pc = 0x2CF7E8u;
    if (runtime->hasFunction(0x2CF7E8u)) {
        auto targetFn = runtime->lookupFunction(0x2CF7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5CDCu; }
        if (ctx->pc != 0x2D5CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF7E8_0x2cf7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5CDCu; }
        if (ctx->pc != 0x2D5CDCu) { return; }
    }
    ctx->pc = 0x2D5CDCu;
label_2d5cdc:
    // 0x2d5cdc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D5CDCu;
    {
        const bool branch_taken_0x2d5cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5cdc) {
            ctx->pc = 0x2D5CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5CDCu;
            // 0x2d5ce0: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D5D00u;
            goto label_2d5d00;
        }
    }
    ctx->pc = 0x2D5CE4u;
    // 0x2d5ce4: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D5CE4u;
    SET_GPR_U32(ctx, 31, 0x2D5CECu);
    ctx->pc = 0x2D5CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5CE4u;
            // 0x2d5ce8: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5CECu; }
        if (ctx->pc != 0x2D5CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5CECu; }
        if (ctx->pc != 0x2D5CECu) { return; }
    }
    ctx->pc = 0x2D5CECu;
label_2d5cec:
    // 0x2d5cec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d5cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d5cf0:
    // 0x2d5cf0: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D5CF0u;
    SET_GPR_U32(ctx, 31, 0x2D5CF8u);
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5CF8u; }
        if (ctx->pc != 0x2D5CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5CF8u; }
        if (ctx->pc != 0x2D5CF8u) { return; }
    }
    ctx->pc = 0x2D5CF8u;
label_2d5cf8:
    // 0x2d5cf8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2D5CF8u;
    {
        const bool branch_taken_0x2d5cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5CF8u;
            // 0x2d5cfc: 0x24020206  addiu       $v0, $zero, 0x206 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5cf8) {
            ctx->pc = 0x2D5D30u;
            goto label_2d5d30;
        }
    }
    ctx->pc = 0x2D5D00u;
label_2d5d00:
    // 0x2d5d00: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2d5d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d5d04: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D5D04u;
    SET_GPR_U32(ctx, 31, 0x2D5D0Cu);
    ctx->pc = 0x2D5D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5D04u;
            // 0x2d5d08: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5D0Cu; }
        if (ctx->pc != 0x2D5D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D5D0Cu; }
        if (ctx->pc != 0x2D5D0Cu) { return; }
    }
    ctx->pc = 0x2D5D0Cu;
label_2d5d0c:
    // 0x2d5d0c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2d5d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d5d10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d5d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5d14: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2d5d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2d5d18: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2d5d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d5d1c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2d5d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2d5d20: 0xac92fff8  sw          $s2, -0x8($a0)
    ctx->pc = 0x2d5d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 18));
    // 0x2d5d24: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2d5d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d5d28: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2d5d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2d5d2c: 0xac60fffc  sw          $zero, -0x4($v1)
    ctx->pc = 0x2d5d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 0));
label_2d5d30:
    // 0x2d5d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5d34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d5d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5d38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d5d38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5d3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d5d3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5d40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d5d40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5d44: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d5d44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5d48: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d5d48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5d4c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d5d4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d5d50: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2d5d50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d5d54: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d5d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5d58: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5D58u;
            // 0x2d5d5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D5D60u;
    ctx->pc = 0x2d5d60u;
}
