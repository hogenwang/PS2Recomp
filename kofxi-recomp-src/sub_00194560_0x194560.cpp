#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00194560
// Address: 0x194560 - 0x194950
void sub_00194560_0x194560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194560_0x194560");
#endif

    switch (ctx->pc) {
        case 0x194590u: goto label_194590;
        case 0x1945dcu: goto label_1945dc;
        case 0x194670u: goto label_194670;
        case 0x1946f4u: goto label_1946f4;
        case 0x194710u: goto label_194710;
        case 0x194748u: goto label_194748;
        case 0x194764u: goto label_194764;
        case 0x1947a0u: goto label_1947a0;
        case 0x1947b0u: goto label_1947b0;
        case 0x194828u: goto label_194828;
        default: break;
    }

    ctx->pc = 0x194560u;

    // 0x194560: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x194560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x194564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194568: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x194568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x19456c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x19456cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x194570: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x194570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x194574: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x194574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x194578: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x194578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19457c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19457cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x194580: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x194580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x194584: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x194584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x194588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19458c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_194590:
    // 0x194590: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x194590u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x194594: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x194594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x194598: 0xa0800026  sb          $zero, 0x26($a0)
    ctx->pc = 0x194598u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x19459c: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x19459cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1945a0: 0xa0800027  sb          $zero, 0x27($a0)
    ctx->pc = 0x1945a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 0));
    // 0x1945a4: 0xa0800028  sb          $zero, 0x28($a0)
    ctx->pc = 0x1945a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x1945a8: 0xa080004e  sb          $zero, 0x4E($a0)
    ctx->pc = 0x1945a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x1945ac: 0xa080004f  sb          $zero, 0x4F($a0)
    ctx->pc = 0x1945acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
    // 0x1945b0: 0xa0800050  sb          $zero, 0x50($a0)
    ctx->pc = 0x1945b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x1945b4: 0xa0800076  sb          $zero, 0x76($a0)
    ctx->pc = 0x1945b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 118), (uint8_t)GPR_U32(ctx, 0));
    // 0x1945b8: 0xa0800077  sb          $zero, 0x77($a0)
    ctx->pc = 0x1945b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 119), (uint8_t)GPR_U32(ctx, 0));
    // 0x1945bc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1945BCu;
    {
        const bool branch_taken_0x1945bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1945C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1945BCu;
            // 0x1945c0: 0x24840078  addiu       $a0, $a0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945bc) {
            ctx->pc = 0x194590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194590;
        }
    }
    ctx->pc = 0x1945C4u;
    // 0x1945c4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1945c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1945c8: 0x9463d198  lhu         $v1, -0x2E68($v1)
    ctx->pc = 0x1945c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294955416)));
    // 0x1945cc: 0x18600070  blez        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x1945CCu;
    {
        const bool branch_taken_0x1945cc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1945D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1945CCu;
            // 0x1945d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1945cc) {
            ctx->pc = 0x194790u;
            goto label_194790;
        }
    }
    ctx->pc = 0x1945D4u;
    // 0x1945d4: 0x3c16009c  lui         $s6, 0x9C
    ctx->pc = 0x1945d4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)156 << 16));
    // 0x1945d8: 0x26d6d1a0  addiu       $s6, $s6, -0x2E60
    ctx->pc = 0x1945d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294955424));
