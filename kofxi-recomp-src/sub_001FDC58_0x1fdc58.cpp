#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FDC58
// Address: 0x1fdc58 - 0x1fe0c0
void sub_001FDC58_0x1fdc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDC58_0x1fdc58");
#endif

    switch (ctx->pc) {
        case 0x1fdce0u: goto label_1fdce0;
        case 0x1fdd3cu: goto label_1fdd3c;
        case 0x1fdd54u: goto label_1fdd54;
        case 0x1fdd60u: goto label_1fdd60;
        case 0x1fdd80u: goto label_1fdd80;
        case 0x1fddd8u: goto label_1fddd8;
        case 0x1fdde4u: goto label_1fdde4;
        case 0x1fde60u: goto label_1fde60;
        case 0x1fde6cu: goto label_1fde6c;
        case 0x1fdeb8u: goto label_1fdeb8;
        case 0x1fdee0u: goto label_1fdee0;
        case 0x1fdef0u: goto label_1fdef0;
        case 0x1fdefcu: goto label_1fdefc;
        case 0x1fdf2cu: goto label_1fdf2c;
        case 0x1fdf50u: goto label_1fdf50;
        case 0x1fdf70u: goto label_1fdf70;
        case 0x1fdf9cu: goto label_1fdf9c;
        case 0x1fdfc0u: goto label_1fdfc0;
        case 0x1fdfccu: goto label_1fdfcc;
        default: break;
    }

    ctx->pc = 0x1fdc58u;

    // 0x1fdc58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fdc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fdc5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fdc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdc60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fdc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fdc64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fdc64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdc68: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fdc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fdc6c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fdc6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdc70: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fdc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fdc74: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1fdc74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdc78: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1fdc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1fdc7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fdc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fdc80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fdc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fdc84: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fdc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fdc88: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1fdc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1fdc8c: 0xdea20008  ld          $v0, 0x8($s5)
    ctx->pc = 0x1fdc8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1fdc90: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDC90u;
    {
        const bool branch_taken_0x1fdc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FDC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC90u;
            // 0x1fdc94: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdc90) {
            ctx->pc = 0x1FDCA4u;
            goto label_1fdca4;
        }
    }
    ctx->pc = 0x1FDC98u;
    // 0x1fdc98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fdc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fdc9c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FDC9Cu;
    {
        const bool branch_taken_0x1fdc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc9c) {
            ctx->pc = 0x1FDCA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC9Cu;
            // 0x1fdca0: 0xde650000  ld          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDCE0u;
            goto label_1fdce0;
        }
    }
    ctx->pc = 0x1FDCA4u;
label_1fdca4:
    // 0x1fdca4: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x1fdca4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fdca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fdca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdcac: 0xfec20000  sd          $v0, 0x0($s6)
    ctx->pc = 0x1fdcacu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 2));
    // 0x1fdcb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fdcb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fdcb4: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x1fdcb4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1fdcb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fdcb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdcbc: 0xfec30008  sd          $v1, 0x8($s6)
    ctx->pc = 0x1fdcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 3));
    // 0x1fdcc0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fdcc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fdcc4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fdcc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fdcc8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fdcc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fdccc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1fdcccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fdcd0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1fdcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fdcd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDCD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDCD4u;
            // 0x1fdcd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FDCDCu;
    // 0x1fdcdc: 0x0  nop
    ctx->pc = 0x1fdcdcu;
    // NOP
label_1fdce0:
    // 0x1fdce0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fdce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdce4: 0xde020188  ld          $v0, 0x188($s0)
    ctx->pc = 0x1fdce4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x1fdce8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1fdce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fdcec: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x1fdcecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fdcf0: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1fdcf0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1fdcf4: 0x14870004  bne         $a0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDCF4u;
    {
        const bool branch_taken_0x1fdcf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x1FDCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDCF4u;
            // 0x1fdcf8: 0xfe650000  sd          $a1, 0x0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdcf4) {
            ctx->pc = 0x1FDD08u;
            goto label_1fdd08;
        }
    }
    ctx->pc = 0x1FDCFCu;
    // 0x1fdcfc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1fdcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1fdd00: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1FDD00u;
    {
        const bool branch_taken_0x1fdd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD00u;
            // 0x1fdd04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd00) {
            ctx->pc = 0x1FDDA8u;
            goto label_1fdda8;
        }
    }
    ctx->pc = 0x1FDD08u;
