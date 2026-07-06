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

// Function: sub_001016B0
// Address: 0x1016b0 - 0x1017f0
void sub_001016B0_0x1016b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001016B0_0x1016b0");
#endif

    ctx->pc = 0x1016b0u;

    // 0x1016b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1016b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1016b4: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x1016b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1016b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1016b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1016bc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1016bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1016c0: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x1016c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x1016c4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x1016c4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1016c8: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1016c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1016cc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1016ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1016d0: 0xdc8c0010  ld          $t4, 0x10($a0)
    ctx->pc = 0x1016d0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1016d4: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x1016d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1016d8: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x1016d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x1016dc: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x1016dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x1016e0: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x1016e0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x1016e4: 0xdc8d0018  ld          $t5, 0x18($a0)
    ctx->pc = 0x1016e4u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1016e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1016e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1016ec: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x1016ecu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x1016f0: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x1016f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x1016f4: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x1016f4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x1016f8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1016f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1016fc: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x1016fcu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x101700: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x101700u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x101704: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x101704u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x101708: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x101708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10170c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x10170cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x101710: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x101710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x101714: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x101714u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x101718: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x101718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x10171c: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x10171cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x101720: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x101720u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x101724: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x101724u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x101728: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x101728u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x10172c: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x10172cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
    // 0x101730: 0xb5c3c  dsll32      $t3, $t3, 16
    ctx->pc = 0x101730u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 16));
    // 0x101734: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x101734u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x101738: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x101738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x10173c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x10173cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x101740: 0x73e3b  dsra        $a3, $a3, 24
    ctx->pc = 0x101740u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> 24);
    // 0x101744: 0xb5c3b  dsra        $t3, $t3, 16
    ctx->pc = 0x101744u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> 16);
    // 0x101748: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x101748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10174c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x10174cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x101750: 0x240e000e  addiu       $t6, $zero, 0xE
    ctx->pc = 0x101750u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x101754: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x101754u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x101758: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x101758u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x10175c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x10175cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x101760: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x101760u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x101764: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x101764u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x101768: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x101768u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x10176c: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x10176cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x101770: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x101770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
    // 0x101774: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x101774u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x101778: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x101778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x10177c: 0x3c071300  lui         $a3, 0x1300
    ctx->pc = 0x10177cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4864 << 16));
    // 0x101780: 0x34c60006  ori         $a2, $a2, 0x6
    ctx->pc = 0x101780u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6);
    // 0x101784: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x101784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x101788: 0x240b0051  addiu       $t3, $zero, 0x51
    ctx->pc = 0x101788u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x10178c: 0x240e0052  addiu       $t6, $zero, 0x52
    ctx->pc = 0x10178cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x101790: 0x240f0061  addiu       $t7, $zero, 0x61
    ctx->pc = 0x101790u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x101794: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x101794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101798: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x101798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x10179c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x10179cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1017a0: 0xfc820068  sd          $v0, 0x68($a0)
    ctx->pc = 0x1017a0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 2));
    // 0x1017a4: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1017a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x1017a8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1017a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1017ac: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x1017acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
    // 0x1017b0: 0xfc8d0018  sd          $t5, 0x18($a0)
    ctx->pc = 0x1017b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 13));
    // 0x1017b4: 0xfc850020  sd          $a1, 0x20($a0)
    ctx->pc = 0x1017b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 5));
    // 0x1017b8: 0xfc890028  sd          $t1, 0x28($a0)
    ctx->pc = 0x1017b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 9));
    // 0x1017bc: 0xfc880030  sd          $t0, 0x30($a0)
    ctx->pc = 0x1017bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 8));
    // 0x1017c0: 0xfc8b0038  sd          $t3, 0x38($a0)
    ctx->pc = 0x1017c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 11));
    // 0x1017c4: 0xfc8a0040  sd          $t2, 0x40($a0)
    ctx->pc = 0x1017c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 10));
    // 0x1017c8: 0xfc8e0048  sd          $t6, 0x48($a0)
    ctx->pc = 0x1017c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 14));
    // 0x1017cc: 0xfc8f0058  sd          $t7, 0x58($a0)
    ctx->pc = 0x1017ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 15));
    // 0x1017d0: 0xfc900060  sd          $s0, 0x60($a0)
    ctx->pc = 0x1017d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 16));
    // 0x1017d4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1017d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1017d8: 0xfc800050  sd          $zero, 0x50($a0)
    ctx->pc = 0x1017d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 0));
    // 0x1017dc: 0xf  sync
    ctx->pc = 0x1017dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1017e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1017e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1017e4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1017e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1017e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1017E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1017ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1017E8u;
        // 0x1017ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1017E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1017F0u;
}
