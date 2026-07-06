#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011D818
// Address: 0x11d818 - 0x11d950
void sub_0011D818_0x11d818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D818_0x11d818");
#endif

    switch (ctx->pc) {
        case 0x11d868u: goto label_11d868;
        default: break;
    }

    ctx->pc = 0x11d818u;

    // 0x11d818: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x11d818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d81c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x11d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11d820: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x11d820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11d824: 0x71031818  mult1       $v1, $t0, $v1
    ctx->pc = 0x11d824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11d828: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x11d828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11d82c: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x11d82cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x11d830: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11d830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11d834: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x11d834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x11d838: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x11d838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x11d83c: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11d840: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x11d840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x11d844: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11d844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d848: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11d848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d84c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11d850: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x11d850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11d854: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x11D854u;
    {
        const bool branch_taken_0x11d854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D854u;
            // 0x11d858: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d854) {
            ctx->pc = 0x11D934u;
            goto label_11d934;
        }
    }
    ctx->pc = 0x11D85Cu;
    // 0x11d85c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x11d85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d860: 0xc047472  jal         func_11D1C8
    ctx->pc = 0x11D860u;
    SET_GPR_U32(ctx, 31, 0x11D868u);
    ctx->pc = 0x11D864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D860u;
            // 0x11d864: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D1C8u;
    if (runtime->hasFunction(0x11D1C8u)) {
        auto targetFn = runtime->lookupFunction(0x11D1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D868u; }
        if (ctx->pc != 0x11D868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D1C8_0x11d1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D868u; }
        if (ctx->pc != 0x11D868u) { return; }
    }
    ctx->pc = 0x11D868u;
label_11d868:
    // 0x11d868: 0x93a30072  lbu         $v1, 0x72($sp)
    ctx->pc = 0x11d868u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 114)));
    // 0x11d86c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d870: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x11D870u;
    {
        const bool branch_taken_0x11d870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D870u;
            // 0x11d874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d870) {
            ctx->pc = 0x11D938u;
            goto label_11d938;
        }
    }
    ctx->pc = 0x11D878u;
    // 0x11d878: 0x93a20071  lbu         $v0, 0x71($sp)
    ctx->pc = 0x11d878u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 113)));
    // 0x11d87c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x11d87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d880: 0x1044002d  beq         $v0, $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x11D880u;
    {
        const bool branch_taken_0x11d880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x11D884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D880u;
            // 0x11d884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d880) {
            ctx->pc = 0x11D938u;
            goto label_11d938;
        }
    }
    ctx->pc = 0x11D888u;
    // 0x11d888: 0x12040013  beq         $s0, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11D888u;
    {
        const bool branch_taken_0x11d888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x11D88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D888u;
            // 0x11d88c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d888) {
            ctx->pc = 0x11D8D8u;
            goto label_11d8d8;
        }
    }
    ctx->pc = 0x11D890u;
    // 0x11d890: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D890u;
    {
        const bool branch_taken_0x11d890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D890u;
            // 0x11d894: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d890) {
            ctx->pc = 0x11D8A8u;
            goto label_11d8a8;
        }
    }
    ctx->pc = 0x11D898u;
    // 0x11d898: 0x12030009  beq         $s0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D898u;
    {
        const bool branch_taken_0x11d898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x11D89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D898u;
            // 0x11d89c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d898) {
            ctx->pc = 0x11D8C0u;
            goto label_11d8c0;
        }
    }
    ctx->pc = 0x11D8A0u;
    // 0x11d8a0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x11D8A0u;
    {
        const bool branch_taken_0x11d8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8A0u;
            // 0x11d8a4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8a0) {
            ctx->pc = 0x11D93Cu;
            goto label_11d93c;
        }
    }
    ctx->pc = 0x11D8A8u;
label_11d8a8:
    // 0x11d8a8: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11D8A8u;
    {
        const bool branch_taken_0x11d8a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8A8u;
            // 0x11d8ac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8a8) {
            ctx->pc = 0x11D8ECu;
            goto label_11d8ec;
        }
    }
    ctx->pc = 0x11D8B0u;
    // 0x11d8b0: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11D8B0u;
    {
        const bool branch_taken_0x11d8b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8B0u;
            // 0x11d8b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8b0) {
            ctx->pc = 0x11D900u;
            goto label_11d900;
        }
    }
    ctx->pc = 0x11D8B8u;
    // 0x11d8b8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11D8B8u;
    {
        const bool branch_taken_0x11d8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8B8u;
            // 0x11d8bc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8b8) {
            ctx->pc = 0x11D93Cu;
            goto label_11d93c;
        }
    }
    ctx->pc = 0x11D8C0u;