label_1fdd08:
    // 0x1fdd08: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x1fdd08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fdd0c: 0x16400027  bnez        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FDD0Cu;
    {
        const bool branch_taken_0x1fdd0c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD0Cu;
            // 0x1fdd10: 0xde060188  ld          $a2, 0x188($s0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd0c) {
            ctx->pc = 0x1FDDACu;
            goto label_1fddac;
        }
    }
    ctx->pc = 0x1FDD14u;
    // 0x1fdd14: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1fdd14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fdd18: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FDD18u;
    {
        const bool branch_taken_0x1fdd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd18) {
            ctx->pc = 0x1FDD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD18u;
            // 0x1fdd1c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDD90u;
            goto label_1fdd90;
        }
    }
    ctx->pc = 0x1FDD20u;
    // 0x1fdd20: 0xde030178  ld          $v1, 0x178($s0)
    ctx->pc = 0x1fdd20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x1fdd24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fdd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fdd28: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FDD28u;
    {
        const bool branch_taken_0x1fdd28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FDD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD28u;
            // 0x1fdd2c: 0xae070008  sw          $a3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd28) {
            ctx->pc = 0x1FDD48u;
            goto label_1fdd48;
        }
    }
    ctx->pc = 0x1FDD30u;
    // 0x1fdd30: 0xde050158  ld          $a1, 0x158($s0)
    ctx->pc = 0x1fdd30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x1fdd34: 0xc048082  jal         func_120208
    ctx->pc = 0x1FDD34u;
    SET_GPR_U32(ctx, 31, 0x1FDD3Cu);
    ctx->pc = 0x1FDD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD34u;
            // 0x1fdd38: 0xde640008  ld          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD3Cu; }
        if (ctx->pc != 0x1FDD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD3Cu; }
        if (ctx->pc != 0x1FDD3Cu) { return; }
    }
    ctx->pc = 0x1FDD3Cu;
label_1fdd3c:
    // 0x1fdd3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FDD3Cu;
    {
        const bool branch_taken_0x1fdd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD3Cu;
            // 0x1fdd40: 0xde050160  ld          $a1, 0x160($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd3c) {
            ctx->pc = 0x1FDD58u;
            goto label_1fdd58;
        }
    }
    ctx->pc = 0x1FDD44u;
    // 0x1fdd44: 0x0  nop
    ctx->pc = 0x1fdd44u;
    // NOP
label_1fdd48:
    // 0x1fdd48: 0xde050168  ld          $a1, 0x168($s0)
    ctx->pc = 0x1fdd48u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x1fdd4c: 0xc048082  jal         func_120208
    ctx->pc = 0x1FDD4Cu;
    SET_GPR_U32(ctx, 31, 0x1FDD54u);
    ctx->pc = 0x1FDD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD4Cu;
            // 0x1fdd50: 0xde640008  ld          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD54u; }
        if (ctx->pc != 0x1FDD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD54u; }
        if (ctx->pc != 0x1FDD54u) { return; }
    }
    ctx->pc = 0x1FDD54u;
label_1fdd54:
    // 0x1fdd54: 0xde050170  ld          $a1, 0x170($s0)
    ctx->pc = 0x1fdd54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 368)));
label_1fdd58:
    // 0x1fdd58: 0xc04818c  jal         func_120630
    ctx->pc = 0x1FDD58u;
    SET_GPR_U32(ctx, 31, 0x1FDD60u);
    ctx->pc = 0x1FDD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD58u;
            // 0x1fdd5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (runtime->hasFunction(0x120630u)) {
        auto targetFn = runtime->lookupFunction(0x120630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD60u; }
        if (ctx->pc != 0x1FDD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120630_0x120630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD60u; }
        if (ctx->pc != 0x1FDD60u) { return; }
    }
    ctx->pc = 0x1FDD60u;
label_1fdd60:
    // 0x1fdd60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fdd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd64: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x1fdd64u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1fdd68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fdd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd6c: 0xfe030178  sd          $v1, 0x178($s0)
    ctx->pc = 0x1fdd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 3));
    // 0x1fdd70: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x1fdd70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fdd74: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x1fdd74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1fdd78: 0xc07f6ce  jal         func_1FDB38
    ctx->pc = 0x1FDD78u;
    SET_GPR_U32(ctx, 31, 0x1FDD80u);
    ctx->pc = 0x1FDD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD78u;
            // 0x1fdd7c: 0xfe020180  sd          $v0, 0x180($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDB38u;
    if (runtime->hasFunction(0x1FDB38u)) {
        auto targetFn = runtime->lookupFunction(0x1FDB38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD80u; }
        if (ctx->pc != 0x1FDD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDB38_0x1fdb38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD80u; }
        if (ctx->pc != 0x1FDD80u) { return; }
    }
    ctx->pc = 0x1FDD80u;
