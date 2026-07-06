#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011D5E8
// Address: 0x11d5e8 - 0x11d818
void sub_0011D5E8_0x11d5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D5E8_0x11d5e8");
#endif

    switch (ctx->pc) {
        case 0x11d638u: goto label_11d638;
        case 0x11d700u: goto label_11d700;
        case 0x11d750u: goto label_11d750;
        default: break;
    }

    ctx->pc = 0x11d5e8u;

    // 0x11d5e8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x11d5e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d5ec: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x11d5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11d5f0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x11d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11d5f4: 0x71031818  mult1       $v1, $t0, $v1
    ctx->pc = 0x11d5f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11d5f8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x11d5f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11d5fc: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x11d5fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x11d600: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11d600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11d604: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x11d604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x11d608: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x11d608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x11d60c: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11d610: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x11d610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x11d614: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11d614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d618: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11d618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d61c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11d620: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x11d620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11d624: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x11D624u;
    {
        const bool branch_taken_0x11d624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D624u;
            // 0x11d628: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d624) {
            ctx->pc = 0x11D6E8u;
            goto label_11d6e8;
        }
    }
    ctx->pc = 0x11D62Cu;
    // 0x11d62c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x11d62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d630: 0xc047472  jal         func_11D1C8
    ctx->pc = 0x11D630u;
    SET_GPR_U32(ctx, 31, 0x11D638u);
    ctx->pc = 0x11D634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D630u;
            // 0x11d634: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D1C8u;
    if (runtime->hasFunction(0x11D1C8u)) {
        auto targetFn = runtime->lookupFunction(0x11D1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D638u; }
        if (ctx->pc != 0x11D638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D1C8_0x11d1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D638u; }
        if (ctx->pc != 0x11D638u) { return; }
    }
    ctx->pc = 0x11D638u;
label_11d638:
    // 0x11d638: 0x93a40072  lbu         $a0, 0x72($sp)
    ctx->pc = 0x11d638u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 114)));
    // 0x11d63c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d640: 0x1482002a  bne         $a0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x11D640u;
    {
        const bool branch_taken_0x11d640 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D640u;
            // 0x11d644: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d640) {
            ctx->pc = 0x11D6ECu;
            goto label_11d6ec;
        }
    }
    ctx->pc = 0x11D648u;
    // 0x11d648: 0x93a20064  lbu         $v0, 0x64($sp)
    ctx->pc = 0x11d648u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x11d64c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x11d64cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11d650: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x11D650u;
    {
        const bool branch_taken_0x11d650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D650u;
            // 0x11d654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d650) {
            ctx->pc = 0x11D6ECu;
            goto label_11d6ec;
        }
    }
    ctx->pc = 0x11D658u;
    // 0x11d658: 0x93a3006a  lbu         $v1, 0x6A($sp)
    ctx->pc = 0x11d658u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 106)));
    // 0x11d65c: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x11d65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11d660: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x11D660u;
    {
        const bool branch_taken_0x11d660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D660u;
            // 0x11d664: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d660) {
            ctx->pc = 0x11D6E8u;
            goto label_11d6e8;
        }
    }
    ctx->pc = 0x11D668u;
    // 0x11d668: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D668u;
    {
        const bool branch_taken_0x11d668 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D668u;
            // 0x11d66c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d668) {
            ctx->pc = 0x11D678u;
            goto label_11d678;
        }
    }
    ctx->pc = 0x11D670u;
    // 0x11d670: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x11D670u;
    {
        const bool branch_taken_0x11d670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D670u;
            // 0x11d674: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d670) {
            ctx->pc = 0x11D6ECu;
            goto label_11d6ec;
        }
    }
    ctx->pc = 0x11D678u;
label_11d678:
    // 0x11d678: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11D678u;
    {
        const bool branch_taken_0x11d678 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D678u;
            // 0x11d67c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d678) {
            ctx->pc = 0x11D6C4u;
            goto label_11d6c4;
        }
    }
    ctx->pc = 0x11D680u;
    // 0x11d680: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x11d680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x11d684: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D684u;
    {
        const bool branch_taken_0x11d684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d684) {
            ctx->pc = 0x11D688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11D684u;
            // 0x11d688: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11D69Cu;
            goto label_11d69c;
        }
    }
    ctx->pc = 0x11D68Cu;
    // 0x11d68c: 0x1204000a  beq         $s0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x11D68Cu;
    {
        const bool branch_taken_0x11d68c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x11D690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D68Cu;
            // 0x11d690: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d68c) {
            ctx->pc = 0x11D6B8u;
            goto label_11d6b8;
        }
    }
    ctx->pc = 0x11D694u;
    // 0x11d694: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11D694u;
    {
        const bool branch_taken_0x11d694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D694u;
            // 0x11d698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d694) {
            ctx->pc = 0x11D6ECu;
            goto label_11d6ec;
        }
    }
    ctx->pc = 0x11D69Cu;