label_11d8c0:
    // 0x11d8c0: 0x93a30065  lbu         $v1, 0x65($sp)
    ctx->pc = 0x11d8c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 101)));
    // 0x11d8c4: 0x240200f3  addiu       $v0, $zero, 0xF3
    ctx->pc = 0x11d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x11d8c8: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11D8C8u;
    {
        const bool branch_taken_0x11d8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11D8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8C8u;
            // 0x11d8cc: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8c8) {
            ctx->pc = 0x11D934u;
            goto label_11d934;
        }
    }
    ctx->pc = 0x11D8D0u;
    // 0x11d8d0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11D8D0u;
    {
        const bool branch_taken_0x11d8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8D0u;
            // 0x11d8d4: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8d0) {
            ctx->pc = 0x11D93Cu;
            goto label_11d93c;
        }
    }
    ctx->pc = 0x11D8D8u;
label_11d8d8:
    // 0x11d8d8: 0x93a20064  lbu         $v0, 0x64($sp)
    ctx->pc = 0x11d8d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x11d8dc: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x11D8DCu;
    {
        const bool branch_taken_0x11d8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11D8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8DCu;
            // 0x11d8e0: 0x93a20069  lbu         $v0, 0x69($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 105)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8dc) {
            ctx->pc = 0x11D934u;
            goto label_11d934;
        }
    }
    ctx->pc = 0x11D8E4u;
    // 0x11d8e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11D8E4u;
    {
        const bool branch_taken_0x11d8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8E4u;
            // 0x11d8e8: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8e4) {
            ctx->pc = 0x11D928u;
            goto label_11d928;
        }
    }
    ctx->pc = 0x11D8ECu;
label_11d8ec:
    // 0x11d8ec: 0x93a20064  lbu         $v0, 0x64($sp)
    ctx->pc = 0x11d8ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x11d8f0: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x11D8F0u;
    {
        const bool branch_taken_0x11d8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11D8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8F0u;
            // 0x11d8f4: 0x93a20069  lbu         $v0, 0x69($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 105)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8f0) {
            ctx->pc = 0x11D934u;
            goto label_11d934;
        }
    }
    ctx->pc = 0x11D8F8u;
    // 0x11d8f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11D8F8u;
    {
        const bool branch_taken_0x11d8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D8F8u;
            // 0x11d8fc: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8f8) {
            ctx->pc = 0x11D93Cu;
            goto label_11d93c;
        }
    }
    ctx->pc = 0x11D900u;
label_11d900:
    // 0x11d900: 0x93a20064  lbu         $v0, 0x64($sp)
    ctx->pc = 0x11d900u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x11d904: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x11D904u;
    {
        const bool branch_taken_0x11d904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11D908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D904u;
            // 0x11d908: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d904) {
            ctx->pc = 0x11D934u;
            goto label_11d934;
        }
    }
    ctx->pc = 0x11D90Cu;
    // 0x11d90c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D90Cu;
    {
        const bool branch_taken_0x11d90c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D90Cu;
            // 0x11d910: 0x93a20068  lbu         $v0, 0x68($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d90c) {
            ctx->pc = 0x11D91Cu;
            goto label_11d91c;
        }
    }
    ctx->pc = 0x11D914u;
    // 0x11d914: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11D914u;
    {
        const bool branch_taken_0x11d914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D914u;
            // 0x11d918: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d914) {
            ctx->pc = 0x11D93Cu;
            goto label_11d93c;
        }
    }
    ctx->pc = 0x11D91Cu;
label_11d91c:
    // 0x11d91c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11d91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11d920: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D920u;
    {
        const bool branch_taken_0x11d920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D920u;
            // 0x11d924: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d920) {
            ctx->pc = 0x11D934u;
            goto label_11d934;
        }
    }
    ctx->pc = 0x11D928u;
label_11d928:
    // 0x11d928: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11d928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11d92c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11D92Cu;
    {
        const bool branch_taken_0x11d92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D92Cu;
            // 0x11d930: 0x94620050  lhu         $v0, 0x50($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d92c) {
            ctx->pc = 0x11D938u;
            goto label_11d938;
        }
    }
    ctx->pc = 0x11D934u;
label_11d934:
    // 0x11d934: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11d934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11d938:
    // 0x11d938: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x11d938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_11d93c:
    // 0x11d93c: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x11d93cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11d940: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x11d940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11d944: 0x3e00008  jr          $ra
    ctx->pc = 0x11D944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D944u;
            // 0x11d948: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D94Cu;
    // 0x11d94c: 0x0  nop
    ctx->pc = 0x11d94cu;
    // NOP
    ctx->pc = 0x11d950u;
}