label_1945dc:
    // 0x1945dc: 0x8ed30000  lw          $s3, 0x0($s6)
    ctx->pc = 0x1945dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1945e0: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x1945e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x1945e4: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x1945e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x1945e8: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1945e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1945ec: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1945ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1945f0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1945f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1945f4: 0x8e6a00dc  lw          $t2, 0xDC($s3)
    ctx->pc = 0x1945f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x1945f8: 0x26690314  addiu       $t1, $s3, 0x314
    ctx->pc = 0x1945f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 788));
    // 0x1945fc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1945fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194600: 0xad09d0c8  sw          $t1, -0x2F38($t0)
    ctx->pc = 0x194600u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294955208), GPR_U32(ctx, 9));
    // 0x194604: 0x3148000c  andi        $t0, $t2, 0xC
    ctx->pc = 0x194604u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)12);
    // 0x194608: 0xacf3d0c0  sw          $s3, -0x2F40($a3)
    ctx->pc = 0x194608u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294955200), GPR_U32(ctx, 19));
    // 0x19460c: 0x83882  srl         $a3, $t0, 2
    ctx->pc = 0x19460cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 2));
    // 0x194610: 0x30e900ff  andi        $t1, $a3, 0xFF
    ctx->pc = 0x194610u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x194614: 0x31470030  andi        $a3, $t2, 0x30
    ctx->pc = 0x194614u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)48);
    // 0x194618: 0x74102  srl         $t0, $a3, 4
    ctx->pc = 0x194618u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x19461c: 0x9267008c  lbu         $a3, 0x8C($s3)
    ctx->pc = 0x19461cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x194620: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x194620u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x194624: 0xa0c7d0e8  sb          $a3, -0x2F18($a2)
    ctx->pc = 0x194624u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294955240), (uint8_t)GPR_U32(ctx, 7));
    // 0x194628: 0xc6600090  lwc1        $f0, 0x90($s3)
    ctx->pc = 0x194628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19462c: 0xe4a0d0d8  swc1        $f0, -0x2F28($a1)
    ctx->pc = 0x19462cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294955224), bits); }
    // 0x194630: 0xc6600094  lwc1        $f0, 0x94($s3)
    ctx->pc = 0x194630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194634: 0x18600052  blez        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x194634u;
    {
        const bool branch_taken_0x194634 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x194638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194634u;
            // 0x194638: 0xe480d0d0  swc1        $f0, -0x2F30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294955216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x194634) {
            ctx->pc = 0x194780u;
            goto label_194780;
        }
    }
    ctx->pc = 0x19463Cu;
    // 0x19463c: 0x313700ff  andi        $s7, $t1, 0xFF
    ctx->pc = 0x19463cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x194640: 0x3c12009c  lui         $s2, 0x9C
    ctx->pc = 0x194640u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)156 << 16));
    // 0x194644: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x194644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x194648: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x194648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x19464c: 0x772823  subu        $a1, $v1, $s7
    ctx->pc = 0x19464cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x194650: 0x2652d1a0  addiu       $s2, $s2, -0x2E60
    ctx->pc = 0x194650u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955424));
    // 0x194654: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x194654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x194658: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19465c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x19465cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x194660: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x194660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x194664: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x194664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x194668: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19466c: 0x24710090  addiu       $s1, $v1, 0x90
    ctx->pc = 0x19466cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_194670:
    // 0x194670: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x194670u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x194674: 0x8e8300dc  lw          $v1, 0xDC($s4)
    ctx->pc = 0x194674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x194678: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x194678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x19467c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x19467cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x194680: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x194680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x194684: 0x10770038  beq         $v1, $s7, . + 4 + (0x38 << 2)
    ctx->pc = 0x194684u;
    {
        const bool branch_taken_0x194684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        if (branch_taken_0x194684) {
            ctx->pc = 0x194768u;
            goto label_194768;
        }
    }
    ctx->pc = 0x19468Cu;
    // 0x19468c: 0x26840314  addiu       $a0, $s4, 0x314
    ctx->pc = 0x19468cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 788));
    // 0x194690: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x194690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x194694: 0xac64d148  sw          $a0, -0x2EB8($v1)
    ctx->pc = 0x194694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955336), GPR_U32(ctx, 4));
    // 0x194698: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x194698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x19469c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19469cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1946a0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1946a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1946a4: 0xac74d140  sw          $s4, -0x2EC0($v1)
    ctx->pc = 0x1946a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955328), GPR_U32(ctx, 20));
    // 0x1946a8: 0x9286008c  lbu         $a2, 0x8C($s4)
    ctx->pc = 0x1946a8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x1946ac: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1946acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1946b0: 0xa0a6d168  sb          $a2, -0x2E98($a1)
    ctx->pc = 0x1946b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294955368), (uint8_t)GPR_U32(ctx, 6));
    // 0x1946b4: 0xc6800090  lwc1        $f0, 0x90($s4)
    ctx->pc = 0x1946b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1946b8: 0xe480d158  swc1        $f0, -0x2EA8($a0)
    ctx->pc = 0x1946b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294955352), bits); }
    // 0x1946bc: 0xc6800094  lwc1        $f0, 0x94($s4)
    ctx->pc = 0x1946bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1946c0: 0xe460d150  swc1        $f0, -0x2EB0($v1)
    ctx->pc = 0x1946c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955344), bits); }
    // 0x1946c4: 0x9284039f  lbu         $a0, 0x39F($s4)
    ctx->pc = 0x1946c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 927)));
    // 0x1946c8: 0x9283039e  lbu         $v1, 0x39E($s4)
    ctx->pc = 0x1946c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 926)));
    // 0x1946cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1946ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1946d0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1946d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1946d4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1946D4u;
    {
        const bool branch_taken_0x1946d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1946d4) {
            ctx->pc = 0x194710u;
            goto label_194710;
        }
    }
    ctx->pc = 0x1946DCu;
    // 0x1946dc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1946dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1946e0: 0x2684033c  addiu       $a0, $s4, 0x33C
    ctx->pc = 0x1946e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 828));
    // 0x1946e4: 0x8c42d0c8  lw          $v0, -0x2F38($v0)
    ctx->pc = 0x1946e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955208)));
    // 0x1946e8: 0x84460088  lh          $a2, 0x88($v0)
    ctx->pc = 0x1946e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1946ec: 0xc065ab8  jal         func_196AE0
    ctx->pc = 0x1946ECu;
    SET_GPR_U32(ctx, 31, 0x1946F4u);
    ctx->pc = 0x1946F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1946ECu;
            // 0x1946f0: 0x26650350  addiu       $a1, $s3, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196AE0u;
    if (runtime->hasFunction(0x196AE0u)) {
        auto targetFn = runtime->lookupFunction(0x196AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1946F4u; }
        if (ctx->pc != 0x1946F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196AE0_0x196ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1946F4u; }
        if (ctx->pc != 0x1946F4u) { return; }
    }
    ctx->pc = 0x1946F4u;