label_11d69c:
    // 0x11d69c: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11D69Cu;
    {
        const bool branch_taken_0x11d69c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D69Cu;
            // 0x11d6a0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d69c) {
            ctx->pc = 0x11D6D0u;
            goto label_11d6d0;
        }
    }
    ctx->pc = 0x11D6A4u;
    // 0x11d6a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11d6a8: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11D6A8u;
    {
        const bool branch_taken_0x11d6a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D6A8u;
            // 0x11d6ac: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6a8) {
            ctx->pc = 0x11D6DCu;
            goto label_11d6dc;
        }
    }
    ctx->pc = 0x11D6B0u;
    // 0x11d6b0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11D6B0u;
    {
        const bool branch_taken_0x11d6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D6B0u;
            // 0x11d6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6b0) {
            ctx->pc = 0x11D6ECu;
            goto label_11d6ec;
        }
    }
    ctx->pc = 0x11D6B8u;
label_11d6b8:
    // 0x11d6b8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11d6bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11D6BCu;
    {
        const bool branch_taken_0x11d6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D6BCu;
            // 0x11d6c0: 0x90620030  lbu         $v0, 0x30($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6bc) {
            ctx->pc = 0x11D6ECu;
            goto label_11d6ec;
        }
    }
    ctx->pc = 0x11D6C4u;
label_11d6c4:
    // 0x11d6c4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11d6c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11D6C8u;
    {
        const bool branch_taken_0x11d6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D6C8u;
            // 0x11d6cc: 0x90620031  lbu         $v0, 0x31($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 49)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6c8) {
            ctx->pc = 0x11D6ECu;
            goto label_11d6ec;
        }
    }
    ctx->pc = 0x11D6D0u;
label_11d6d0:
    // 0x11d6d0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11d6d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11D6D4u;
    {
        const bool branch_taken_0x11d6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D6D4u;
            // 0x11d6d8: 0x90620032  lbu         $v0, 0x32($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6d4) {
            ctx->pc = 0x11D6ECu;
            goto label_11d6ec;
        }
    }
    ctx->pc = 0x11D6DCu;
label_11d6dc:
    // 0x11d6dc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11d6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11d6e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11D6E0u;
    {
        const bool branch_taken_0x11d6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D6E0u;
            // 0x11d6e4: 0x90620033  lbu         $v0, 0x33($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 51)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6e0) {
            ctx->pc = 0x11D6ECu;
            goto label_11d6ec;
        }
    }
    ctx->pc = 0x11D6E8u;
label_11d6e8:
    // 0x11d6e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11d6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11d6ec:
    // 0x11d6ec: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x11d6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11d6f0: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x11d6f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11d6f4: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x11d6f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11d6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x11D6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D6F8u;
            // 0x11d6fc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D700u;
label_11d700:
    // 0x11d700: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x11d700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d704: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x11d704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11d708: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x11d708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11d70c: 0x71031818  mult1       $v1, $t0, $v1
    ctx->pc = 0x11d70cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11d710: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x11d710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11d714: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x11d714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x11d718: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11d718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11d71c: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x11d71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x11d720: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x11d720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x11d724: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11d724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11d728: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x11d728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x11d72c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11d72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d730: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11d730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d734: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11d734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11d738: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x11d738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11d73c: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x11D73Cu;
    {
        const bool branch_taken_0x11d73c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D73Cu;
            // 0x11d740: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d73c) {
            ctx->pc = 0x11D7FCu;
            goto label_11d7fc;
        }
    }
    ctx->pc = 0x11D744u;
    // 0x11d744: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x11d744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d748: 0xc047472  jal         func_11D1C8
    ctx->pc = 0x11D748u;
    SET_GPR_U32(ctx, 31, 0x11D750u);
    ctx->pc = 0x11D74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D748u;
            // 0x11d74c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D1C8u;
    if (runtime->hasFunction(0x11D1C8u)) {
        auto targetFn = runtime->lookupFunction(0x11D1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D750u; }
        if (ctx->pc != 0x11D750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D1C8_0x11d1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D750u; }
        if (ctx->pc != 0x11D750u) { return; }
    }
    ctx->pc = 0x11D750u;
label_11d750:
    // 0x11d750: 0x93a30072  lbu         $v1, 0x72($sp)
    ctx->pc = 0x11d750u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 114)));
    // 0x11d754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d758: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x11D758u;
    {
        const bool branch_taken_0x11d758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D758u;
            // 0x11d75c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d758) {
            ctx->pc = 0x11D800u;
            goto label_11d800;
        }
    }
    ctx->pc = 0x11D760u;
    // 0x11d760: 0x93a20064  lbu         $v0, 0x64($sp)
    ctx->pc = 0x11d760u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x11d764: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x11d764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11d768: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x11D768u;
    {
        const bool branch_taken_0x11d768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D768u;
            // 0x11d76c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d768) {
            ctx->pc = 0x11D800u;
            goto label_11d800;
        }
    }
    ctx->pc = 0x11D770u;
    // 0x11d770: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x11d770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d774: 0x16240003  bne         $s1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D774u;
    {
        const bool branch_taken_0x11d774 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        ctx->pc = 0x11D778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D774u;
            // 0x11d778: 0x93a2006b  lbu         $v0, 0x6B($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 107)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d774) {
            ctx->pc = 0x11D784u;
            goto label_11d784;
        }
    }
    ctx->pc = 0x11D77Cu;
    // 0x11d77c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x11D77Cu;
    {
        const bool branch_taken_0x11d77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D77Cu;
            // 0x11d780: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d77c) {
            ctx->pc = 0x11D804u;
            goto label_11d804;
        }
    }
    ctx->pc = 0x11D784u;
