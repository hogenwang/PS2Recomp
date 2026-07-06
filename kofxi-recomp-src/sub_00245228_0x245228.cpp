#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245228
// Address: 0x245228 - 0x245408
void sub_00245228_0x245228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245228_0x245228");
#endif

    switch (ctx->pc) {
        case 0x245280u: goto label_245280;
        case 0x2452c0u: goto label_2452c0;
        case 0x245310u: goto label_245310;
        case 0x24537cu: goto label_24537c;
        case 0x245384u: goto label_245384;
        default: break;
    }

    ctx->pc = 0x245228u;

    // 0x245228: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x245228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24522c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x24522cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x245230: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x245230u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245234: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x245234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x245238: 0x26e20004  addiu       $v0, $s7, 0x4
    ctx->pc = 0x245238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x24523c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24523cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x245240: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x245240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x245244: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x245244u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245248: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x245248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x24524c: 0x2bc5000c  slti        $a1, $fp, 0xC
    ctx->pc = 0x24524cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x245250: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x245250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x245254: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x245254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245258: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x245258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x24525c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x24525cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245260: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x245260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x245264: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x245264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x245268: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x245268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24526c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x24526cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x245270: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x245270u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x245274: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x245274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x245278: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x245278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x24527c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x24527cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_245280:
    // 0x245280: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x245280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245284: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x245284u;
    {
        const bool branch_taken_0x245284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245284u;
            // 0x245288: 0x24150078  addiu       $s5, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245284) {
            ctx->pc = 0x2452A8u;
            goto label_2452a8;
        }
    }
    ctx->pc = 0x24528Cu;
    // 0x24528c: 0x2bc2000e  slti        $v0, $fp, 0xE
    ctx->pc = 0x24528cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x245290: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x245290u;
    {
        const bool branch_taken_0x245290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245290u;
            // 0x245294: 0x24150014  addiu       $s5, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245290) {
            ctx->pc = 0x2452A8u;
            goto label_2452a8;
        }
    }
    ctx->pc = 0x245298u;
    // 0x245298: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x245298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x24529c: 0x17c20002  bne         $fp, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24529Cu;
    {
        const bool branch_taken_0x24529c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x2452A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24529Cu;
            // 0x2452a0: 0x24150078  addiu       $s5, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24529c) {
            ctx->pc = 0x2452A8u;
            goto label_2452a8;
        }
    }
    ctx->pc = 0x2452A4u;
    // 0x2452a4: 0x24150098  addiu       $s5, $zero, 0x98
    ctx->pc = 0x2452a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_2452a8:
    // 0x2452a8: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x2452a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452ac: 0x8fb2000c  lw          $s2, 0xC($sp)
    ctx->pc = 0x2452acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2452b0: 0x2d58821  addu        $s1, $s6, $s5
    ctx->pc = 0x2452b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x2452b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2452b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2452b8: 0x2d6880a  movz        $s1, $s6, $s6
    ctx->pc = 0x2452b8u;
    if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 22));
    // 0x2452bc: 0x0  nop
    ctx->pc = 0x2452bcu;
    // NOP
label_2452c0:
    // 0x2452c0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2452c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2452c4: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2452C4u;
    {
        const bool branch_taken_0x2452c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2452C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2452C4u;
            // 0x2452c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2452c4) {
            ctx->pc = 0x245314u;
            goto label_245314;
        }
    }
    ctx->pc = 0x2452CCu;
    // 0x2452cc: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x2452ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2452d0: 0x2651804  sllv        $v1, $a1, $s3
    ctx->pc = 0x2452d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 19) & 0x1F));
    // 0x2452d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2452d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2452d8: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x2452d8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x2452dc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2452dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2452e0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2452E0u;
    {
        const bool branch_taken_0x2452e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2452E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2452E0u;
            // 0x2452e4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2452e0) {
            ctx->pc = 0x2452F8u;
            goto label_2452f8;
        }
    }
    ctx->pc = 0x2452E8u;
    // 0x2452e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2452e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2452ec: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x2452ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2452f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2452F0u;
    {
        const bool branch_taken_0x2452f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2452F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2452F0u;
            // 0x2452f4: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2452f0) {
            ctx->pc = 0x2452FCu;
            goto label_2452fc;
        }
    }
    ctx->pc = 0x2452F8u;
label_2452f8:
    // 0x2452f8: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x2452f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2452fc:
    // 0x2452fc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2452FCu;
    {
        const bool branch_taken_0x2452fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x245300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2452FCu;
            // 0x245300: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2452fc) {
            ctx->pc = 0x245310u;
            goto label_245310;
        }
    }
    ctx->pc = 0x245304u;
    // 0x245304: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x245304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245308: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x245308u;
    SET_GPR_U32(ctx, 31, 0x245310u);
    ctx->pc = 0x24530Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245308u;
            // 0x24530c: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245310u; }
        if (ctx->pc != 0x245310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245310u; }
        if (ctx->pc != 0x245310u) { return; }
    }
    ctx->pc = 0x245310u;
