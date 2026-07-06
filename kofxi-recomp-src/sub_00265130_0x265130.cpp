#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00265130
// Address: 0x265130 - 0x2652e0
void sub_00265130_0x265130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265130_0x265130");
#endif

    switch (ctx->pc) {
        case 0x265190u: goto label_265190;
        case 0x265198u: goto label_265198;
        case 0x2651c0u: goto label_2651c0;
        case 0x26521cu: goto label_26521c;
        case 0x265274u: goto label_265274;
        default: break;
    }

    ctx->pc = 0x265130u;

    // 0x265130: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x265130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x265134: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x265134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x265138: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x265138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x26513c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x26513cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265140: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x265140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x265144: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x265144u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265148: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x265148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x26514c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x26514cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265150: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x265150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x265154: 0x2284021  addu        $t0, $s1, $t0
    ctx->pc = 0x265154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x265158: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x265158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x26515c: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x26515cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265160: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x265160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x265164: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x265164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265168: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x265168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x26516c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x26516cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265170: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x265170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x265174: 0x296102b  sltu        $v0, $s4, $s6
    ctx->pc = 0x265174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x265178: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x265178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26517c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26517Cu;
    {
        const bool branch_taken_0x26517c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26517Cu;
            // 0x265180: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26517c) {
            ctx->pc = 0x265190u;
            goto label_265190;
        }
    }
    ctx->pc = 0x265184u;
    // 0x265184: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x265184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x265188: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x265188u;
    {
        const bool branch_taken_0x265188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265188) {
            ctx->pc = 0x26518Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x265188u;
            // 0x26518c: 0x92900000  lbu         $s0, 0x0($s4) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2651A8u;
            goto label_2651a8;
        }
    }
    ctx->pc = 0x265190u;
label_265190:
    // 0x265190: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x265190u;
    SET_GPR_U32(ctx, 31, 0x265198u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265198u; }
        if (ctx->pc != 0x265198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265198u; }
        if (ctx->pc != 0x265198u) { return; }
    }
    ctx->pc = 0x265198u;
label_265198:
    // 0x265198: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x265198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x26519c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26519cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2651a0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2651A0u;
    {
        const bool branch_taken_0x2651a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2651A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2651A0u;
            // 0x2651a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651a0) {
            ctx->pc = 0x2652B0u;
            goto label_2652b0;
        }
    }
    ctx->pc = 0x2651A8u;
label_2651a8:
    // 0x2651a8: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2651A8u;
    {
        const bool branch_taken_0x2651a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2651ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2651A8u;
            // 0x2651ac: 0x26850001  addiu       $a1, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651a8) {
            ctx->pc = 0x26529Cu;
            goto label_26529c;
        }
    }
    ctx->pc = 0x2651B0u;
    // 0x2651b0: 0x2761023  subu        $v0, $s3, $s6
    ctx->pc = 0x2651b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x2651b4: 0x2417007a  addiu       $s7, $zero, 0x7A
    ctx->pc = 0x2651b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x2651b8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2651b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2651bc: 0x0  nop
    ctx->pc = 0x2651bcu;
    // NOP
label_2651c0:
    // 0x2651c0: 0x320200c0  andi        $v0, $s0, 0xC0
    ctx->pc = 0x2651c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)192);
    // 0x2651c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2651C4u;
    {
        const bool branch_taken_0x2651c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2651C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2651C4u;
            // 0x2651c8: 0x240300c0  addiu       $v1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651c4) {
            ctx->pc = 0x2651DCu;
            goto label_2651dc;
        }
    }
    ctx->pc = 0x2651CCu;
    // 0x2651cc: 0x50430016  beql        $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2651CCu;
    {
        const bool branch_taken_0x2651cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2651cc) {
            ctx->pc = 0x2651D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2651CCu;
            // 0x2651d0: 0xb3102b  sltu        $v0, $a1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x265228u;
            goto label_265228;
        }
    }
    ctx->pc = 0x2651D4u;
    // 0x2651d4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2651D4u;
    {
        const bool branch_taken_0x2651d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2651d4) {
            ctx->pc = 0x26526Cu;
            goto label_26526c;
        }
    }
    ctx->pc = 0x2651DCu;
label_2651dc:
    // 0x2651dc: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2651dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2651e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2651e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2651e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2651e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2651e8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2651e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2651ec: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2651ECu;
    {
        const bool branch_taken_0x2651ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2651F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2651ECu;
            // 0x2651f0: 0xb09021  addu        $s2, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2651ec) {
            ctx->pc = 0x26526Cu;
            goto label_26526c;
        }
    }
    ctx->pc = 0x2651F4u;
    // 0x2651f4: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x2651f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2651f8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2651F8u;
    {
        const bool branch_taken_0x2651f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2651f8) {
            ctx->pc = 0x26526Cu;
            goto label_26526c;
        }
    }
    ctx->pc = 0x265200u;
    // 0x265200: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x265200u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x265204: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x265204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x265208: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x265208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26520c: 0x50a821  addu        $s5, $v0, $s0
    ctx->pc = 0x26520cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x265210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x265210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265214: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x265214u;
    SET_GPR_U32(ctx, 31, 0x26521Cu);
    ctx->pc = 0x265218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265214u;
            // 0x265218: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26521Cu; }
        if (ctx->pc != 0x26521Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26521Cu; }
        if (ctx->pc != 0x26521Cu) { return; }
    }
    ctx->pc = 0x26521Cu;