label_1946f4:
    // 0x1946f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1946F4u;
    {
        const bool branch_taken_0x1946f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1946f4) {
            ctx->pc = 0x194710u;
            goto label_194710;
        }
    }
    ctx->pc = 0x1946FCu;
    // 0x1946fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1946fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194700: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x194700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194704: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x194704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194708: 0xc06507c  jal         func_1941F0
    ctx->pc = 0x194708u;
    SET_GPR_U32(ctx, 31, 0x194710u);
    ctx->pc = 0x19470Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194708u;
            // 0x19470c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1941F0u;
    if (runtime->hasFunction(0x1941F0u)) {
        auto targetFn = runtime->lookupFunction(0x1941F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194710u; }
        if (ctx->pc != 0x194710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001941F0_0x1941f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194710u; }
        if (ctx->pc != 0x194710u) { return; }
    }
    ctx->pc = 0x194710u;
label_194710:
    // 0x194710: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x194710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x194714: 0x8c63d148  lw          $v1, -0x2EB8($v1)
    ctx->pc = 0x194714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955336)));
    // 0x194718: 0x9064008b  lbu         $a0, 0x8B($v1)
    ctx->pc = 0x194718u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 139)));
    // 0x19471c: 0x9063008a  lbu         $v1, 0x8A($v1)
    ctx->pc = 0x19471cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 138)));
    // 0x194720: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x194720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x194724: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x194724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x194728: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x194728u;
    {
        const bool branch_taken_0x194728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194728) {
            ctx->pc = 0x194768u;
            goto label_194768;
        }
    }
    ctx->pc = 0x194730u;
    // 0x194730: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x194730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x194734: 0x26840346  addiu       $a0, $s4, 0x346
    ctx->pc = 0x194734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 838));
    // 0x194738: 0x8c42d0c8  lw          $v0, -0x2F38($v0)
    ctx->pc = 0x194738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955208)));
    // 0x19473c: 0x84460088  lh          $a2, 0x88($v0)
    ctx->pc = 0x19473cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x194740: 0xc065ab8  jal         func_196AE0
    ctx->pc = 0x194740u;
    SET_GPR_U32(ctx, 31, 0x194748u);
    ctx->pc = 0x194744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194740u;
            // 0x194744: 0x26650350  addiu       $a1, $s3, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196AE0u;
    if (runtime->hasFunction(0x196AE0u)) {
        auto targetFn = runtime->lookupFunction(0x196AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194748u; }
        if (ctx->pc != 0x194748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196AE0_0x196ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194748u; }
        if (ctx->pc != 0x194748u) { return; }
    }
    ctx->pc = 0x194748u;
