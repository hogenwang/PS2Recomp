#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D4640
// Address: 0x2d4640 - 0x2d4738
void sub_002D4640_0x2d4640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4640_0x2d4640");
#endif

    switch (ctx->pc) {
        case 0x2d468cu: goto label_2d468c;
        case 0x2d46c8u: goto label_2d46c8;
        default: break;
    }

    ctx->pc = 0x2d4640u;

    // 0x2d4640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d4640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d4644: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d4644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d464c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d464cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4650: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d4650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d4654: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d4654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4658: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d4658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d465c: 0x1a00002f  blez        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2D465Cu;
    {
        const bool branch_taken_0x2d465c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2D4660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D465Cu;
            // 0x2d4660: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d465c) {
            ctx->pc = 0x2D471Cu;
            goto label_2d471c;
        }
    }
    ctx->pc = 0x2D4664u;
    // 0x2d4664: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x2d4664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2d4668: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2D4668u;
    {
        const bool branch_taken_0x2d4668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4668) {
            ctx->pc = 0x2D466Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4668u;
            // 0x2d466c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D46A8u;
            goto label_2d46a8;
        }
    }
    ctx->pc = 0x2D4670u;
    // 0x2d4670: 0x2604003f  addiu       $a0, $s0, 0x3F
    ctx->pc = 0x2d4670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x2d4674: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x2d4674u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2d4678: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d4678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d467c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2d467cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2d4680: 0x28983  sra         $s1, $v0, 6
    ctx->pc = 0x2d4680u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2d4684: 0xc0b517a  jal         func_2D45E8
    ctx->pc = 0x2D4684u;
    SET_GPR_U32(ctx, 31, 0x2D468Cu);
    ctx->pc = 0x2D4688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4684u;
            // 0x2d4688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D45E8u;
    if (runtime->hasFunction(0x2D45E8u)) {
        auto targetFn = runtime->lookupFunction(0x2D45E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D468Cu; }
        if (ctx->pc != 0x2D468Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D45E8_0x2d45e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D468Cu; }
        if (ctx->pc != 0x2D468Cu) { return; }
    }
    ctx->pc = 0x2D468Cu;
label_2d468c:
    // 0x2d468c: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D468Cu;
    {
        const bool branch_taken_0x2d468c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d468c) {
            ctx->pc = 0x2D4690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D468Cu;
            // 0x2d4690: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D4720u;
            goto label_2d4720;
        }
    }
    ctx->pc = 0x2D4694u;
    // 0x2d4694: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x2d4694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x2d4698: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x2d4698u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2d469c: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D469Cu;
    {
        const bool branch_taken_0x2d469c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d469c) {
            ctx->pc = 0x2D46A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D469Cu;
            // 0x2d46a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D4720u;
            goto label_2d4720;
        }
    }
    ctx->pc = 0x2D46A4u;
    // 0x2d46a4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2d46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2d46a8:
    // 0x2d46a8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2d46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d46ac: 0x503823  subu        $a3, $v0, $s0
    ctx->pc = 0x2d46acu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d46b0: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x2d46b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d46b4: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2D46B4u;
    {
        const bool branch_taken_0x2d46b4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2D46B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D46B4u;
            // 0x2d46b8: 0x8e480008  lw          $t0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d46b4) {
            ctx->pc = 0x2D46ECu;
            goto label_2d46ec;
        }
    }
    ctx->pc = 0x2D46BCu;
    // 0x2d46bc: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2d46bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d46c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2d46c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d46c4: 0x0  nop
    ctx->pc = 0x2d46c4u;
    // NOP
label_2d46c8:
    // 0x2d46c8: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x2d46c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d46cc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2d46ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2d46d0: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x2d46d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d46d4: 0x2031816  dsrlv       $v1, $v1, $s0
    ctx->pc = 0x2d46d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 16) & 0x3F));
    // 0x2d46d8: 0xe21014  dsllv       $v0, $v0, $a3
    ctx->pc = 0x2d46d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 7) & 0x3F));
    // 0x2d46dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d46dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d46e0: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2d46e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2d46e4: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D46E4u;
    {
        const bool branch_taken_0x2d46e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D46E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D46E4u;
            // 0x2d46e8: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d46e4) {
            ctx->pc = 0x2D46C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d46c8;
        }
    }
    ctx->pc = 0x2D46ECu;
label_2d46ec:
    // 0x2d46ec: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x2d46ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2d46f0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2d46f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2d46f4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2d46f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d46f8: 0x2021016  dsrlv       $v0, $v0, $s0
    ctx->pc = 0x2d46f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 16) & 0x3F));
    // 0x2d46fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D46FCu;
    {
        const bool branch_taken_0x2d46fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D46FCu;
            // 0x2d4700: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d46fc) {
            ctx->pc = 0x2D4718u;
            goto label_2d4718;
        }
    }
    ctx->pc = 0x2D4704u;
    // 0x2d4704: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4704u;
    {
        const bool branch_taken_0x2d4704 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4704u;
            // 0x2d4708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4704) {
            ctx->pc = 0x2D471Cu;
            goto label_2d471c;
        }
    }
    ctx->pc = 0x2D470Cu;
    // 0x2d470c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2d470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d4710: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d4710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d4714: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2d4714u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2d4718:
    // 0x2d4718: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d4718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d471c:
    // 0x2d471c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d471cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d4720:
    // 0x2d4720: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d4720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4724: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d4724u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4728: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d4728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d472c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D472Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D472Cu;
            // 0x2d4730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D4734u;
    // 0x2d4734: 0x0  nop
    ctx->pc = 0x2d4734u;
    // NOP
    ctx->pc = 0x2d4738u;
}