label_245310:
    // 0x245310: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x245310u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_245314:
    // 0x245314: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x245314u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x245318: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x245318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x24531c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x24531Cu;
    {
        const bool branch_taken_0x24531c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24531Cu;
            // 0x245320: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24531c) {
            ctx->pc = 0x2452C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2452c0;
        }
    }
    ctx->pc = 0x245324u;
    // 0x245324: 0x16200025  bnez        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x245324u;
    {
        const bool branch_taken_0x245324 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x245328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245324u;
            // 0x245328: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245324) {
            ctx->pc = 0x2453BCu;
            goto label_2453bc;
        }
    }
    ctx->pc = 0x24532Cu;
    // 0x24532c: 0x12800021  beqz        $s4, . + 4 + (0x21 << 2)
    ctx->pc = 0x24532Cu;
    {
        const bool branch_taken_0x24532c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x245330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24532Cu;
            // 0x245330: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24532c) {
            ctx->pc = 0x2453B4u;
            goto label_2453b4;
        }
    }
    ctx->pc = 0x245334u;
    // 0x245334: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x245334u;
    {
        const bool branch_taken_0x245334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245334) {
            ctx->pc = 0x2453B4u;
            goto label_2453b4;
        }
    }
    ctx->pc = 0x24533Cu;
    // 0x24533c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x24533cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x245340: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x245340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x245344: 0x1c40001b  bgtz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x245344u;
    {
        const bool branch_taken_0x245344 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x245348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245344u;
            // 0x245348: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245344) {
            ctx->pc = 0x2453B4u;
            goto label_2453b4;
        }
    }
    ctx->pc = 0x24534Cu;
    // 0x24534c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x24534cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x245350: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x245350u;
    {
        const bool branch_taken_0x245350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245350) {
            ctx->pc = 0x2453B4u;
            goto label_2453b4;
        }
    }
    ctx->pc = 0x245358u;
    // 0x245358: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x245358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x24535c: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x24535cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x245360: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x245360u;
    {
        const bool branch_taken_0x245360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x245360) {
            ctx->pc = 0x245364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x245360u;
            // 0x245364: 0x8e85001c  lw          $a1, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x245394u;
            goto label_245394;
        }
    }
    ctx->pc = 0x245368u;
    // 0x245368: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x245368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x24536c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24536Cu;
    {
        const bool branch_taken_0x24536c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24536c) {
            ctx->pc = 0x24537Cu;
            goto label_24537c;
        }
    }
    ctx->pc = 0x245374u;
    // 0x245374: 0xc098560  jal         func_261580
    ctx->pc = 0x245374u;
    SET_GPR_U32(ctx, 31, 0x24537Cu);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24537Cu; }
        if (ctx->pc != 0x24537Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24537Cu; }
        if (ctx->pc != 0x24537Cu) { return; }
    }
    ctx->pc = 0x24537Cu;
label_24537c:
    // 0x24537c: 0xc098552  jal         func_261548
    ctx->pc = 0x24537Cu;
    SET_GPR_U32(ctx, 31, 0x245384u);
    ctx->pc = 0x245380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24537Cu;
            // 0x245380: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245384u; }
        if (ctx->pc != 0x245384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245384u; }
        if (ctx->pc != 0x245384u) { return; }
    }
    ctx->pc = 0x245384u;
label_245384:
    // 0x245384: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x245384u;
    {
        const bool branch_taken_0x245384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245384u;
            // 0x245388: 0xae82001c  sw          $v0, 0x1C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245384) {
            ctx->pc = 0x2453A8u;
            goto label_2453a8;
        }
    }
    ctx->pc = 0x24538Cu;
    // 0x24538c: 0xae950014  sw          $s5, 0x14($s4)
    ctx->pc = 0x24538cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 21));
    // 0x245390: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x245390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_245394:
    // 0x245394: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x245394u;
    {
        const bool branch_taken_0x245394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x245398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245394u;
            // 0x245398: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245394) {
            ctx->pc = 0x2453A8u;
            goto label_2453a8;
        }
    }
    ctx->pc = 0x24539Cu;
    // 0x24539c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24539cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2453a0: 0x1000ffb7  b           . + 4 + (-0x49 << 2)
    ctx->pc = 0x2453A0u;
    {
        const bool branch_taken_0x2453a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2453A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2453A0u;
            // 0x2453a4: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453a0) {
            ctx->pc = 0x245280u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245280;
        }
    }
    ctx->pc = 0x2453A8u;
label_2453a8:
    // 0x2453a8: 0xae950018  sw          $s5, 0x18($s4)
    ctx->pc = 0x2453a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 21));
    // 0x2453ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2453ACu;
    {
        const bool branch_taken_0x2453ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2453B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2453ACu;
            // 0x2453b0: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453ac) {
            ctx->pc = 0x2453D8u;
            goto label_2453d8;
        }
    }
    ctx->pc = 0x2453B4u;
label_2453b4:
    // 0x2453b4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2453B4u;
    {
        const bool branch_taken_0x2453b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2453B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2453B4u;
            // 0x2453b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453b4) {
            ctx->pc = 0x2453C8u;
            goto label_2453c8;
        }
    }
    ctx->pc = 0x2453BCu;
label_2453bc:
    // 0x2453bc: 0xa2de0003  sb          $fp, 0x3($s6)
    ctx->pc = 0x2453bcu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 30));
    // 0x2453c0: 0xa2c20002  sb          $v0, 0x2($s6)
    ctx->pc = 0x2453c0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2453c4: 0xa6d50000  sh          $s5, 0x0($s6)
    ctx->pc = 0x2453c4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 21));
label_2453c8:
    // 0x2453c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2453c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2453cc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2453CCu;
    {
        const bool branch_taken_0x2453cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2453cc) {
            ctx->pc = 0x2453D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2453CCu;
            // 0x2453d0: 0xac550000  sw          $s5, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2453D4u;
            goto label_2453d4;
        }
    }
    ctx->pc = 0x2453D4u;
label_2453d4:
    // 0x2453d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2453d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2453d8:
    // 0x2453d8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2453d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2453dc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2453dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2453e0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2453e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2453e4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2453e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2453e8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2453e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2453ec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2453ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2453f0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2453f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2453f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2453f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2453f8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2453f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2453fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2453fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245400: 0x3e00008  jr          $ra
    ctx->pc = 0x245400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245400u;
            // 0x245404: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x245408u;
    ctx->pc = 0x245408u;
}