label_1fdd80:
    // 0x1fdd80: 0xde060188  ld          $a2, 0x188($s0)
    ctx->pc = 0x1fdd80u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x1fdd84: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FDD84u;
    {
        const bool branch_taken_0x1fdd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD84u;
            // 0x1fdd88: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd84) {
            ctx->pc = 0x1FDDACu;
            goto label_1fddac;
        }
    }
    ctx->pc = 0x1FDD8Cu;
    // 0x1fdd8c: 0x0  nop
    ctx->pc = 0x1fdd8cu;
    // NOP
label_1fdd90:
    // 0x1fdd90: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FDD90u;
    {
        const bool branch_taken_0x1fdd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd90) {
            ctx->pc = 0x1FDD94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD90u;
            // 0x1fdd94: 0xde620000  ld          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDDB0u;
            goto label_1fddb0;
        }
    }
    ctx->pc = 0x1FDD98u;
    // 0x1fdd98: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x1fdd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x1fdd9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FDD9Cu;
    {
        const bool branch_taken_0x1fdd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD9Cu;
            // 0x1fdda0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd9c) {
            ctx->pc = 0x1FDDACu;
            goto label_1fddac;
        }
    }
    ctx->pc = 0x1FDDA4u;
    // 0x1fdda4: 0x0  nop
    ctx->pc = 0x1fdda4u;
    // NOP
label_1fdda8:
    // 0x1fdda8: 0xde060188  ld          $a2, 0x188($s0)
    ctx->pc = 0x1fdda8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 392)));
label_1fddac:
    // 0x1fddac: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x1fddacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_1fddb0:
    // 0x1fddb0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1fddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fddb4: 0xde110178  ld          $s1, 0x178($s0)
    ctx->pc = 0x1fddb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x1fddb8: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x1fddb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1fddbc: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x1fddbcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1fddc0: 0x1224000b  beq         $s1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FDDC0u;
    {
        const bool branch_taken_0x1fddc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FDDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDDC0u;
            // 0x1fddc4: 0xfe020188  sd          $v0, 0x188($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 392), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddc0) {
            ctx->pc = 0x1FDDF0u;
            goto label_1fddf0;
        }
    }
    ctx->pc = 0x1FDDC8u;
    // 0x1fddc8: 0xdea50000  ld          $a1, 0x0($s5)
    ctx->pc = 0x1fddc8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1fddcc: 0xde640008  ld          $a0, 0x8($s3)
    ctx->pc = 0x1fddccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1fddd0: 0xc048082  jal         func_120208
    ctx->pc = 0x1FDDD0u;
    SET_GPR_U32(ctx, 31, 0x1FDDD8u);
    ctx->pc = 0x1FDDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDDD0u;
            // 0x1fddd4: 0xb1282f  dsubu       $a1, $a1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDDD8u; }
        if (ctx->pc != 0x1FDDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDDD8u; }
        if (ctx->pc != 0x1FDDD8u) { return; }
    }
    ctx->pc = 0x1FDDD8u;
label_1fddd8:
    // 0x1fddd8: 0xdea50008  ld          $a1, 0x8($s5)
    ctx->pc = 0x1fddd8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1fdddc: 0xc04818c  jal         func_120630
    ctx->pc = 0x1FDDDCu;
    SET_GPR_U32(ctx, 31, 0x1FDDE4u);
    ctx->pc = 0x1FDDE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDDDCu;
            // 0x1fdde0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (runtime->hasFunction(0x120630u)) {
        auto targetFn = runtime->lookupFunction(0x120630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDDE4u; }
        if (ctx->pc != 0x1FDDE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120630_0x120630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDDE4u; }
        if (ctx->pc != 0x1FDDE4u) { return; }
    }
    ctx->pc = 0x1FDDE4u;
label_1fdde4:
    // 0x1fdde4: 0xde030180  ld          $v1, 0x180($s0)
    ctx->pc = 0x1fdde4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1fdde8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FDDE8u;
    {
        const bool branch_taken_0x1fdde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDDE8u;
            // 0x1fddec: 0x62a02d  daddu       $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdde8) {
            ctx->pc = 0x1FDDF4u;
            goto label_1fddf4;
        }
    }
    ctx->pc = 0x1FDDF0u;
