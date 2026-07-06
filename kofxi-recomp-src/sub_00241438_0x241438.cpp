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

// Function: sub_00241438
// Address: 0x241438 - 0x2416b0
void sub_00241438_0x241438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241438_0x241438");
#endif

    switch (ctx->pc) {
        case 0x241488u: goto label_241488;
        case 0x2414e0u: goto label_2414e0;
        case 0x241538u: goto label_241538;
        case 0x241578u: goto label_241578;
        case 0x2415b4u: goto label_2415b4;
        case 0x2415c8u: goto label_2415c8;
        case 0x2415d8u: goto label_2415d8;
        case 0x241618u: goto label_241618;
        case 0x241638u: goto label_241638;
        case 0x241660u: goto label_241660;
        default: break;
    }

    ctx->pc = 0x241438u;

    // 0x241438: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x241438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x24143c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x24143cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x241440: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x241440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x241444: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x241444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x241448: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x241448u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24144c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x24144cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x241450: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x241450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x241454: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x241454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x241458: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x241458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24145c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24145cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241460: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x241460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x241464: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x241464u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x241468: 0x92870000  lbu         $a3, 0x0($s4)
    ctx->pc = 0x241468u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24146c: 0x8e53000c  lw          $s3, 0xC($s2)
    ctx->pc = 0x24146cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x241470: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x241470u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241474: 0x86420008  lh          $v0, 0x8($s2)
    ctx->pc = 0x241474u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x241478: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x241478u;
    {
        const bool branch_taken_0x241478 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241478u;
        // 0x24147c: 0x260182d  daddu       $v1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241478) {
            ctx->pc = 0x2414B8u;
            goto label_2414b8;
        }
    }
    ctx->pc = 0x241480u;
    // 0x241480: 0x2932821  addu        $a1, $s4, $s3
    ctx->pc = 0x241480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x241484: 0x0  nop
    ctx->pc = 0x241484u;
    // NOP
label_241488:
    // 0x241488: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x241488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x24148c: 0x9243000a  lbu         $v1, 0xA($s2)
    ctx->pc = 0x24148cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x241490: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x241490u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241494: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x241494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x241498: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x241498u;
    {
        const bool branch_taken_0x241498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x241498) {
            ctx->pc = 0x24149Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241498u;
            // 0x24149c: 0x8e520010  lw          $s2, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2414A4u;
            goto label_2414a4;
        }
    }
    ctx->pc = 0x2414A0u;
    // 0x2414a0: 0x8e520014  lw          $s2, 0x14($s2)
    ctx->pc = 0x2414a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2414a4:
    // 0x2414a4: 0x86420008  lh          $v0, 0x8($s2)
    ctx->pc = 0x2414a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2414a8: 0x441fff7  bgez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2414A8u;
    {
        const bool branch_taken_0x2414a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2414ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414A8u;
        // 0x2414ac: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2414a8) {
            ctx->pc = 0x241488u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241488;
        }
    }
    ctx->pc = 0x2414B0u;
    // 0x2414b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2414B0u;
    {
        const bool branch_taken_0x2414b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2414B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414B0u;
        // 0x2414b4: 0x8e490010  lw          $t1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2414b0) {
            ctx->pc = 0x2414C0u;
            goto label_2414c0;
        }
    }
    ctx->pc = 0x2414B8u;
label_2414b8:
    // 0x2414b8: 0x2932821  addu        $a1, $s4, $s3
    ctx->pc = 0x2414b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x2414bc: 0x8e490010  lw          $t1, 0x10($s2)
    ctx->pc = 0x2414bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2414c0:
    // 0x2414c0: 0x55200001  bnel        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2414C0u;
    {
        const bool branch_taken_0x2414c0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2414c0) {
            ctx->pc = 0x2414C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2414C0u;
            // 0x2414c4: 0x91270000  lbu         $a3, 0x0($t1) (Delay Slot)
            SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2414C8u;
            goto label_2414c8;
        }
    }
    ctx->pc = 0x2414C8u;