label_26521c:
    // 0x26521c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x26521cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x265220: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x265220u;
    {
        const bool branch_taken_0x265220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265220u;
            // 0x265224: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265220) {
            ctx->pc = 0x265290u;
            goto label_265290;
        }
    }
    ctx->pc = 0x265228u;
label_265228:
    // 0x265228: 0x1040ffd9  beqz        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x265228u;
    {
        const bool branch_taken_0x265228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265228) {
            ctx->pc = 0x265190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_265190;
        }
    }
    ctx->pc = 0x265230u;
    // 0x265230: 0x7c30004  bgezl       $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x265230u;
    {
        const bool branch_taken_0x265230 = (GPR_S32(ctx, 30) >= 0);
        if (branch_taken_0x265230) {
            ctx->pc = 0x265234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x265230u;
            // 0x265234: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x265244u;
            goto label_265244;
        }
    }
    ctx->pc = 0x265238u;
    // 0x265238: 0xb41023  subu        $v0, $a1, $s4
    ctx->pc = 0x265238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x26523c: 0x245e0001  addiu       $fp, $v0, 0x1
    ctx->pc = 0x26523cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x265240: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x265240u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_265244:
    // 0x265244: 0x3203003f  andi        $v1, $s0, 0x3F
    ctx->pc = 0x265244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x265248: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x265248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x26524c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26524cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x265250: 0x2c32821  addu        $a1, $s6, $v1
    ctx->pc = 0x265250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x265254: 0xb6102b  sltu        $v0, $a1, $s6
    ctx->pc = 0x265254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x265258: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x265258u;
    {
        const bool branch_taken_0x265258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x265258) {
            ctx->pc = 0x26526Cu;
            goto label_26526c;
        }
    }
    ctx->pc = 0x265260u;
    // 0x265260: 0xb3102b  sltu        $v0, $a1, $s3
    ctx->pc = 0x265260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x265264: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x265264u;
    {
        const bool branch_taken_0x265264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265264u;
            // 0x265268: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265264) {
            ctx->pc = 0x265280u;
            goto label_265280;
        }
    }
    ctx->pc = 0x26526Cu;
label_26526c:
    // 0x26526c: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x26526Cu;
    SET_GPR_U32(ctx, 31, 0x265274u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265274u; }
        if (ctx->pc != 0x265274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265274u; }
        if (ctx->pc != 0x265274u) { return; }
    }
    ctx->pc = 0x265274u;
label_265274:
    // 0x265274: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x265274u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x265278: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x265278u;
    {
        const bool branch_taken_0x265278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26527Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265278u;
            // 0x26527c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265278) {
            ctx->pc = 0x2652B0u;
            goto label_2652b0;
        }
    }
    ctx->pc = 0x265280u;
label_265280:
    // 0x265280: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x265280u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
    // 0x265284: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x265284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x265288: 0x1040ffc1  beqz        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x265288u;
    {
        const bool branch_taken_0x265288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265288) {
            ctx->pc = 0x265190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_265190;
        }
    }
    ctx->pc = 0x265290u;
label_265290:
    // 0x265290: 0x90b00000  lbu         $s0, 0x0($a1)
    ctx->pc = 0x265290u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x265294: 0x1600ffca  bnez        $s0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x265294u;
    {
        const bool branch_taken_0x265294 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x265298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265294u;
            // 0x265298: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265294) {
            ctx->pc = 0x2651C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2651c0;
        }
    }
    ctx->pc = 0x26529Cu;
label_26529c:
    // 0x26529c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26529cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2652a0: 0xb41023  subu        $v0, $a1, $s4
    ctx->pc = 0x2652a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x2652a4: 0x7e182a  slt         $v1, $v1, $fp
    ctx->pc = 0x2652a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x2652a8: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2652a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2652ac: 0x3c3100b  movn        $v0, $fp, $v1
    ctx->pc = 0x2652acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 30));
label_2652b0:
    // 0x2652b0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2652b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2652b4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2652b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2652b8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2652b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2652bc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2652bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2652c0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2652c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2652c4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2652c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2652c8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2652c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2652cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2652ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2652d0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2652d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2652d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2652d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2652d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2652D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2652DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2652D8u;
            // 0x2652dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2652E0u;
    ctx->pc = 0x2652e0u;
}