label_1fddf0:
    // 0x1fddf0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1fddf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fddf4:
    // 0x1fddf4: 0x56400014  bnel        $s2, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FDDF4u;
    {
        const bool branch_taken_0x1fddf4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fddf4) {
            ctx->pc = 0x1FDDF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDDF4u;
            // 0x1fddf8: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDE48u;
            goto label_1fde48;
        }
    }
    ctx->pc = 0x1FDDFCu;
    // 0x1fddfc: 0xde030188  ld          $v1, 0x188($s0)
    ctx->pc = 0x1fddfcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x1fde00: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x1fde00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1fde04: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x1FDE04u;
    {
        const bool branch_taken_0x1fde04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE04u;
            // 0x1fde08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde04) {
            ctx->pc = 0x1FDFA8u;
            goto label_1fdfa8;
        }
    }
    ctx->pc = 0x1FDE0Cu;
    // 0x1fde0c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1fde0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fde10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDE10u;
    {
        const bool branch_taken_0x1fde10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE10u;
            // 0x1fde14: 0xdea20000  ld          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde10) {
            ctx->pc = 0x1FDE28u;
            goto label_1fde28;
        }
    }
    ctx->pc = 0x1FDE18u;
    // 0x1fde18: 0xfe030180  sd          $v1, 0x180($s0)
    ctx->pc = 0x1fde18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 3));
    // 0x1fde1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDE1Cu;
    {
        const bool branch_taken_0x1fde1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE1Cu;
            // 0x1fde20: 0xfe020178  sd          $v0, 0x178($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde1c) {
            ctx->pc = 0x1FDE34u;
            goto label_1fde34;
        }
    }
    ctx->pc = 0x1FDE24u;
    // 0x1fde24: 0x0  nop
    ctx->pc = 0x1fde24u;
    // NOP
label_1fde28:
    // 0x1fde28: 0xde030128  ld          $v1, 0x128($s0)
    ctx->pc = 0x1fde28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x1fde2c: 0xfe020178  sd          $v0, 0x178($s0)
    ctx->pc = 0x1fde2cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 2));
    // 0x1fde30: 0xfe030180  sd          $v1, 0x180($s0)
    ctx->pc = 0x1fde30u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 3));
label_1fde34:
    // 0x1fde34: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x1fde34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x1fde38: 0xde110178  ld          $s1, 0x178($s0)
    ctx->pc = 0x1fde38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x1fde3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fde3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fde40: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1FDE40u;
    {
        const bool branch_taken_0x1fde40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE40u;
            // 0x1fde44: 0xae020190  sw          $v0, 0x190($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde40) {
            ctx->pc = 0x1FDFA4u;
            goto label_1fdfa4;
        }
    }
    ctx->pc = 0x1FDE48u;
label_1fde48:
    // 0x1fde48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fde48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fde4c: 0x14620056  bne         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1FDE4Cu;
    {
        const bool branch_taken_0x1fde4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FDE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE4Cu;
            // 0x1fde50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde4c) {
            ctx->pc = 0x1FDFA8u;
            goto label_1fdfa8;
        }
    }
    ctx->pc = 0x1FDE54u;
    // 0x1fde54: 0xde050148  ld          $a1, 0x148($s0)
    ctx->pc = 0x1fde54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1fde58: 0xc048082  jal         func_120208
    ctx->pc = 0x1FDE58u;
    SET_GPR_U32(ctx, 31, 0x1FDE60u);
    ctx->pc = 0x1FDE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE58u;
            // 0x1fde5c: 0xde640008  ld          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDE60u; }
        if (ctx->pc != 0x1FDE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDE60u; }
        if (ctx->pc != 0x1FDE60u) { return; }
    }
    ctx->pc = 0x1FDE60u;
label_1fde60:
    // 0x1fde60: 0xde050150  ld          $a1, 0x150($s0)
    ctx->pc = 0x1fde60u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1fde64: 0xc04818c  jal         func_120630
    ctx->pc = 0x1FDE64u;
    SET_GPR_U32(ctx, 31, 0x1FDE6Cu);
    ctx->pc = 0x1FDE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE64u;
            // 0x1fde68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (runtime->hasFunction(0x120630u)) {
        auto targetFn = runtime->lookupFunction(0x120630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDE6Cu; }
        if (ctx->pc != 0x1FDE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120630_0x120630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDE6Cu; }
        if (ctx->pc != 0x1FDE6Cu) { return; }
    }
    ctx->pc = 0x1FDE6Cu;