label_2414c8:
    // 0x2414c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2414c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2414cc: 0x2874021  addu        $t0, $s4, $a3
    ctx->pc = 0x2414ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x2414d0: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x2414d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2414d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2414D4u;
    {
        const bool branch_taken_0x2414d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2414D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414D4u;
        // 0x2414d8: 0x732021  addu        $a0, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2414d4) {
            ctx->pc = 0x241504u;
            goto label_241504;
        }
    }
    ctx->pc = 0x2414DCu;
    // 0x2414dc: 0x0  nop
    ctx->pc = 0x2414dcu;
    // NOP
label_2414e0:
    // 0x2414e0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2414e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2414e4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2414e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2414e8: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x2414e8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2414ec: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2414ECu;
    {
        const bool branch_taken_0x2414ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2414F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414ECu;
        // 0x2414f0: 0x90850000  lbu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2414ec) {
            ctx->pc = 0x241520u;
            goto label_241520;
        }
    }
    ctx->pc = 0x2414F4u;
    // 0x2414f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2414f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2414f8: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x2414f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2414fc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2414FCu;
    {
        const bool branch_taken_0x2414fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2414FCu;
        // 0x241500: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2414fc) {
            ctx->pc = 0x2414E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2414e0;
        }
    }
    ctx->pc = 0x241504u;
label_241504:
    // 0x241504: 0x9242000b  lbu         $v0, 0xB($s2)
    ctx->pc = 0x241504u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x241508: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x241508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24150c: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x24150Cu;
    {
        const bool branch_taken_0x24150c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24150Cu;
        // 0x241510: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24150c) {
            ctx->pc = 0x241680u;
            goto label_241680;
        }
    }
    ctx->pc = 0x241514u;
    // 0x241514: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x241514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x241518: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x241518u;
    {
        const bool branch_taken_0x241518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241518u;
        // 0x24151c: 0x42900b  movn        $s2, $v0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241518) {
            ctx->pc = 0x2415A0u;
            goto label_2415a0;
        }
    }
    ctx->pc = 0x241520u;
label_241520:
    // 0x241520: 0xe51026  xor         $v0, $a3, $a1
    ctx->pc = 0x241520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 5));
    // 0x241524: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x241524u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x241528: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x241528u;
    {
        const bool branch_taken_0x241528 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241528u;
        // 0x24152c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241528) {
            ctx->pc = 0x24155Cu;
            goto label_24155c;
        }
    }
    ctx->pc = 0x241530u;
    // 0x241530: 0xd4a823  subu        $s5, $a2, $s4
    ctx->pc = 0x241530u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x241534: 0x0  nop
    ctx->pc = 0x241534u;
    // NOP
label_241538:
    // 0x241538: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x241538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x24153c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x24153cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x241540: 0x0  nop
    ctx->pc = 0x241540u;
    // NOP
    // 0x241544: 0x0  nop
    ctx->pc = 0x241544u;
    // NOP
    // 0x241548: 0x0  nop
    ctx->pc = 0x241548u;
    // NOP
    // 0x24154c: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24154Cu;
    {
        const bool branch_taken_0x24154c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x24154c) {
            ctx->pc = 0x241538u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241538;
        }
    }
    ctx->pc = 0x241554u;
    // 0x241554: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x241554u;
    {
        const bool branch_taken_0x241554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241554u;
        // 0x241558: 0x1510c0  sll         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241554) {
            ctx->pc = 0x241564u;
            goto label_241564;
        }
    }
    ctx->pc = 0x24155Cu;
