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

// Function: sub_00341190
// Address: 0x341190 - 0x3414a0
void sub_00341190_0x341190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341190_0x341190");
#endif

    switch (ctx->pc) {
        case 0x3411b0u: goto label_3411b0;
        default: break;
    }

    ctx->pc = 0x341190u;

    // 0x341190: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x341190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x341194: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x341198: 0x8c65ea40  lw          $a1, -0x15C0($v1)
    ctx->pc = 0x341198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
    // 0x34119c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34119cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3411a0: 0xac60e8f8  sw          $zero, -0x1708($v1)
    ctx->pc = 0x3411a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961400), GPR_U32(ctx, 0));
    // 0x3411a4: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x3411a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3411a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3411A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3411ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3411A8u;
        // 0x3411ac: 0xac83ea30  sw          $v1, -0x15D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294961712), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3411A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3411B0u;
label_3411b0:
    // 0x3411b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3411b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3411b4: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x3411b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x3411b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3411b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3411bc: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x3411bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3411c0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3411c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3411c4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3411c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3411c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3411c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3411cc: 0xe84025  or          $t0, $a3, $t0
    ctx->pc = 0x3411ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3411d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3411d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3411d4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3411d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3411d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3411d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3411dc: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x3411dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3411e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3411e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3411e4: 0x2409003f  addiu       $t1, $zero, 0x3F
    ctx->pc = 0x3411e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3411e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3411e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3411ec: 0x240c0006  addiu       $t4, $zero, 0x6
    ctx->pc = 0x3411ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3411f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3411f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3411f4: 0x240b0014  addiu       $t3, $zero, 0x14
    ctx->pc = 0x3411f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3411f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3411f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3411fc: 0x5b100  sll         $s6, $a1, 4
    ctx->pc = 0x3411fcu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x341200: 0x8c63ea38  lw          $v1, -0x15C8($v1)
    ctx->pc = 0x341200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961720)));
    // 0x341204: 0x3c1401de  lui         $s4, 0x1DE
    ctx->pc = 0x341204u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)478 << 16));
    // 0x341208: 0x3c1301de  lui         $s3, 0x1DE
    ctx->pc = 0x341208u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)478 << 16));
    // 0x34120c: 0x3c1201de  lui         $s2, 0x1DE
    ctx->pc = 0x34120cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)478 << 16));
    // 0x341210: 0x3c1101de  lui         $s1, 0x1DE
    ctx->pc = 0x341210u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)478 << 16));
    // 0x341214: 0x3c1001de  lui         $s0, 0x1DE
    ctx->pc = 0x341214u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)478 << 16));
    // 0x341218: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x341218u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x34121c: 0x3c1901de  lui         $t9, 0x1DE
    ctx->pc = 0x34121cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)478 << 16));
    // 0x341220: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x341220u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x341224: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x341224u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
    // 0x341228: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x341228u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x34122c: 0x3c0701de  lui         $a3, 0x1DE
    ctx->pc = 0x34122cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)478 << 16));
    // 0x341230: 0xfc690018  sd          $t1, 0x18($v1)
    ctx->pc = 0x341230u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 9));
    // 0x341234: 0x3508000d  ori         $t0, $t0, 0xD
    ctx->pc = 0x341234u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)13);
    // 0x341238: 0x8ceae900  lw          $t2, -0x1700($a3)
    ctx->pc = 0x341238u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294961408)));
    // 0x34123c: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x34123cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x341240: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x341240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x341244: 0x3c1801de  lui         $t8, 0x1DE
    ctx->pc = 0x341244u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)478 << 16));
    // 0x341248: 0x3c0f01de  lui         $t7, 0x1DE
    ctx->pc = 0x341248u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)478 << 16));
    // 0x34124c: 0x3c0e01de  lui         $t6, 0x1DE
    ctx->pc = 0x34124cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)478 << 16));
    // 0x341250: 0x3407dc01  ori         $a3, $zero, 0xDC01
    ctx->pc = 0x341250u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)56321);
    // 0x341254: 0x3c1e01de  lui         $fp, 0x1DE
    ctx->pc = 0x341254u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)478 << 16));
    // 0x341258: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x341258u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x34125c: 0x3c1701de  lui         $s7, 0x1DE
    ctx->pc = 0x34125cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)478 << 16));
    // 0x341260: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x341260u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x341264: 0xa4a40  sll         $t1, $t2, 9
    ctx->pc = 0x341264u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 9));
    // 0x341268: 0x25293480  addiu       $t1, $t1, 0x3480
    ctx->pc = 0x341268u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 13440));
    // 0x34126c: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x34126cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x341270: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x341270u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x341274: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x341274u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x341278: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x341278u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x34127c: 0xfc670020  sd          $a3, 0x20($v1)
    ctx->pc = 0x34127cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 7));
    // 0x341280: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x341280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x341284: 0xfc6c0028  sd          $t4, 0x28($v1)
    ctx->pc = 0x341284u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 12));
    // 0x341288: 0x3c0760ab  lui         $a3, 0x60AB
    ctx->pc = 0x341288u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24747 << 16));
    // 0x34128c: 0xfc680030  sd          $t0, 0x30($v1)
    ctx->pc = 0x34128cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 8));
    // 0x341290: 0x34e74000  ori         $a3, $a3, 0x4000
    ctx->pc = 0x341290u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x341294: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x341294u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x341298: 0xfc6b0038  sd          $t3, 0x38($v1)
    ctx->pc = 0x341298u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 11));
    // 0x34129c: 0x34078001  ori         $a3, $zero, 0x8001
    ctx->pc = 0x34129cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x3412a0: 0xfc6a0040  sd          $t2, 0x40($v1)
    ctx->pc = 0x3412a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 10));
    // 0x3412a4: 0xe84025  or          $t0, $a3, $t0
    ctx->pc = 0x3412a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3412a8: 0xfc690048  sd          $t1, 0x48($v1)
    ctx->pc = 0x3412a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 9));
    // 0x3412ac: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x3412acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x3412b0: 0xfc680050  sd          $t0, 0x50($v1)
    ctx->pc = 0x3412b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 8));
    // 0x3412b4: 0x34e73413  ori         $a3, $a3, 0x3413
    ctx->pc = 0x3412b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)13331);
    // 0x3412b8: 0x3c0c01de  lui         $t4, 0x1DE
    ctx->pc = 0x3412b8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)478 << 16));
    // 0x3412bc: 0xfc670058  sd          $a3, 0x58($v1)
    ctx->pc = 0x3412bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 7));
    // 0x3412c0: 0x3c0b01de  lui         $t3, 0x1DE
    ctx->pc = 0x3412c0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)478 << 16));
    // 0x3412c4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3412c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3412c8: 0x3c0701de  lui         $a3, 0x1DE
    ctx->pc = 0x3412c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)478 << 16));
    // 0x3412cc: 0x8c6dea38  lw          $t5, -0x15C8($v1)
    ctx->pc = 0x3412ccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961720)));
    // 0x3412d0: 0x3c0a01de  lui         $t2, 0x1DE
    ctx->pc = 0x3412d0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)478 << 16));
    // 0x3412d4: 0x3c0801de  lui         $t0, 0x1DE
    ctx->pc = 0x3412d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)478 << 16));
    // 0x3412d8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3412d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3412dc: 0x25a90060  addiu       $t1, $t5, 0x60
    ctx->pc = 0x3412dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x3412e0: 0xac69ea38  sw          $t1, -0x15C8($v1)
    ctx->pc = 0x3412e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961720), GPR_U32(ctx, 9));
    // 0x3412e4: 0x3c0901de  lui         $t1, 0x1DE
    ctx->pc = 0x3412e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)478 << 16));
    // 0x3412e8: 0xada00060  sw          $zero, 0x60($t5)
    ctx->pc = 0x3412e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 96), GPR_U32(ctx, 0));
    // 0x3412ec: 0x7fa900c0  sq          $t1, 0xC0($sp)
    ctx->pc = 0x3412ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 9));
    // 0x3412f0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3412f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3412f4: 0x8cedea38  lw          $t5, -0x15C8($a3)
    ctx->pc = 0x3412f4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294961720)));
    // 0x3412f8: 0x3c0901de  lui         $t1, 0x1DE
    ctx->pc = 0x3412f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)478 << 16));
    // 0x3412fc: 0x7fa900b0  sq          $t1, 0xB0($sp)
    ctx->pc = 0x3412fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 9));
    // 0x341300: 0x44900  sll         $t1, $a0, 4
    ctx->pc = 0x341300u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x341304: 0xada00004  sw          $zero, 0x4($t5)
    ctx->pc = 0x341304u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 0));
    // 0x341308: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x341308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x34130c: 0x7fa900e0  sq          $t1, 0xE0($sp)
    ctx->pc = 0x34130cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 9));
    // 0x341310: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x341310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x341314: 0x8d89ea38  lw          $t1, -0x15C8($t4)
    ctx->pc = 0x341314u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294961720)));
    // 0x341318: 0x3c0701de  lui         $a3, 0x1DE
    ctx->pc = 0x341318u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)478 << 16));
    // 0x34131c: 0x7fa400d0  sq          $a0, 0xD0($sp)
    ctx->pc = 0x34131cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 4));
    // 0x341320: 0x3c0d01de  lui         $t5, 0x1DE
    ctx->pc = 0x341320u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)478 << 16));
    // 0x341324: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x341324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x341328: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x341328u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
    // 0x34132c: 0x4a900  sll         $s5, $a0, 4
    ctx->pc = 0x34132cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x341330: 0x8d64ea38  lw          $a0, -0x15C8($t3)
    ctx->pc = 0x341330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294961720)));
    // 0x341334: 0x3c0c01de  lui         $t4, 0x1DE
    ctx->pc = 0x341334u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)478 << 16));
    // 0x341338: 0x3c0901de  lui         $t1, 0x1DE
    ctx->pc = 0x341338u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)478 << 16));
    // 0x34133c: 0x3c0601de  lui         $a2, 0x1DE
    ctx->pc = 0x34133cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)478 << 16));
    // 0x341340: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x341340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x341344: 0x3c0b01de  lui         $t3, 0x1DE
    ctx->pc = 0x341344u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)478 << 16));
    // 0x341348: 0x8d45ea38  lw          $a1, -0x15C8($t2)
    ctx->pc = 0x341348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294961720)));
    // 0x34134c: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x34134cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x341350: 0x3c0a01de  lui         $t2, 0x1DE
    ctx->pc = 0x341350u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)478 << 16));
    // 0x341354: 0xad04ea38  sw          $a0, -0x15C8($t0)
    ctx->pc = 0x341354u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294961720), GPR_U32(ctx, 4));
    // 0x341358: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x341358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34135c: 0x3c0801de  lui         $t0, 0x1DE
    ctx->pc = 0x34135cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)478 << 16));
    // 0x341360: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x341360u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x341364: 0x8ce5ea38  lw          $a1, -0x15C8($a3)
    ctx->pc = 0x341364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294961720)));
    // 0x341368: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34136c: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x34136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x341370: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x341374: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x341374u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x341378: 0x3c0701de  lui         $a3, 0x1DE
    ctx->pc = 0x341378u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)478 << 16));
    // 0x34137c: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x34137cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
    // 0x341380: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341384: 0x8e84ea38  lw          $a0, -0x15C8($s4)
    ctx->pc = 0x341384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294961720)));
    // 0x341388: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x341388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x34138c: 0x8e64ea38  lw          $a0, -0x15C8($s3)
    ctx->pc = 0x34138cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294961720)));
    // 0x341390: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x341390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x341394: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x341394u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x341398: 0x8c94ea38  lw          $s4, -0x15C8($a0)
    ctx->pc = 0x341398u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961720)));
    // 0x34139c: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x34139cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3413a0: 0x26930010  addiu       $s3, $s4, 0x10
    ctx->pc = 0x3413a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x3413a4: 0xac93ea38  sw          $s3, -0x15C8($a0)
    ctx->pc = 0x3413a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961720), GPR_U32(ctx, 19));
    // 0x3413a8: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x3413a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3413ac: 0xae840010  sw          $a0, 0x10($s4)
    ctx->pc = 0x3413acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 4));
    // 0x3413b0: 0x8e44ea38  lw          $a0, -0x15C8($s2)
    ctx->pc = 0x3413b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294961720)));
    // 0x3413b4: 0xac960004  sw          $s6, 0x4($a0)
    ctx->pc = 0x3413b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 22));
    // 0x3413b8: 0x8e31ea38  lw          $s1, -0x15C8($s1)
    ctx->pc = 0x3413b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961720)));
    // 0x3413bc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x3413bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3413c0: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x3413c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x3413c4: 0x8e04ea38  lw          $a0, -0x15C8($s0)
    ctx->pc = 0x3413c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294961720)));
    // 0x3413c8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3413c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3413cc: 0x8f30ea38  lw          $s0, -0x15C8($t9)
    ctx->pc = 0x3413ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4294961720)));
    // 0x3413d0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3413d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3413d4: 0xaf04ea38  sw          $a0, -0x15C8($t8)
    ctx->pc = 0x3413d4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4294961720), GPR_U32(ctx, 4));
    // 0x3413d8: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x3413d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3413dc: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x3413dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x3413e0: 0x8defea38  lw          $t7, -0x15C8($t7)
    ctx->pc = 0x3413e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294961720)));
    // 0x3413e4: 0xade40004  sw          $a0, 0x4($t7)
    ctx->pc = 0x3413e4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 4));
    // 0x3413e8: 0x8dc4ea38  lw          $a0, -0x15C8($t6)
    ctx->pc = 0x3413e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294961720)));
    // 0x3413ec: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3413ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3413f0: 0x8da4ea38  lw          $a0, -0x15C8($t5)
    ctx->pc = 0x3413f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294961720)));
    // 0x3413f4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3413f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3413f8: 0x8d8cea38  lw          $t4, -0x15C8($t4)
    ctx->pc = 0x3413f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294961720)));
    // 0x3413fc: 0x25840010  addiu       $a0, $t4, 0x10
    ctx->pc = 0x3413fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x341400: 0xad64ea38  sw          $a0, -0x15C8($t3)
    ctx->pc = 0x341400u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294961720), GPR_U32(ctx, 4));
    // 0x341404: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x341404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x341408: 0xad840010  sw          $a0, 0x10($t4)
    ctx->pc = 0x341408u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 4));
    // 0x34140c: 0x8d44ea38  lw          $a0, -0x15C8($t2)
    ctx->pc = 0x34140cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294961720)));
    // 0x341410: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x341410u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x341414: 0x8d24ea38  lw          $a0, -0x15C8($t1)
    ctx->pc = 0x341414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294961720)));
    // 0x341418: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x341418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x34141c: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x34141cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x341420: 0x8c84ea38  lw          $a0, -0x15C8($a0)
    ctx->pc = 0x341420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961720)));
    // 0x341424: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x341424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x341428: 0x8d04ea38  lw          $a0, -0x15C8($t0)
    ctx->pc = 0x341428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294961720)));
    // 0x34142c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x34142cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x341430: 0xace3ea38  sw          $v1, -0x15C8($a3)
    ctx->pc = 0x341430u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294961720), GPR_U32(ctx, 3));
    // 0x341434: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x341434u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x341438: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x341438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x34143c: 0x8cc3ea38  lw          $v1, -0x15C8($a2)
    ctx->pc = 0x34143cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294961720)));
    // 0x341440: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x341440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
    // 0x341444: 0x8fc4ea38  lw          $a0, -0x15C8($fp)
    ctx->pc = 0x341444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294961720)));
    // 0x341448: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x341448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34144c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x34144cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x341450: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x341450u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x341454: 0x8c63ea38  lw          $v1, -0x15C8($v1)
    ctx->pc = 0x341454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961720)));
    // 0x341458: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x341458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x34145c: 0x8ee3ea38  lw          $v1, -0x15C8($s7)
    ctx->pc = 0x34145cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294961720)));
    // 0x341460: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x341460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x341464: 0xaca3ea38  sw          $v1, -0x15C8($a1)
    ctx->pc = 0x341464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294961720), GPR_U32(ctx, 3));
    // 0x341468: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x341468u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x34146c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x34146cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x341470: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x341470u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341474: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x341474u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x341478: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x341478u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34147c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34147cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x341480: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x341480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x341484: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x341484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x341488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34148c: 0x3e00008  jr          $ra
    ctx->pc = 0x34148Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34148Cu;
        // 0x341490: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34148Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341494u;
    // 0x341494: 0x0  nop
    ctx->pc = 0x341494u;
    // NOP
    // 0x341498: 0x0  nop
    ctx->pc = 0x341498u;
    // NOP
    // 0x34149c: 0x0  nop
    ctx->pc = 0x34149cu;
    // NOP
}