label_11d784:
    // 0x11d784: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11d784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d788: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x11D788u;
    {
        const bool branch_taken_0x11d788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d788) {
            ctx->pc = 0x11D78Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11D788u;
            // 0x11d78c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11D800u;
            goto label_11d800;
        }
    }
    ctx->pc = 0x11D790u;
    // 0x11d790: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x11D790u;
    {
        const bool branch_taken_0x11d790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d790) {
            ctx->pc = 0x11D794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11D790u;
            // 0x11d794: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11D7D8u;
            goto label_11d7d8;
        }
    }
    ctx->pc = 0x11D798u;
    // 0x11d798: 0x1e000005  bgtz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D798u;
    {
        const bool branch_taken_0x11d798 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x11d798) {
            ctx->pc = 0x11D7B0u;
            goto label_11d7b0;
        }
    }
    ctx->pc = 0x11D7A0u;
    // 0x11d7a0: 0x1204000a  beq         $s0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x11D7A0u;
    {
        const bool branch_taken_0x11d7a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x11D7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D7A0u;
            // 0x11d7a4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7a0) {
            ctx->pc = 0x11D7CCu;
            goto label_11d7cc;
        }
    }
    ctx->pc = 0x11D7A8u;
    // 0x11d7a8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11D7A8u;
    {
        const bool branch_taken_0x11d7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D7A8u;
            // 0x11d7ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7a8) {
            ctx->pc = 0x11D800u;
            goto label_11d800;
        }
    }
    ctx->pc = 0x11D7B0u;
label_11d7b0:
    // 0x11d7b0: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x11D7B0u;
    {
        const bool branch_taken_0x11d7b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x11D7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D7B0u;
            // 0x11d7b4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7b0) {
            ctx->pc = 0x11D7E4u;
            goto label_11d7e4;
        }
    }
    ctx->pc = 0x11D7B8u;
    // 0x11d7b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d7bc: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11D7BCu;
    {
        const bool branch_taken_0x11d7bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D7BCu;
            // 0x11d7c0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7bc) {
            ctx->pc = 0x11D7F0u;
            goto label_11d7f0;
        }
    }
    ctx->pc = 0x11D7C4u;
    // 0x11d7c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11D7C4u;
    {
        const bool branch_taken_0x11d7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D7C4u;
            // 0x11d7c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7c4) {
            ctx->pc = 0x11D800u;
            goto label_11d800;
        }
    }
    ctx->pc = 0x11D7CCu;
label_11d7cc:
    // 0x11d7cc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11d7d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11D7D0u;
    {
        const bool branch_taken_0x11d7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D7D0u;
            // 0x11d7d4: 0x90620040  lbu         $v0, 0x40($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7d0) {
            ctx->pc = 0x11D800u;
            goto label_11d800;
        }
    }
    ctx->pc = 0x11D7D8u;
label_11d7d8:
    // 0x11d7d8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11d7dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11D7DCu;
    {
        const bool branch_taken_0x11d7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D7DCu;
            // 0x11d7e0: 0x90620041  lbu         $v0, 0x41($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7dc) {
            ctx->pc = 0x11D800u;
            goto label_11d800;
        }
    }
    ctx->pc = 0x11D7E4u;
label_11d7e4:
    // 0x11d7e4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11d7e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11D7E8u;
    {
        const bool branch_taken_0x11d7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D7E8u;
            // 0x11d7ec: 0x90620042  lbu         $v0, 0x42($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7e8) {
            ctx->pc = 0x11D800u;
            goto label_11d800;
        }
    }
    ctx->pc = 0x11D7F0u;
label_11d7f0:
    // 0x11d7f0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11d7f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11D7F4u;
    {
        const bool branch_taken_0x11d7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D7F4u;
            // 0x11d7f8: 0x90620043  lbu         $v0, 0x43($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 67)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d7f4) {
            ctx->pc = 0x11D800u;
            goto label_11d800;
        }
    }
    ctx->pc = 0x11D7FCu;
label_11d7fc:
    // 0x11d7fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11d7fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11d800:
    // 0x11d800: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x11d800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_11d804:
    // 0x11d804: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x11d804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11d808: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x11d808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11d80c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D80Cu;
            // 0x11d810: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D814u;
    // 0x11d814: 0x0  nop
    ctx->pc = 0x11d814u;
    // NOP
    ctx->pc = 0x11d818u;
}