label_194748:
    // 0x194748: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x194748u;
    {
        const bool branch_taken_0x194748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194748) {
            ctx->pc = 0x194768u;
            goto label_194768;
        }
    }
    ctx->pc = 0x194750u;
    // 0x194750: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194754: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x194754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194758: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x194758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19475c: 0xc06507c  jal         func_1941F0
    ctx->pc = 0x19475Cu;
    SET_GPR_U32(ctx, 31, 0x194764u);
    ctx->pc = 0x194760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19475Cu;
            // 0x194760: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1941F0u;
    if (runtime->hasFunction(0x1941F0u)) {
        auto targetFn = runtime->lookupFunction(0x1941F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194764u; }
        if (ctx->pc != 0x194764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001941F0_0x1941f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194764u; }
        if (ctx->pc != 0x194764u) { return; }
    }
    ctx->pc = 0x194764u;
label_194764:
    // 0x194764: 0x0  nop
    ctx->pc = 0x194764u;
    // NOP
label_194768:
    // 0x194768: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x194768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19476c: 0x9463d198  lhu         $v1, -0x2E68($v1)
    ctx->pc = 0x19476cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294955416)));
    // 0x194770: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x194770u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x194774: 0x2a3202a  slt         $a0, $s5, $v1
    ctx->pc = 0x194774u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x194778: 0x1480ffbd  bnez        $a0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x194778u;
    {
        const bool branch_taken_0x194778 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19477Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194778u;
            // 0x19477c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194778) {
            ctx->pc = 0x194670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_194670;
        }
    }
    ctx->pc = 0x194780u;
label_194780:
    // 0x194780: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x194780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x194784: 0x203202a  slt         $a0, $s0, $v1
    ctx->pc = 0x194784u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x194788: 0x1480ff94  bnez        $a0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x194788u;
    {
        const bool branch_taken_0x194788 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19478Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194788u;
            // 0x19478c: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194788) {
            ctx->pc = 0x1945DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1945dc;
        }
    }
    ctx->pc = 0x194790u;
label_194790:
    // 0x194790: 0x3c14009c  lui         $s4, 0x9C
    ctx->pc = 0x194790u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)156 << 16));
    // 0x194794: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x194794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194798: 0x27b50090  addiu       $s5, $sp, 0x90
    ctx->pc = 0x194798u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x19479c: 0x2694db50  addiu       $s4, $s4, -0x24B0
    ctx->pc = 0x19479cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957904));
label_1947a0:
    // 0x1947a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1947a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1947a4: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x1947a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1947a8: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x1947a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1947ac: 0x0  nop
    ctx->pc = 0x1947acu;
    // NOP
label_1947b0:
    // 0x1947b0: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x1947b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1947b4: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1947B4u;
    {
        const bool branch_taken_0x1947b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1947b4) {
            ctx->pc = 0x1948F0u;
            goto label_1948f0;
        }
    }
    ctx->pc = 0x1947BCu;
    // 0x1947bc: 0x92650026  lbu         $a1, 0x26($s3)
    ctx->pc = 0x1947bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x1947c0: 0x92640027  lbu         $a0, 0x27($s3)
    ctx->pc = 0x1947c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 39)));
    // 0x1947c4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1947c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1947c8: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x1947c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1947cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1947ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1947d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1947d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1947d4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1947d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1947d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1947d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1947dc: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x1947dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1947e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1947e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1947e4: 0x24650090  addiu       $a1, $v1, 0x90
    ctx->pc = 0x1947e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x1947e8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1947e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1947ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1947ECu;
    {
        const bool branch_taken_0x1947ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1947ec) {
            ctx->pc = 0x194830u;
            goto label_194830;
        }
    }
    ctx->pc = 0x1947F4u;
    // 0x1947f4: 0x90a60026  lbu         $a2, 0x26($a1)
    ctx->pc = 0x1947f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x1947f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1947f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1947fc: 0x90a30027  lbu         $v1, 0x27($a1)
    ctx->pc = 0x1947fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 39)));
    // 0x194800: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x194800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x194804: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x194804u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x194808: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x194808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19480c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19480cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194810: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x194810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x194814: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x194814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x194818: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x194818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x19481c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194820: 0xc065138  jal         func_1944E0
    ctx->pc = 0x194820u;
    SET_GPR_U32(ctx, 31, 0x194828u);
    ctx->pc = 0x194824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194820u;
            // 0x194824: 0x24460090  addiu       $a2, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1944E0u;
    if (runtime->hasFunction(0x1944E0u)) {
        auto targetFn = runtime->lookupFunction(0x1944E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194828u; }
        if (ctx->pc != 0x194828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001944E0_0x1944e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194828u; }
        if (ctx->pc != 0x194828u) { return; }
    }
    ctx->pc = 0x194828u;