label_24155c:
    // 0x24155c: 0xd4a823  subu        $s5, $a2, $s4
    ctx->pc = 0x24155cu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x241560: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x241560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_241564:
    // 0x241564: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x241564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241568: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x241568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24156c: 0x15200002  bnez        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24156Cu;
    {
        const bool branch_taken_0x24156c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x241570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24156Cu;
        // 0x241570: 0x3b027  nor         $s6, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24156c) {
            ctx->pc = 0x241578u;
            goto label_241578;
        }
    }
    ctx->pc = 0x241574u;
    // 0x241574: 0x8e520014  lw          $s2, 0x14($s2)
    ctx->pc = 0x241574u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_241578:
    // 0x241578: 0x52400012  beql        $s2, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x241578u;
    {
        const bool branch_taken_0x241578 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x241578) {
            ctx->pc = 0x24157Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241578u;
            // 0x24157c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2415C4u;
            goto label_2415c4;
        }
    }
    ctx->pc = 0x241580u;
    // 0x241580: 0x9242000b  lbu         $v0, 0xB($s2)
    ctx->pc = 0x241580u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
    // 0x241584: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x241584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x241588: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x241588u;
    {
        const bool branch_taken_0x241588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241588u;
        // 0x24158c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241588) {
            ctx->pc = 0x2415A8u;
            goto label_2415a8;
        }
    }
    ctx->pc = 0x241590u;
    // 0x241590: 0x86420008  lh          $v0, 0x8($s2)
    ctx->pc = 0x241590u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x241594: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x241594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x241598: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x241598u;
    {
        const bool branch_taken_0x241598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241598) {
            ctx->pc = 0x24159Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241598u;
            // 0x24159c: 0x8e520014  lw          $s2, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241578;
        }
    }
    ctx->pc = 0x2415A0u;
label_2415a0:
    // 0x2415a0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2415A0u;
    {
        const bool branch_taken_0x2415a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2415A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415A0u;
        // 0x2415a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415a0) {
            ctx->pc = 0x241680u;
            goto label_241680;
        }
    }
    ctx->pc = 0x2415A8u;
label_2415a8:
    // 0x2415a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2415a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2415ac: 0xc0904ea  jal         func_2413A8
    ctx->pc = 0x2415ACu;
    SET_GPR_U32(ctx, 31, 0x2415B4u);
    ctx->pc = 0x2415B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2415ACu;
    // 0x2415b0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2413A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2413A8u, 0x2415ACu, 0x2415B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2415B4u;
label_2415b4:
    // 0x2415b4: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2415B4u;
    {
        const bool branch_taken_0x2415b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2415B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415B4u;
        // 0x2415b8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415b4) {
            ctx->pc = 0x241680u;
            goto label_241680;
        }
    }
    ctx->pc = 0x2415BCu;
    // 0x2415bc: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x2415BCu;
    {
        const bool branch_taken_0x2415bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2415C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415BCu;
        // 0x2415c0: 0x8e520014  lw          $s2, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415bc) {
            ctx->pc = 0x241578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241578;
        }
    }
    ctx->pc = 0x2415C4u;
label_2415c4:
    // 0x2415c4: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x2415c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2415c8:
    // 0x2415c8: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x2415c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2415cc: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2415CCu;
    {
        const bool branch_taken_0x2415cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2415cc) {
            ctx->pc = 0x241674u;
            goto label_241674;
        }
    }
    ctx->pc = 0x2415D4u;
    // 0x2415d4: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2415d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_2415d8:
    // 0x2415d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2415d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2415dc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2415DCu;
    {
        const bool branch_taken_0x2415dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2415dc) {
            ctx->pc = 0x2415E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2415DCu;
            // 0x2415e0: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2415FCu;
            goto label_2415fc;
        }
    }
    ctx->pc = 0x2415E4u;
    // 0x2415e4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x2415e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2415e8: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x2415e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2415ec: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2415ECu;
    {
        const bool branch_taken_0x2415ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2415ec) {
            ctx->pc = 0x2415F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2415ECu;
            // 0x2415f0: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24166Cu;
            goto label_24166c;
        }
    }
    ctx->pc = 0x2415F4u;
    // 0x2415f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2415F4u;
    {
        const bool branch_taken_0x2415f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2415F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2415F4u;
        // 0x2415f8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415f4) {
            ctx->pc = 0x241680u;
            goto label_241680;
        }
    }
    ctx->pc = 0x2415FCu;
