#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002170E8
// Address: 0x2170e8 - 0x217318
void sub_002170E8_0x2170e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002170E8_0x2170e8");
#endif

    switch (ctx->pc) {
        case 0x217104u: goto label_217104;
        case 0x217184u: goto label_217184;
        case 0x217188u: goto label_217188;
        case 0x217198u: goto label_217198;
        case 0x2171d4u: goto label_2171d4;
        case 0x2171e4u: goto label_2171e4;
        case 0x217224u: goto label_217224;
        case 0x2172b4u: goto label_2172b4;
        case 0x2172b8u: goto label_2172b8;
        case 0x2172c4u: goto label_2172c4;
        case 0x2172e4u: goto label_2172e4;
        default: break;
    }

    ctx->pc = 0x2170e8u;

label_2170e8:
    // 0x2170e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2170e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2170ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2170ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2170f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2170f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2170f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2170f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2170f8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2170f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2170fc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2170FCu;
    SET_GPR_U32(ctx, 31, 0x217104u);
    ctx->pc = 0x217100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170FCu;
    // 0x217100: 0x24840e48  addiu       $a0, $a0, 0xE48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2170FCu, 0x217104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217104u;
label_217104:
    // 0x217104: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x217104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217108: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x217108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21710c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21710cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217110: 0x24840928  addiu       $a0, $a0, 0x928
    ctx->pc = 0x217110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2344));
    // 0x217114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217118: 0x8043e52  j           func_10F948
    ctx->pc = 0x217118u;
    ctx->pc = 0x21711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217118u;
    // 0x21711c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x217120u;
    // 0x217120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x217120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x217124: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x217124u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x217128: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21712c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21712cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217130: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x217130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x217134: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x217134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217138: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x217138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21713c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21713cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217140: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x217140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x217144: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x217144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217148: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x217148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x21714c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x21714cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217150: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x217150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x217154: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x217154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217158: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x217158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21715c: 0x1e0b02d  daddu       $s6, $t7, $zero
    ctx->pc = 0x21715cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217160: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x217160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x217164: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x217164u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
    // 0x217168: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x217168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x21716c: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x21716cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217170: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x217170u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x217174: 0x8cb70000  lw          $s7, 0x0($a1)
    ctx->pc = 0x217174u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217178: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x217178u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21717c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21717Cu;
    SET_GPR_U32(ctx, 31, 0x217184u);
    ctx->pc = 0x217180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21717Cu;
    // 0x217180: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21717Cu, 0x217184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217184u;
label_217184:
    // 0x217184: 0xaea0ab60  sw          $zero, -0x54A0($s5)
    ctx->pc = 0x217184u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294945632), GPR_U32(ctx, 0));
label_217188:
    // 0x217188: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x217188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21718c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21718cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217190: 0xc08485e  jal         func_212178
    ctx->pc = 0x217190u;
    SET_GPR_U32(ctx, 31, 0x217198u);
    ctx->pc = 0x217194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217190u;
    // 0x217194: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212178u, 0x217190u, 0x217198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217198u;
label_217198:
    // 0x217198: 0x4400023  bltz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x217198u;
    {
        const bool branch_taken_0x217198 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217198u;
        // 0x21719c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217198) {
            ctx->pc = 0x217228u;
            goto label_217228;
        }
    }
    ctx->pc = 0x2171A0u;
    // 0x2171a0: 0x8eafab60  lw          $t7, -0x54A0($s5)
    ctx->pc = 0x2171a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945632)));
    // 0x2171a4: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x2171A4u;
    {
        const bool branch_taken_0x2171a4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2171A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171A4u;
        // 0x2171a8: 0x8ecdab58  lw          $t5, -0x54A8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171a4) {
            ctx->pc = 0x217204u;
            goto label_217204;
        }
    }
    ctx->pc = 0x2171ACu;
    // 0x2171ac: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x2171acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x2171b0: 0x11e0002a  beqz        $t7, . + 4 + (0x2A << 2)
    ctx->pc = 0x2171B0u;
    {
        const bool branch_taken_0x2171b0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2171B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171B0u;
        // 0x2171b4: 0x25af0003  addiu       $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171b0) {
            ctx->pc = 0x21725Cu;
            goto label_21725c;
        }
    }
    ctx->pc = 0x2171B8u;
    // 0x2171b8: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x2171b8u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2171bc: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x2171bcu;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x2171c0: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x2171c0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x2171c4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x2171c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x2171c8: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x2171c8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x2171cc: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x2171ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2171d0: 0x1af7023  subu        $t6, $t5, $t7
    ctx->pc = 0x2171d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_2171d4:
    // 0x2171d4: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x2171d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x2171d8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2171d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2171dc: 0x11cf0008  beq         $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x2171DCu;
    {
        const bool branch_taken_0x2171dc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2171E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171DCu;
        // 0x2171e0: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171dc) {
            ctx->pc = 0x217200u;
            goto label_217200;
        }
    }
    ctx->pc = 0x2171E4u;