label_194828:
    // 0x194828: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x194828u;
    {
        const bool branch_taken_0x194828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194828) {
            ctx->pc = 0x194908u;
            goto label_194908;
        }
    }
    ctx->pc = 0x194830u;
label_194830:
    // 0x194830: 0x92690026  lbu         $t1, 0x26($s3)
    ctx->pc = 0x194830u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x194834: 0x92630027  lbu         $v1, 0x27($s3)
    ctx->pc = 0x194834u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 39)));
    // 0x194838: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x194838u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x19483c: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x19483cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x194840: 0x24e7db50  addiu       $a3, $a3, -0x24B0
    ctx->pc = 0x194840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957904));
    // 0x194844: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x194844u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x194848: 0x92660014  lbu         $a2, 0x14($s3)
    ctx->pc = 0x194848u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x19484c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x19484cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x194850: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x194850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x194854: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x194854u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x194858: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x194858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x19485c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x19485cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x194860: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x194860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x194864: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x194864u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x194868: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x194868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x19486c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x19486cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x194870: 0x8c630078  lw          $v1, 0x78($v1)
    ctx->pc = 0x194870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x194874: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x194874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x194878: 0xa086036c  sb          $a2, 0x36C($a0)
    ctx->pc = 0x194878u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 876), (uint8_t)GPR_U32(ctx, 6));
    // 0x19487c: 0x92660015  lbu         $a2, 0x15($s3)
    ctx->pc = 0x19487cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 21)));
    // 0x194880: 0xa086036d  sb          $a2, 0x36D($a0)
    ctx->pc = 0x194880u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 877), (uint8_t)GPR_U32(ctx, 6));
    // 0x194884: 0x92660016  lbu         $a2, 0x16($s3)
    ctx->pc = 0x194884u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x194888: 0xa086036e  sb          $a2, 0x36E($a0)
    ctx->pc = 0x194888u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 878), (uint8_t)GPR_U32(ctx, 6));
    // 0x19488c: 0x92660017  lbu         $a2, 0x17($s3)
    ctx->pc = 0x19488cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 23)));
    // 0x194890: 0xa086036f  sb          $a2, 0x36F($a0)
    ctx->pc = 0x194890u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 879), (uint8_t)GPR_U32(ctx, 6));
    // 0x194894: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x194894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x194898: 0xac860370  sw          $a2, 0x370($a0)
    ctx->pc = 0x194898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 6));
    // 0x19489c: 0xac830374  sw          $v1, 0x374($a0)
    ctx->pc = 0x19489cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 884), GPR_U32(ctx, 3));
    // 0x1948a0: 0x92660020  lbu         $a2, 0x20($s3)
    ctx->pc = 0x1948a0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1948a4: 0xa0860378  sb          $a2, 0x378($a0)
    ctx->pc = 0x1948a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 888), (uint8_t)GPR_U32(ctx, 6));
    // 0x1948a8: 0x92660021  lbu         $a2, 0x21($s3)
    ctx->pc = 0x1948a8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
    // 0x1948ac: 0xa0860379  sb          $a2, 0x379($a0)
    ctx->pc = 0x1948acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 889), (uint8_t)GPR_U32(ctx, 6));
    // 0x1948b0: 0x92660004  lbu         $a2, 0x4($s3)
    ctx->pc = 0x1948b0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1948b4: 0xa066035c  sb          $a2, 0x35C($v1)
    ctx->pc = 0x1948b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 860), (uint8_t)GPR_U32(ctx, 6));
    // 0x1948b8: 0x92660005  lbu         $a2, 0x5($s3)
    ctx->pc = 0x1948b8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x1948bc: 0xa066035d  sb          $a2, 0x35D($v1)
    ctx->pc = 0x1948bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 861), (uint8_t)GPR_U32(ctx, 6));
    // 0x1948c0: 0x92660006  lbu         $a2, 0x6($s3)
    ctx->pc = 0x1948c0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1948c4: 0xa066035e  sb          $a2, 0x35E($v1)
    ctx->pc = 0x1948c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 862), (uint8_t)GPR_U32(ctx, 6));
    // 0x1948c8: 0x92660007  lbu         $a2, 0x7($s3)
    ctx->pc = 0x1948c8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    // 0x1948cc: 0xa066035f  sb          $a2, 0x35F($v1)
    ctx->pc = 0x1948ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 863), (uint8_t)GPR_U32(ctx, 6));
    // 0x1948d0: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x1948d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1948d4: 0xac660360  sw          $a2, 0x360($v1)
    ctx->pc = 0x1948d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 864), GPR_U32(ctx, 6));
    // 0x1948d8: 0xac640364  sw          $a0, 0x364($v1)
    ctx->pc = 0x1948d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 868), GPR_U32(ctx, 4));
    // 0x1948dc: 0x92640010  lbu         $a0, 0x10($s3)
    ctx->pc = 0x1948dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1948e0: 0xa0640368  sb          $a0, 0x368($v1)
    ctx->pc = 0x1948e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 872), (uint8_t)GPR_U32(ctx, 4));
    // 0x1948e4: 0x92640011  lbu         $a0, 0x11($s3)
    ctx->pc = 0x1948e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
    // 0x1948e8: 0xa0640369  sb          $a0, 0x369($v1)
    ctx->pc = 0x1948e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 873), (uint8_t)GPR_U32(ctx, 4));
    // 0x1948ec: 0xa4a0d198  sh          $zero, -0x2E68($a1)
    ctx->pc = 0x1948ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294955416), (uint16_t)GPR_U32(ctx, 0));