label_1fde6c:
    // 0x1fde6c: 0xde650000  ld          $a1, 0x0($s3)
    ctx->pc = 0x1fde6cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fde70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fde70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fde74: 0xb4102f  dsubu       $v0, $a1, $s4
    ctx->pc = 0x1fde74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) - GPR_U64(ctx, 20));
    // 0x1fde78: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDE78u;
    {
        const bool branch_taken_0x1fde78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FDE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE78u;
            // 0x1fde7c: 0x62102a  slt         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde78) {
            ctx->pc = 0x1FDE90u;
            goto label_1fde90;
        }
    }
    ctx->pc = 0x1FDE80u;
    // 0x1fde80: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FDE80u;
    {
        const bool branch_taken_0x1fde80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fde80) {
            ctx->pc = 0x1FDE84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE80u;
            // 0x1fde84: 0xdea20000  ld          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDEA4u;
            goto label_1fdea4;
        }
    }
    ctx->pc = 0x1FDE88u;
    // 0x1fde88: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FDE88u;
    {
        const bool branch_taken_0x1fde88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE88u;
            // 0x1fde8c: 0xb4282f  dsubu       $a1, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde88) {
            ctx->pc = 0x1FDED0u;
            goto label_1fded0;
        }
    }
    ctx->pc = 0x1FDE90u;
label_1fde90:
    // 0x1fde90: 0x285102f  dsubu       $v0, $s4, $a1
    ctx->pc = 0x1fde90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) - GPR_U64(ctx, 5));
    // 0x1fde94: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1fde94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fde98: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FDE98u;
    {
        const bool branch_taken_0x1fde98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDE98u;
            // 0x1fde9c: 0xb4282f  dsubu       $a1, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde98) {
            ctx->pc = 0x1FDED0u;
            goto label_1fded0;
        }
    }
    ctx->pc = 0x1FDEA0u;
    // 0x1fdea0: 0xdea20000  ld          $v0, 0x0($s5)
    ctx->pc = 0x1fdea0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
label_1fdea4:
    // 0x1fdea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fdea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdea8: 0xfe020178  sd          $v0, 0x178($s0)
    ctx->pc = 0x1fdea8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 2));
    // 0x1fdeac: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x1fdeacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fdeb0: 0xc07f6ce  jal         func_1FDB38
    ctx->pc = 0x1FDEB0u;
    SET_GPR_U32(ctx, 31, 0x1FDEB8u);
    ctx->pc = 0x1FDEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDEB0u;
            // 0x1fdeb4: 0xfe030180  sd          $v1, 0x180($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDB38u;
    if (runtime->hasFunction(0x1FDB38u)) {
        auto targetFn = runtime->lookupFunction(0x1FDB38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDEB8u; }
        if (ctx->pc != 0x1FDEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDB38_0x1fdb38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDEB8u; }
        if (ctx->pc != 0x1FDEB8u) { return; }
    }
    ctx->pc = 0x1FDEB8u;
label_1fdeb8:
    // 0x1fdeb8: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x1fdeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x1fdebc: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x1fdebcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fdec0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fdec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fdec4: 0xde110178  ld          $s1, 0x178($s0)
    ctx->pc = 0x1fdec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x1fdec8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1FDEC8u;
    {
        const bool branch_taken_0x1fdec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDEC8u;
            // 0x1fdecc: 0xae0201a0  sw          $v0, 0x1A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdec8) {
            ctx->pc = 0x1FDFA4u;
            goto label_1fdfa4;
        }
    }
    ctx->pc = 0x1FDED0u;
label_1fded0:
    // 0x1fded0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1fded0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1fded4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1fded4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1fded8: 0xc07f830  jal         func_1FE0C0
    ctx->pc = 0x1FDED8u;
    SET_GPR_U32(ctx, 31, 0x1FDEE0u);
    ctx->pc = 0x1FDEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDED8u;
            // 0x1fdedc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE0C0u;
    if (runtime->hasFunction(0x1FE0C0u)) {
        auto targetFn = runtime->lookupFunction(0x1FE0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDEE0u; }
        if (ctx->pc != 0x1FDEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE0C0_0x1fe0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDEE0u; }
        if (ctx->pc != 0x1FDEE0u) { return; }
    }
    ctx->pc = 0x1FDEE0u;
label_1fdee0:
    // 0x1fdee0: 0xde640008  ld          $a0, 0x8($s3)
    ctx->pc = 0x1fdee0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1fdee4: 0xde050138  ld          $a1, 0x138($s0)
    ctx->pc = 0x1fdee4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x1fdee8: 0xc048082  jal         func_120208
    ctx->pc = 0x1FDEE8u;
    SET_GPR_U32(ctx, 31, 0x1FDEF0u);
    ctx->pc = 0x1FDEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDEE8u;
            // 0x1fdeec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDEF0u; }
        if (ctx->pc != 0x1FDEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDEF0u; }
        if (ctx->pc != 0x1FDEF0u) { return; }
    }
    ctx->pc = 0x1FDEF0u;