label_2171e4:
    // 0x2171e4: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x2171e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2171e8: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x2171e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x2171ec: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x2171ecu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2171f0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2171f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2171f4: 0x0  nop
    ctx->pc = 0x2171f4u;
    // NOP
    // 0x2171f8: 0x15cdfffa  bne         $t6, $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2171F8u;
    {
        const bool branch_taken_0x2171f8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        ctx->pc = 0x2171FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171F8u;
        // 0x2171fc: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171f8) {
            ctx->pc = 0x2171E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2171e4;
        }
    }
    ctx->pc = 0x217200u;
label_217200:
    // 0x217200: 0xafc0ab58  sw          $zero, -0x54A8($fp)
    ctx->pc = 0x217200u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294945624), GPR_U32(ctx, 0));
label_217204:
    // 0x217204: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x217204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x217208: 0x2a4f0004  slti        $t7, $s2, 0x4
    ctx->pc = 0x217208u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21720c: 0x55e0ffde  bnel        $t7, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x21720Cu;
    {
        const bool branch_taken_0x21720c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x21720c) {
            ctx->pc = 0x217210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21720Cu;
            // 0x217210: 0xaea0ab60  sw          $zero, -0x54A0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 4294945632), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217188;
        }
    }
    ctx->pc = 0x217214u;
    // 0x217214: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x217214u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x217218: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x217218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21721c: 0xc085c3a  jal         func_2170E8
    ctx->pc = 0x21721Cu;
    SET_GPR_U32(ctx, 31, 0x217224u);
    ctx->pc = 0x217220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21721Cu;
    // 0x217220: 0x26f9823  subu        $s3, $s3, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2170E8u;
    goto label_2170e8;
    ctx->pc = 0x217224u;
label_217224:
    // 0x217224: 0x260782d  daddu       $t7, $s3, $zero
    ctx->pc = 0x217224u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_217228:
    // 0x217228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21722c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x21722cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217230: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217234: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217238: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x217238u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21723c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21723cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217240: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x217240u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x217244: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x217244u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217248: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x217248u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21724c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x21724cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217250: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x217250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x217254: 0x3e00008  jr          $ra
    ctx->pc = 0x217254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217254u;
        // 0x217258: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21725Cu;
label_21725c:
    // 0x21725c: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x21725Cu;
    {
        const bool branch_taken_0x21725c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21725Cu;
        // 0x217260: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21725c) {
            ctx->pc = 0x2171D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2171d4;
        }
    }
    ctx->pc = 0x217264u;
    // 0x217264: 0x0  nop
    ctx->pc = 0x217264u;
    // NOP
    // 0x217268: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x217268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21726c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21726cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x217270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217274: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217278: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x217278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21727c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21727cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217280: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x217280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x217284: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x217284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217288: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x217288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21728c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21728cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217290: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x217290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x217294: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x217294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217298: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x217298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21729c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21729cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2172a0: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x2172a0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x2172a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2172a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172a8: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x2172a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2172ac: 0xc084612  jal         func_211848
    ctx->pc = 0x2172ACu;
    SET_GPR_U32(ctx, 31, 0x2172B4u);
    ctx->pc = 0x2172B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172ACu;
    // 0x2172b0: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x2172ACu, 0x2172B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172B4u;
label_2172b4:
    // 0x2172b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2172b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2172b8:
    // 0x2172b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2172b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172bc: 0xc08489e  jal         func_212278
    ctx->pc = 0x2172BCu;
    SET_GPR_U32(ctx, 31, 0x2172C4u);
    ctx->pc = 0x2172C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172BCu;
    // 0x2172c0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212278u, 0x2172BCu, 0x2172C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172C4u;
label_2172c4:
    // 0x2172c4: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2172C4u;
    {
        const bool branch_taken_0x2172c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2172C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172C4u;
        // 0x2172c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172c4) {
            ctx->pc = 0x2172ECu;
            goto label_2172ec;
        }
    }
    ctx->pc = 0x2172CCu;
    // 0x2172cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2172ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2172d0: 0x2a0f0004  slti        $t7, $s0, 0x4
    ctx->pc = 0x2172d0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2172d4: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2172D4u;
    {
        const bool branch_taken_0x2172d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2172D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172D4u;
        // 0x2172d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172d4) {
            ctx->pc = 0x2172B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2172b8;
        }
    }
    ctx->pc = 0x2172DCu;
    // 0x2172dc: 0xc085c3a  jal         func_2170E8
    ctx->pc = 0x2172DCu;
    SET_GPR_U32(ctx, 31, 0x2172E4u);
    ctx->pc = 0x2172E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172DCu;
    // 0x2172e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2170E8u;
    goto label_2170e8;
    ctx->pc = 0x2172E4u;
label_2172e4:
    // 0x2172e4: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x2172e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2172e8: 0x1f42823  subu        $a1, $t7, $s4
    ctx->pc = 0x2172e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_2172ec:
    // 0x2172ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2172ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2172f0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2172f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2172f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2172f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2172f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2172fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2172fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217300: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x217300u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217304: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x217304u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x217308: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x217308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21730c: 0x3e00008  jr          $ra
    ctx->pc = 0x21730Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21730Cu;
        // 0x217310: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21730Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217314u;
    // 0x217314: 0x0  nop
    ctx->pc = 0x217314u;
    // NOP
}
