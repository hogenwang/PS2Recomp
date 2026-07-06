#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024BA10
// Address: 0x24ba10 - 0x24bcb8
void sub_0024BA10_0x24ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BA10_0x24ba10");
#endif

    switch (ctx->pc) {
        case 0x24ba88u: goto label_24ba88;
        case 0x24bac8u: goto label_24bac8;
        case 0x24badcu: goto label_24badc;
        case 0x24baf8u: goto label_24baf8;
        case 0x24bb38u: goto label_24bb38;
        case 0x24bbe8u: goto label_24bbe8;
        case 0x24bc08u: goto label_24bc08;
        case 0x24bc28u: goto label_24bc28;
        case 0x24bc44u: goto label_24bc44;
        case 0x24bc80u: goto label_24bc80;
        default: break;
    }

    ctx->pc = 0x24ba10u;

    // 0x24ba10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24ba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24ba14: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24ba14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24ba18: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x24ba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x24ba1c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x24ba1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ba20: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x24ba20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x24ba24: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24ba24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24ba28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24ba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24ba2c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24ba2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ba30: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x24ba30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x24ba34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24ba34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ba38: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x24ba38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x24ba3c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x24ba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x24ba40: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24ba40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x24ba44: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24ba44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x24ba48: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24ba48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24ba4c: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x24ba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x24ba50: 0x8c4411a0  lw          $a0, 0x11A0($v0)
    ctx->pc = 0x24ba50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4512)));
    // 0x24ba54: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x24ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x24ba58: 0x8ebe0058  lw          $fp, 0x58($s5)
    ctx->pc = 0x24ba58u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x24ba5c: 0x94730002  lhu         $s3, 0x2($v1)
    ctx->pc = 0x24ba5cu;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x24ba60: 0x32620200  andi        $v0, $s3, 0x200
    ctx->pc = 0x24ba60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
    // 0x24ba64: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x24ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x24ba68: 0x2b403  sra         $s6, $v0, 16
    ctx->pc = 0x24ba68u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 16));
    // 0x24ba6c: 0x10800085  beqz        $a0, . + 4 + (0x85 << 2)
    ctx->pc = 0x24BA6Cu;
    {
        const bool branch_taken_0x24ba6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BA6Cu;
            // 0x24ba70: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba6c) {
            ctx->pc = 0x24BC84u;
            goto label_24bc84;
        }
    }
    ctx->pc = 0x24BA74u;
    // 0x24ba74: 0x96a2001a  lhu         $v0, 0x1A($s5)
    ctx->pc = 0x24ba74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 26)));
    // 0x24ba78: 0x14400082  bnez        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x24BA78u;
    {
        const bool branch_taken_0x24ba78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BA78u;
            // 0x24ba7c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba78) {
            ctx->pc = 0x24BC84u;
            goto label_24bc84;
        }
    }
    ctx->pc = 0x24BA80u;
    // 0x24ba80: 0xc08a254  jal         func_228950
    ctx->pc = 0x24BA80u;
    SET_GPR_U32(ctx, 31, 0x24BA88u);
    ctx->pc = 0x24BA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BA80u;
            // 0x24ba84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BA88u; }
        if (ctx->pc != 0x24BA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BA88u; }
        if (ctx->pc != 0x24BA88u) { return; }
    }
    ctx->pc = 0x24BA88u;
label_24ba88:
    // 0x24ba88: 0x8eb70044  lw          $s7, 0x44($s5)
    ctx->pc = 0x24ba88u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x24ba8c: 0x16e2007d  bne         $s7, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x24BA8Cu;
    {
        const bool branch_taken_0x24ba8c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x24BA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BA8Cu;
            // 0x24ba90: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba8c) {
            ctx->pc = 0x24BC84u;
            goto label_24bc84;
        }
    }
    ctx->pc = 0x24BA94u;
    // 0x24ba94: 0x32620204  andi        $v0, $s3, 0x204
    ctx->pc = 0x24ba94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)516);
    // 0x24ba98: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x24ba98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x24ba9c: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x24BA9Cu;
    {
        const bool branch_taken_0x24ba9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BA9Cu;
            // 0x24baa0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba9c) {
            ctx->pc = 0x24BB70u;
            goto label_24bb70;
        }
    }
    ctx->pc = 0x24BAA4u;
    // 0x24baa4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x24baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24baa8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x24baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24baac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BAACu;
    {
        const bool branch_taken_0x24baac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24BAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BAACu;
            // 0x24bab0: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24baac) {
            ctx->pc = 0x24BABCu;
            goto label_24babc;
        }
    }
    ctx->pc = 0x24BAB4u;
    // 0x24bab4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x24BAB4u;
    {
        const bool branch_taken_0x24bab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BAB4u;
            // 0x24bab8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bab4) {
            ctx->pc = 0x24BC84u;
            goto label_24bc84;
        }
    }
    ctx->pc = 0x24BABCu;
