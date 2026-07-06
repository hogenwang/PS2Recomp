#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211608
// Address: 0x211608 - 0x211708
void sub_00211608_0x211608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211608_0x211608");
#endif

    switch (ctx->pc) {
        case 0x211638u: goto label_211638;
        case 0x211674u: goto label_211674;
        case 0x2116b0u: goto label_2116b0;
        default: break;
    }

    ctx->pc = 0x211608u;

    // 0x211608: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x211608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21160c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21160cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x211610: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211614: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x211614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x211618: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x211618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21161c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21161cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x211620: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x211620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x211624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x211628: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x211628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21162c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x21162cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211630: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x211630u;
    SET_GPR_U32(ctx, 31, 0x211638u);
    ctx->pc = 0x211634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211630u;
            // 0x211634: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211638u; }
        if (ctx->pc != 0x211638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211638u; }
        if (ctx->pc != 0x211638u) { return; }
    }
    ctx->pc = 0x211638u;
label_211638:
    // 0x211638: 0x242702b  sltu        $t6, $s2, $v0
    ctx->pc = 0x211638u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21163c: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x21163cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x211640: 0x24e100b  movn        $v0, $s2, $t6
    ctx->pc = 0x211640u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x211644: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x211644u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211648: 0x1f2782b  sltu        $t7, $t7, $s2
    ctx->pc = 0x211648u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x21164c: 0x15e00026  bnez        $t7, . + 4 + (0x26 << 2)
    ctx->pc = 0x21164Cu;
    {
        const bool branch_taken_0x21164c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x211650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21164Cu;
            // 0x211650: 0x2426023  subu        $t4, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21164c) {
            ctx->pc = 0x2116E8u;
            goto label_2116e8;
        }
    }
    ctx->pc = 0x211654u;
    // 0x211654: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211654u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211658: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x211658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21165c: 0x8deeab5c  lw          $t6, -0x54A4($t7)
    ctx->pc = 0x21165cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294945628)));
    // 0x211660: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x211660u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211664: 0x1d27021  addu        $t6, $t6, $s2
    ctx->pc = 0x211664u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x211668: 0x104d000c  beq         $v0, $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x211668u;
    {
        const bool branch_taken_0x211668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        ctx->pc = 0x21166Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211668u;
            // 0x21166c: 0xadeeab5c  sw          $t6, -0x54A4($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211668) {
            ctx->pc = 0x21169Cu;
            goto label_21169c;
        }
    }
    ctx->pc = 0x211670u;
    // 0x211670: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x211670u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_211674:
    // 0x211674: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x211674u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211678: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x211678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21167c: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x21167cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x211680: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x211680u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x211684: 0xa1ae0000  sb          $t6, 0x0($t5)
    ctx->pc = 0x211684u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x211688: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x211688u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x21168c: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x21168cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
    // 0x211690: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x211690u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x211694: 0x144bfff7  bne         $v0, $t3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x211694u;
    {
        const bool branch_taken_0x211694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x211698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211694u;
            // 0x211698: 0xae0d0000  sw          $t5, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211694) {
            ctx->pc = 0x211674u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211674;
        }
    }
    ctx->pc = 0x21169Cu;
label_21169c:
    // 0x21169c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x21169cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x2116a0: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2116a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2116a4: 0x518f000d  beql        $t4, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x2116A4u;
    {
        const bool branch_taken_0x2116a4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 15));
        if (branch_taken_0x2116a4) {
            ctx->pc = 0x2116A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2116A4u;
            // 0x2116a8: 0x8e6f0000  lw          $t7, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2116DCu;
            goto label_2116dc;
        }
    }
    ctx->pc = 0x2116ACu;
    // 0x2116ac: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x2116acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2116b0:
    // 0x2116b0: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x2116b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2116b4: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x2116b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x2116b8: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x2116b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2116bc: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x2116bcu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2116c0: 0xa1c00000  sb          $zero, 0x0($t6)
    ctx->pc = 0x2116c0u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2116c4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2116c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2116c8: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x2116c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
    // 0x2116cc: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2116ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2116d0: 0x158dfff7  bne         $t4, $t5, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2116D0u;
    {
        const bool branch_taken_0x2116d0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 13));
        ctx->pc = 0x2116D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2116D0u;
            // 0x2116d4: 0xae0e0000  sw          $t6, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2116d0) {
            ctx->pc = 0x2116B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2116b0;
        }
    }
    ctx->pc = 0x2116D8u;
    // 0x2116d8: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x2116d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2116dc:
    // 0x2116dc: 0x240702d  daddu       $t6, $s2, $zero
    ctx->pc = 0x2116dcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2116e0: 0x1f27823  subu        $t7, $t7, $s2
    ctx->pc = 0x2116e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x2116e4: 0xae6f0000  sw          $t7, 0x0($s3)
    ctx->pc = 0x2116e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 15));
label_2116e8:
    // 0x2116e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2116e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2116ec: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x2116ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2116f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2116f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2116f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2116f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2116f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2116f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2116fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2116fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211700: 0x3e00008  jr          $ra
    ctx->pc = 0x211700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211700u;
            // 0x211704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211708u;
    ctx->pc = 0x211708u;
}