label_1fdef0:
    // 0x1fdef0: 0xde050140  ld          $a1, 0x140($s0)
    ctx->pc = 0x1fdef0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x1fdef4: 0xc04818c  jal         func_120630
    ctx->pc = 0x1FDEF4u;
    SET_GPR_U32(ctx, 31, 0x1FDEFCu);
    ctx->pc = 0x1FDEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDEF4u;
            // 0x1fdef8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (runtime->hasFunction(0x120630u)) {
        auto targetFn = runtime->lookupFunction(0x120630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDEFCu; }
        if (ctx->pc != 0x1FDEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120630_0x120630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDEFCu; }
        if (ctx->pc != 0x1FDEFCu) { return; }
    }
    ctx->pc = 0x1FDEFCu;
label_1fdefc:
    // 0x1fdefc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fdefcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdf00: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FDF00u;
    {
        const bool branch_taken_0x1fdf00 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1FDF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF00u;
            // 0x1fdf04: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf00) {
            ctx->pc = 0x1FDF0Cu;
            goto label_1fdf0c;
        }
    }
    ctx->pc = 0x1FDF08u;
    // 0x1fdf08: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x1fdf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_1fdf0c:
    // 0x1fdf0c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1fdf0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fdf10: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FDF10u;
    {
        const bool branch_taken_0x1fdf10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdf10) {
            ctx->pc = 0x1FDF14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF10u;
            // 0x1fdf14: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDFA0u;
            goto label_1fdfa0;
        }
    }
    ctx->pc = 0x1FDF18u;
    // 0x1fdf18: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x1fdf18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1fdf1c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FDF1Cu;
    {
        const bool branch_taken_0x1fdf1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF1Cu;
            // 0x1fdf20: 0x112078  dsll        $a0, $s1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf1c) {
            ctx->pc = 0x1FDF48u;
            goto label_1fdf48;
        }
    }
    ctx->pc = 0x1FDF24u;
    // 0x1fdf24: 0xc04818c  jal         func_120630
    ctx->pc = 0x1FDF24u;
    SET_GPR_U32(ctx, 31, 0x1FDF2Cu);
    ctx->pc = 0x1FDF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF24u;
            // 0x1fdf28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (runtime->hasFunction(0x120630u)) {
        auto targetFn = runtime->lookupFunction(0x120630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF2Cu; }
        if (ctx->pc != 0x1FDF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120630_0x120630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF2Cu; }
        if (ctx->pc != 0x1FDF2Cu) { return; }
    }
    ctx->pc = 0x1FDF2Cu;
label_1fdf2c:
    // 0x1fdf2c: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x1fdf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x1fdf30: 0x6444ffff  daddiu      $a0, $v0, -0x1
    ctx->pc = 0x1fdf30u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x1fdf34: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1fdf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1fdf38: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fdf38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fdf3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fdf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fdf40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FDF40u;
    {
        const bool branch_taken_0x1fdf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF40u;
            // 0x1fdf44: 0xae030194  sw          $v1, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf40) {
            ctx->pc = 0x1FDF68u;
            goto label_1fdf68;
        }
    }
    ctx->pc = 0x1FDF48u;
label_1fdf48:
    // 0x1fdf48: 0xc04818c  jal         func_120630
    ctx->pc = 0x1FDF48u;
    SET_GPR_U32(ctx, 31, 0x1FDF50u);
    ctx->pc = 0x1FDF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF48u;
            // 0x1fdf4c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (runtime->hasFunction(0x120630u)) {
        auto targetFn = runtime->lookupFunction(0x120630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF50u; }
        if (ctx->pc != 0x1FDF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120630_0x120630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF50u; }
        if (ctx->pc != 0x1FDF50u) { return; }
    }
    ctx->pc = 0x1FDF50u;
label_1fdf50:
    // 0x1fdf50: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x1fdf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x1fdf54: 0x64440001  daddiu      $a0, $v0, 0x1
    ctx->pc = 0x1fdf54u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1fdf58: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1fdf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1fdf5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fdf5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fdf60: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1fdf60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fdf64: 0xae030198  sw          $v1, 0x198($s0)
    ctx->pc = 0x1fdf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 3));
label_1fdf68:
    // 0x1fdf68: 0xc048082  jal         func_120208
    ctx->pc = 0x1FDF68u;
    SET_GPR_U32(ctx, 31, 0x1FDF70u);
    ctx->pc = 0x1FDF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF68u;
            // 0x1fdf6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF70u; }
        if (ctx->pc != 0x1FDF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF70u; }
        if (ctx->pc != 0x1FDF70u) { return; }
    }
    ctx->pc = 0x1FDF70u;