label_24babc:
    // 0x24babc: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x24babcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x24bac0: 0xc08a254  jal         func_228950
    ctx->pc = 0x24BAC0u;
    SET_GPR_U32(ctx, 31, 0x24BAC8u);
    ctx->pc = 0x24BAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BAC0u;
            // 0x24bac4: 0x96540002  lhu         $s4, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BAC8u; }
        if (ctx->pc != 0x24BAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BAC8u; }
        if (ctx->pc != 0x24BAC8u) { return; }
    }
    ctx->pc = 0x24BAC8u;
label_24bac8:
    // 0x24bac8: 0x8a510007  lwl         $s1, 0x7($s2)
    ctx->pc = 0x24bac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 17) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 17, (int32_t)merged); }
    // 0x24bacc: 0x9a510004  lwr         $s1, 0x4($s2)
    ctx->pc = 0x24baccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 17) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 17) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 17, merged64); }
    // 0x24bad0: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x24bad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
    // 0x24bad4: 0xc08a254  jal         func_228950
    ctx->pc = 0x24BAD4u;
    SET_GPR_U32(ctx, 31, 0x24BADCu);
    ctx->pc = 0x24BAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BAD4u;
            // 0x24bad8: 0x2228024  and         $s0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BADCu; }
        if (ctx->pc != 0x24BADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BADCu; }
        if (ctx->pc != 0x24BADCu) { return; }
    }
    ctx->pc = 0x24BADCu;
label_24badc:
    // 0x24badc: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24BADCu;
    {
        const bool branch_taken_0x24badc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x24BAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BADCu;
            // 0x24bae0: 0x32630004  andi        $v1, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24badc) {
            ctx->pc = 0x24BB08u;
            goto label_24bb08;
        }
    }
    ctx->pc = 0x24BAE4u;
    // 0x24bae4: 0x1237000a  beq         $s1, $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x24BAE4u;
    {
        const bool branch_taken_0x24bae4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        if (branch_taken_0x24bae4) {
            ctx->pc = 0x24BB10u;
            goto label_24bb10;
        }
    }
    ctx->pc = 0x24BAECu;
    // 0x24baec: 0xa6400002  sh          $zero, 0x2($s2)
    ctx->pc = 0x24baecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x24baf0: 0xc08d360  jal         func_234D80
    ctx->pc = 0x24BAF0u;
    SET_GPR_U32(ctx, 31, 0x24BAF8u);
    ctx->pc = 0x24BAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BAF0u;
            // 0x24baf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234D80u;
    if (runtime->hasFunction(0x234D80u)) {
        auto targetFn = runtime->lookupFunction(0x234D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BAF8u; }
        if (ctx->pc != 0x24BAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234D80_0x234d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BAF8u; }
        if (ctx->pc != 0x24BAF8u) { return; }
    }
    ctx->pc = 0x24BAF8u;
label_24baf8:
    // 0x24baf8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24BAF8u;
    {
        const bool branch_taken_0x24baf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BAF8u;
            // 0x24bafc: 0x2402007d  addiu       $v0, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24baf8) {
            ctx->pc = 0x24BB10u;
            goto label_24bb10;
        }
    }
    ctx->pc = 0x24BB00u;
    // 0x24bb00: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x24BB00u;
    {
        const bool branch_taken_0x24bb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BB00u;
            // 0x24bb04: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb00) {
            ctx->pc = 0x24BC88u;
            goto label_24bc88;
        }
    }
    ctx->pc = 0x24BB08u;