label_2415fc:
    // 0x2415fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2415fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241600: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x241600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x241604: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x241604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241608: 0x75102b  sltu        $v0, $v1, $s5
    ctx->pc = 0x241608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x24160c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x24160cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241610: 0xc09047e  jal         func_2411F8
    ctx->pc = 0x241610u;
    SET_GPR_U32(ctx, 31, 0x241618u);
    ctx->pc = 0x241614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241610u;
    // 0x241614: 0x2a2980a  movz        $s3, $s5, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2411F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2411F8u, 0x241610u, 0x241618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241618u;
label_241618:
    // 0x241618: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x241618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24161c: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x24161Cu;
    {
        const bool branch_taken_0x24161c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24161c) {
            ctx->pc = 0x241620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24161Cu;
            // 0x241620: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24166Cu;
            goto label_24166c;
        }
    }
    ctx->pc = 0x241624u;
    // 0x241624: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x241624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x241628: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x241628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24162c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24162Cu;
    {
        const bool branch_taken_0x24162c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24162c) {
            ctx->pc = 0x24164Cu;
            goto label_24164c;
        }
    }
    ctx->pc = 0x241634u;
    // 0x241634: 0x8e100014  lw          $s0, 0x14($s0)
    ctx->pc = 0x241634u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_241638:
    // 0x241638: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x241638u;
    {
        const bool branch_taken_0x241638 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x241638) {
            ctx->pc = 0x24163Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241638u;
            // 0x24163c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24166Cu;
            goto label_24166c;
        }
    }
    ctx->pc = 0x241640u;
    // 0x241640: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x241640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x241644: 0x5443fffc  bnel        $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x241644u;
    {
        const bool branch_taken_0x241644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x241644) {
            ctx->pc = 0x241648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241644u;
            // 0x241648: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x241638u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241638;
        }
    }
    ctx->pc = 0x24164Cu;
label_24164c:
    // 0x24164c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24164Cu;
    {
        const bool branch_taken_0x24164c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x241650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24164Cu;
        // 0x241650: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24164c) {
            ctx->pc = 0x241668u;
            goto label_241668;
        }
    }
    ctx->pc = 0x241654u;
    // 0x241654: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x241654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241658: 0xc0904ea  jal         func_2413A8
    ctx->pc = 0x241658u;
    SET_GPR_U32(ctx, 31, 0x241660u);
    ctx->pc = 0x24165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x241658u;
    // 0x24165c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2413A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2413A8u, 0x241658u, 0x241660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241660u;
label_241660:
    // 0x241660: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x241660u;
    {
        const bool branch_taken_0x241660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x241660u;
        // 0x241664: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241660) {
            ctx->pc = 0x241680u;
            goto label_241680;
        }
    }
    ctx->pc = 0x241668u;
label_241668:
    // 0x241668: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x241668u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24166c:
    // 0x24166c: 0x5620ffda  bnel        $s1, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x24166Cu;
    {
        const bool branch_taken_0x24166c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x24166c) {
            ctx->pc = 0x241670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24166Cu;
            // 0x241670: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2415D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2415d8;
        }
    }
    ctx->pc = 0x241674u;
label_241674:
    // 0x241674: 0x5657ffd4  bnel        $s2, $s7, . + 4 + (-0x2C << 2)
    ctx->pc = 0x241674u;
    {
        const bool branch_taken_0x241674 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        if (branch_taken_0x241674) {
            ctx->pc = 0x241678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x241674u;
            // 0x241678: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2415C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2415c8;
        }
    }
    ctx->pc = 0x24167Cu;
    // 0x24167c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24167cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241680:
    // 0x241680: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x241680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x241684: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x241684u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x241688: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x241688u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24168c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24168cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x241690: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x241690u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x241694: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x241694u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241698: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x241698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24169c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24169cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2416a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2416a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2416a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2416A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2416A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2416A4u;
        // 0x2416a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2416A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2416ACu;
    // 0x2416ac: 0x0  nop
    ctx->pc = 0x2416acu;
    // NOP
    if (ctx->pc == 0x2416acu) { ctx->pc = 0x2416b0u; }
}