label_1fdf70:
    // 0x1fdf70: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x1fdf70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1fdf74: 0x22ffe  dsrl32      $a1, $v0, 31
    ctx->pc = 0x1fdf74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x1fdf78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fdf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdf7c: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x1fdf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1fdf80: 0xfe030178  sd          $v1, 0x178($s0)
    ctx->pc = 0x1fdf80u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 3));
    // 0x1fdf84: 0x5287b  dsra        $a1, $a1, 1
    ctx->pc = 0x1fdf84u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 1);
    // 0x1fdf88: 0x285102d  daddu       $v0, $s4, $a1
    ctx->pc = 0x1fdf88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1fdf8c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1fdf8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1fdf90: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1fdf90u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1fdf94: 0xc07f848  jal         func_1FE120
    ctx->pc = 0x1FDF94u;
    SET_GPR_U32(ctx, 31, 0x1FDF9Cu);
    ctx->pc = 0x1FDF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF94u;
            // 0x1fdf98: 0xfe020180  sd          $v0, 0x180($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE120u;
    if (runtime->hasFunction(0x1FE120u)) {
        auto targetFn = runtime->lookupFunction(0x1FE120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF9Cu; }
        if (ctx->pc != 0x1FDF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE120_0x1fe120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDF9Cu; }
        if (ctx->pc != 0x1FDF9Cu) { return; }
    }
    ctx->pc = 0x1FDF9Cu;
label_1fdf9c:
    // 0x1fdf9c: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x1fdf9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fdfa0:
    // 0x1fdfa0: 0xde110178  ld          $s1, 0x178($s0)
    ctx->pc = 0x1fdfa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 376)));
label_1fdfa4:
    // 0x1fdfa4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fdfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fdfa8:
    // 0x1fdfa8: 0x5222000a  beql        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FDFA8u;
    {
        const bool branch_taken_0x1fdfa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fdfa8) {
            ctx->pc = 0x1FDFACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDFA8u;
            // 0x1fdfac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDFD4u;
            goto label_1fdfd4;
        }
    }
    ctx->pc = 0x1FDFB0u;
    // 0x1fdfb0: 0xdea50000  ld          $a1, 0x0($s5)
    ctx->pc = 0x1fdfb0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1fdfb4: 0xde640008  ld          $a0, 0x8($s3)
    ctx->pc = 0x1fdfb4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1fdfb8: 0xc048082  jal         func_120208
    ctx->pc = 0x1FDFB8u;
    SET_GPR_U32(ctx, 31, 0x1FDFC0u);
    ctx->pc = 0x1FDFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDFB8u;
            // 0x1fdfbc: 0xb1282f  dsubu       $a1, $a1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDFC0u; }
        if (ctx->pc != 0x1FDFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDFC0u; }
        if (ctx->pc != 0x1FDFC0u) { return; }
    }
    ctx->pc = 0x1FDFC0u;
label_1fdfc0:
    // 0x1fdfc0: 0xdea50008  ld          $a1, 0x8($s5)
    ctx->pc = 0x1fdfc0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1fdfc4: 0xc04818c  jal         func_120630
    ctx->pc = 0x1FDFC4u;
    SET_GPR_U32(ctx, 31, 0x1FDFCCu);
    ctx->pc = 0x1FDFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDFC4u;
            // 0x1fdfc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (runtime->hasFunction(0x120630u)) {
        auto targetFn = runtime->lookupFunction(0x120630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDFCCu; }
        if (ctx->pc != 0x1FDFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120630_0x120630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDFCCu; }
        if (ctx->pc != 0x1FDFCCu) { return; }
    }
    ctx->pc = 0x1FDFCCu;