label_24bb08:
    // 0x24bb08: 0x24020204  addiu       $v0, $zero, 0x204
    ctx->pc = 0x24bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x24bb0c: 0x43b00b  movn        $s6, $v0, $v1
    ctx->pc = 0x24bb0cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
label_24bb10:
    // 0x24bb10: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x24BB10u;
    {
        const bool branch_taken_0x24bb10 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BB10u;
            // 0x24bb14: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb10) {
            ctx->pc = 0x24BB5Cu;
            goto label_24bb5c;
        }
    }
    ctx->pc = 0x24BB18u;
    // 0x24bb18: 0x8a420007  lwl         $v0, 0x7($s2)
    ctx->pc = 0x24bb18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x24bb1c: 0x9a420004  lwr         $v0, 0x4($s2)
    ctx->pc = 0x24bb1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x24bb20: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x24bb20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x24bb24: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x24bb24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x24bb28: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x24bb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bb2c: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x24bb2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x24bb30: 0xc09313e  jal         func_24C4F8
    ctx->pc = 0x24BB30u;
    SET_GPR_U32(ctx, 31, 0x24BB38u);
    ctx->pc = 0x24BB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BB30u;
            // 0x24bb34: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C4F8u;
    if (runtime->hasFunction(0x24C4F8u)) {
        auto targetFn = runtime->lookupFunction(0x24C4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BB38u; }
        if (ctx->pc != 0x24BB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024C4F8_0x24c4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BB38u; }
        if (ctx->pc != 0x24BB38u) { return; }
    }
    ctx->pc = 0x24BB38u;
label_24bb38:
    // 0x24bb38: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24BB38u;
    {
        const bool branch_taken_0x24bb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24bb38) {
            ctx->pc = 0x24BB3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24BB38u;
            // 0x24bb3c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24BB60u;
            goto label_24bb60;
        }
    }
    ctx->pc = 0x24BB40u;
    // 0x24bb40: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x24bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x24bb44: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x24bb44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x24bb48: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x24bb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x24bb4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BB4Cu;
    {
        const bool branch_taken_0x24bb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BB4Cu;
            // 0x24bb50: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb4c) {
            ctx->pc = 0x24BB60u;
            goto label_24bb60;
        }
    }
    ctx->pc = 0x24BB54u;
    // 0x24bb54: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x24BB54u;
    {
        const bool branch_taken_0x24bb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BB54u;
            // 0x24bb58: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb54) {
            ctx->pc = 0x24BC84u;
            goto label_24bc84;
        }
    }
    ctx->pc = 0x24BB5Cu;
label_24bb5c:
    // 0x24bb5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_24bb60:
    // 0x24bb60: 0x8a430007  lwl         $v1, 0x7($s2)
    ctx->pc = 0x24bb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x24bb64: 0x9a430004  lwr         $v1, 0x4($s2)
    ctx->pc = 0x24bb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x24bb68: 0xa8430047  swl         $v1, 0x47($v0)
    ctx->pc = 0x24bb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x24bb6c: 0xb8430044  swr         $v1, 0x44($v0)
    ctx->pc = 0x24bb6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_24bb70:
    // 0x24bb70: 0x56800040  bnel        $s4, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x24BB70u;
    {
        const bool branch_taken_0x24bb70 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bb70) {
            ctx->pc = 0x24BB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24BB70u;
            // 0x24bb74: 0xa6b4001a  sh          $s4, 0x1A($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 26), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24BC74u;
            goto label_24bc74;
        }
    }
    ctx->pc = 0x24BB78u;
    // 0x24bb78: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x24bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x24bb7c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x24bb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x24bb80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BB80u;
    {
        const bool branch_taken_0x24bb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BB80u;
            // 0x24bb84: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb80) {
            ctx->pc = 0x24BB9Cu;
            goto label_24bb9c;
        }
    }
    ctx->pc = 0x24BB88u;
    // 0x24bb88: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x24bb8c: 0x945301c8  lhu         $s3, 0x1C8($v0)
    ctx->pc = 0x24bb8cu;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 456)));
    // 0x24bb90: 0x27d60022  addiu       $s6, $fp, 0x22
    ctx->pc = 0x24bb90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 34));
    // 0x24bb94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24BB94u;
    {
        const bool branch_taken_0x24bb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BB94u;
            // 0x24bb98: 0x947101cc  lhu         $s1, 0x1CC($v1) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb94) {
            ctx->pc = 0x24BBB0u;
            goto label_24bbb0;
        }
    }
    ctx->pc = 0x24BB9Cu;