label_1948f0:
    // 0x1948f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1948f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1948f4: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x1948f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1948f8: 0x26730028  addiu       $s3, $s3, 0x28
    ctx->pc = 0x1948f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x1948fc: 0x1460ffac  bnez        $v1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x1948FCu;
    {
        const bool branch_taken_0x1948fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1948FCu;
            // 0x194900: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1948fc) {
            ctx->pc = 0x1947B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1947b0;
        }
    }
    ctx->pc = 0x194904u;
    // 0x194904: 0x0  nop
    ctx->pc = 0x194904u;
    // NOP
label_194908:
    // 0x194908: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x194908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19490c: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x19490cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x194910: 0x26b50078  addiu       $s5, $s5, 0x78
    ctx->pc = 0x194910u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 120));
    // 0x194914: 0x1460ffa2  bnez        $v1, . + 4 + (-0x5E << 2)
    ctx->pc = 0x194914u;
    {
        const bool branch_taken_0x194914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x194918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194914u;
            // 0x194918: 0x26940248  addiu       $s4, $s4, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194914) {
            ctx->pc = 0x1947A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1947a0;
        }
    }
    ctx->pc = 0x19491Cu;
    // 0x19491c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x19491cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x194920: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x194920u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x194924: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x194924u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x194928: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x194928u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19492c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19492cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194930: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x194930u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194934: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x194934u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194938: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19493c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19493cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194940: 0x3e00008  jr          $ra
    ctx->pc = 0x194940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194940u;
            // 0x194944: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194948u;
    // 0x194948: 0x0  nop
    ctx->pc = 0x194948u;
    // NOP
    // 0x19494c: 0x0  nop
    ctx->pc = 0x19494cu;
    // NOP
    ctx->pc = 0x194950u;
}