label_1fdfcc:
    // 0x1fdfcc: 0xde030180  ld          $v1, 0x180($s0)
    ctx->pc = 0x1fdfccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1fdfd0: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x1fdfd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_1fdfd4:
    // 0x1fdfd4: 0xfec30000  sd          $v1, 0x0($s6)
    ctx->pc = 0x1fdfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 3));
    // 0x1fdfd8: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x1fdfd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1fdfdc: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x1fdfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x1fdfe0: 0xde040128  ld          $a0, 0x128($s0)
    ctx->pc = 0x1fdfe0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x1fdfe4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1fdfe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fdfe8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDFE8u;
    {
        const bool branch_taken_0x1fdfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdfe8) {
            ctx->pc = 0x1FDFECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDFE8u;
            // 0x1fdfec: 0xde620000  ld          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE000u;
            goto label_1fe000;
        }
    }
    ctx->pc = 0x1FDFF0u;
    // 0x1fdff0: 0xfec40000  sd          $a0, 0x0($s6)
    ctx->pc = 0x1fdff0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 4));
    // 0x1fdff4: 0xde020130  ld          $v0, 0x130($s0)
    ctx->pc = 0x1fdff4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1fdff8: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x1fdff8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x1fdffc: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x1fdffcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_1fe000:
    // 0x1fe000: 0xfe020108  sd          $v0, 0x108($s0)
    ctx->pc = 0x1fe000u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 264), GPR_U64(ctx, 2));
    // 0x1fe004: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x1fe004u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1fe008: 0xfe030110  sd          $v1, 0x110($s0)
    ctx->pc = 0x1fe008u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 272), GPR_U64(ctx, 3));
    // 0x1fe00c: 0xdea20000  ld          $v0, 0x0($s5)
    ctx->pc = 0x1fe00cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1fe010: 0xfe020118  sd          $v0, 0x118($s0)
    ctx->pc = 0x1fe010u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 280), GPR_U64(ctx, 2));
    // 0x1fe014: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x1fe014u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1fe018: 0xfe030120  sd          $v1, 0x120($s0)
    ctx->pc = 0x1fe018u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 288), GPR_U64(ctx, 3));
    // 0x1fe01c: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x1fe01cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1fe020: 0xfe020128  sd          $v0, 0x128($s0)
    ctx->pc = 0x1fe020u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 296), GPR_U64(ctx, 2));
    // 0x1fe024: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x1fe024u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1fe028: 0xfe030130  sd          $v1, 0x130($s0)
    ctx->pc = 0x1fe028u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 304), GPR_U64(ctx, 3));
    // 0x1fe02c: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x1fe02cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1fe030: 0xdec30000  ld          $v1, 0x0($s6)
    ctx->pc = 0x1fe030u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1fe034: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x1fe034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1fe038: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x1fe038u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fe03c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1fe03cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1fe040: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1FE040u;
    {
        const bool branch_taken_0x1fe040 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe040) {
            ctx->pc = 0x1FE044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE040u;
            // 0x1fe044: 0x8e0201b4  lw          $v0, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FE070u;
            goto label_1fe070;
        }
    }
    ctx->pc = 0x1FE048u;
    // 0x1fe048: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x1fe048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x1fe04c: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x1fe04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x1fe050: 0xe2202a  slt         $a0, $a3, $v0
    ctx->pc = 0x1fe050u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fe054: 0x67282a  slt         $a1, $v1, $a3
    ctx->pc = 0x1fe054u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1fe058: 0xe4100a  movz        $v0, $a3, $a0
    ctx->pc = 0x1fe058u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1fe05c: 0xe5180a  movz        $v1, $a3, $a1
    ctx->pc = 0x1fe05cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x1fe060: 0xae0201ac  sw          $v0, 0x1AC($s0)
    ctx->pc = 0x1fe060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
    // 0x1fe064: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE064u;
    {
        const bool branch_taken_0x1fe064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE064u;
            // 0x1fe068: 0xae0301b0  sw          $v1, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe064) {
            ctx->pc = 0x1FE08Cu;
            goto label_1fe08c;
        }
    }
    ctx->pc = 0x1FE06Cu;
    // 0x1fe06c: 0x0  nop
    ctx->pc = 0x1fe06cu;
    // NOP
label_1fe070:
    // 0x1fe070: 0x8e0301b8  lw          $v1, 0x1B8($s0)
    ctx->pc = 0x1fe070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1fe074: 0xe2202a  slt         $a0, $a3, $v0
    ctx->pc = 0x1fe074u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fe078: 0x67282a  slt         $a1, $v1, $a3
    ctx->pc = 0x1fe078u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1fe07c: 0xe4100a  movz        $v0, $a3, $a0
    ctx->pc = 0x1fe07cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1fe080: 0xe5180a  movz        $v1, $a3, $a1
    ctx->pc = 0x1fe080u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x1fe084: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x1fe084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x1fe088: 0xae0301b8  sw          $v1, 0x1B8($s0)
    ctx->pc = 0x1fe088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 3));
label_1fe08c:
    // 0x1fe08c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1fe08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1fe090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe094: 0xac5017b8  sw          $s0, 0x17B8($v0)
    ctx->pc = 0x1fe094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6072), GPR_U32(ctx, 16));
    // 0x1fe098: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe09c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe09cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe0a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe0a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe0a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fe0a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fe0a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fe0a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe0ac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1fe0acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fe0b0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1fe0b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe0b4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1fe0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fe0b8: 0x807f8d2  j           func_1FE348
    ctx->pc = 0x1FE0B8u;
    ctx->pc = 0x1FE0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE0B8u;
            // 0x1fe0bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE348u;
    {
        auto targetFn = runtime->lookupFunction(0x1FE348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1FE0C0u;
    ctx->pc = 0x1fe0c0u;
}