label_24bb9c:
    // 0x24bb9c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24bba0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x24bba4: 0x945301c0  lhu         $s3, 0x1C0($v0)
    ctx->pc = 0x24bba4u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x24bba8: 0x27d60020  addiu       $s6, $fp, 0x20
    ctx->pc = 0x24bba8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x24bbac: 0x947101c4  lhu         $s1, 0x1C4($v1)
    ctx->pc = 0x24bbacu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 452)));
label_24bbb0:
    // 0x24bbb0: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x24bbb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x24bbb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BBB4u;
    {
        const bool branch_taken_0x24bbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BBB4u;
            // 0x24bbb8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbb4) {
            ctx->pc = 0x24BBC4u;
            goto label_24bbc4;
        }
    }
    ctx->pc = 0x24BBBCu;
    // 0x24bbbc: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x24bbbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bbc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24bbc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24bbc4:
    // 0x24bbc4: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x24bbc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x24bbc8: 0x2331823  subu        $v1, $s1, $s3
    ctx->pc = 0x24bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x24bbcc: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x24bbccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24bbd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24bbd4: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x24BBD4u;
    {
        const bool branch_taken_0x24bbd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BBD4u;
            // 0x24bbd8: 0x3054ffff  andi        $s4, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbd4) {
            ctx->pc = 0x24BC3Cu;
            goto label_24bc3c;
        }
    }
    ctx->pc = 0x24BBDCu;
    // 0x24bbdc: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x24bbdcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x24bbe0: 0x17b83e  dsrl32      $s7, $s7, 0
    ctx->pc = 0x24bbe0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) >> (32 + 0));
    // 0x24bbe4: 0x0  nop
    ctx->pc = 0x24bbe4u;
    // NOP
label_24bbe8:
    // 0x24bbe8: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x24bbe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x24bbec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24BBECu;
    {
        const bool branch_taken_0x24bbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bbec) {
            ctx->pc = 0x24BBF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24BBECu;
            // 0x24bbf0: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24BC00u;
            goto label_24bc00;
        }
    }
    ctx->pc = 0x24BBF4u;
    // 0x24bbf4: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x24bbf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x24bbf8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24BBF8u;
    {
        const bool branch_taken_0x24bbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bbf8) {
            ctx->pc = 0x24BBFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24BBF8u;
            // 0x24bbfc: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24BC00u;
            goto label_24bc00;
        }
    }
    ctx->pc = 0x24BC00u;
label_24bc00:
    // 0x24bc00: 0xc08a262  jal         func_228988
    ctx->pc = 0x24BC00u;
    SET_GPR_U32(ctx, 31, 0x24BC08u);
    ctx->pc = 0x24BC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BC00u;
            // 0x24bc04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BC08u; }
        if (ctx->pc != 0x24BC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BC08u; }
        if (ctx->pc != 0x24BC08u) { return; }
    }
    ctx->pc = 0x24BC08u;
label_24bc08:
    // 0x24bc08: 0x8aa50047  lwl         $a1, 0x47($s5)
    ctx->pc = 0x24bc08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x24bc0c: 0x9aa50044  lwr         $a1, 0x44($s5)
    ctx->pc = 0x24bc0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x24bc10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24bc10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc14: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x24bc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc18: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24bc18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc1c: 0xb72824  and         $a1, $a1, $s7
    ctx->pc = 0x24bc1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 23));
    // 0x24bc20: 0xc09313e  jal         func_24C4F8
    ctx->pc = 0x24BC20u;
    SET_GPR_U32(ctx, 31, 0x24BC28u);
    ctx->pc = 0x24BC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BC20u;
            // 0x24bc24: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C4F8u;
    if (runtime->hasFunction(0x24C4F8u)) {
        auto targetFn = runtime->lookupFunction(0x24C4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BC28u; }
        if (ctx->pc != 0x24BC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024C4F8_0x24c4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BC28u; }
        if (ctx->pc != 0x24BC28u) { return; }
    }
    ctx->pc = 0x24BC28u;
label_24bc28:
    // 0x24bc28: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24BC28u;
    {
        const bool branch_taken_0x24bc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BC28u;
            // 0x24bc2c: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc28) {
            ctx->pc = 0x24BC5Cu;
            goto label_24bc5c;
        }
    }
    ctx->pc = 0x24BC30u;
    // 0x24bc30: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x24bc30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x24bc34: 0x1600ffec  bnez        $s0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x24BC34u;
    {
        const bool branch_taken_0x24bc34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BC34u;
            // 0x24bc38: 0x3054ffff  andi        $s4, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc34) {
            ctx->pc = 0x24BBE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24bbe8;
        }
    }
    ctx->pc = 0x24BC3Cu;
label_24bc3c:
    // 0x24bc3c: 0xc08a254  jal         func_228950
    ctx->pc = 0x24BC3Cu;
    SET_GPR_U32(ctx, 31, 0x24BC44u);
    ctx->pc = 0x24BC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BC3Cu;
            // 0x24bc40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BC44u; }
        if (ctx->pc != 0x24BC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BC44u; }
        if (ctx->pc != 0x24BC44u) { return; }
    }
    ctx->pc = 0x24BC44u;
label_24bc44:
    // 0x24bc44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24bc44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc48: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x24bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x24bc4c: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x24BC4Cu;
    {
        const bool branch_taken_0x24bc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24bc4c) {
            ctx->pc = 0x24BC50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24BC4Cu;
            // 0x24bc50: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24BC54u;
            goto label_24bc54;
        }
    }
    ctx->pc = 0x24BC54u;
label_24bc54:
    // 0x24bc54: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24BC54u;
    {
        const bool branch_taken_0x24bc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BC54u;
            // 0x24bc58: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bc54) {
            ctx->pc = 0x24BC84u;
            goto label_24bc84;
        }
    }
    ctx->pc = 0x24BC5Cu;
label_24bc5c:
    // 0x24bc5c: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x24bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x24bc60: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x24bc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x24bc64: 0xaea20034  sw          $v0, 0x34($s5)
    ctx->pc = 0x24bc64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 2));
    // 0x24bc68: 0xa6d40000  sh          $s4, 0x0($s6)
    ctx->pc = 0x24bc68u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x24bc6c: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x24bc6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc70: 0xa6b4001a  sh          $s4, 0x1A($s5)
    ctx->pc = 0x24bc70u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 26), (uint16_t)GPR_U32(ctx, 20));
label_24bc74:
    // 0x24bc74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x24bc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc78: 0xc093234  jal         func_24C8D0
    ctx->pc = 0x24BC78u;
    SET_GPR_U32(ctx, 31, 0x24BC80u);
    ctx->pc = 0x24BC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24BC78u;
            // 0x24bc7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C8D0u;
    if (runtime->hasFunction(0x24C8D0u)) {
        auto targetFn = runtime->lookupFunction(0x24C8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BC80u; }
        if (ctx->pc != 0x24BC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024C8D0_0x24c8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24BC80u; }
        if (ctx->pc != 0x24BC80u) { return; }
    }
    ctx->pc = 0x24BC80u;
label_24bc80:
    // 0x24bc80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24bc80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24bc84:
    // 0x24bc84: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24bc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_24bc88:
    // 0x24bc88: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24bc88u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24bc8c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24bc8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24bc90: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24bc90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24bc94: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24bc94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24bc98: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24bc98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24bc9c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24bc9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24bca0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24bca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24bca4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24bca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24bca8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24bca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bcac: 0x3e00008  jr          $ra
    ctx->pc = 0x24BCACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BCACu;
            // 0x24bcb0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24BCB4u;
    // 0x24bcb4: 0x0  nop
    ctx->pc = 0x24bcb4u;
    // NOP
    ctx->pc = 0x24bcb8u;
}
