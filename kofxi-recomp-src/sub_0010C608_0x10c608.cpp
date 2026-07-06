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

// Function: sub_0010C608
// Address: 0x10c608 - 0x10c8b0
void sub_0010C608_0x10c608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C608_0x10c608");
#endif

    switch (ctx->pc) {
        case 0x10c618u: goto label_10c618;
        case 0x10c630u: goto label_10c630;
        case 0x10c660u: goto label_10c660;
        case 0x10c6e8u: goto label_10c6e8;
        case 0x10c720u: goto label_10c720;
        case 0x10c778u: goto label_10c778;
        case 0x10c7b0u: goto label_10c7b0;
        case 0x10c7e8u: goto label_10c7e8;
        case 0x10c818u: goto label_10c818;
        case 0x10c860u: goto label_10c860;
        case 0x10c880u: goto label_10c880;
        case 0x10c8a0u: goto label_10c8a0;
        default: break;
    }

    ctx->pc = 0x10c608u;

    // 0x10c608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10c608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10c60c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c610: 0xc043164  jal         func_10C590
    ctx->pc = 0x10C610u;
    SET_GPR_U32(ctx, 31, 0x10C618u);
    ctx->pc = 0x10C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C610u;
    // 0x10c614: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C590u, 0x10C610u, 0x10C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C618u;
label_10c618:
    // 0x10c618: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10c61c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x10c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x10c620: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10c620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x10c624: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c628: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10c628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10c62c: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x10c62cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
label_10c630:
    // 0x10c630: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10c630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10c634: 0x0  nop
    ctx->pc = 0x10c634u;
    // NOP
    // 0x10c638: 0x0  nop
    ctx->pc = 0x10c638u;
    // NOP
    // 0x10c63c: 0x0  nop
    ctx->pc = 0x10c63cu;
    // NOP
    // 0x10c640: 0x0  nop
    ctx->pc = 0x10c640u;
    // NOP
    // 0x10c644: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C644u;
    {
        const bool branch_taken_0x10c644 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10c644) {
            ctx->pc = 0x10C630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c630;
        }
    }
    ctx->pc = 0x10C64Cu;
    // 0x10c64c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10c650: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c654: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10c654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10c658: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10c658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10c65c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_10c660:
    // 0x10c660: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c664: 0x0  nop
    ctx->pc = 0x10c664u;
    // NOP
    // 0x10c668: 0x0  nop
    ctx->pc = 0x10c668u;
    // NOP
    // 0x10c66c: 0x0  nop
    ctx->pc = 0x10c66cu;
    // NOP
    // 0x10c670: 0x0  nop
    ctx->pc = 0x10c670u;
    // NOP
    // 0x10c674: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C674u;
    {
        const bool branch_taken_0x10c674 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10c674) {
            ctx->pc = 0x10C660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c660;
        }
    }
    ctx->pc = 0x10C67Cu;
    // 0x10c67c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x10c67cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x10c680: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c684: 0x24a58610  addiu       $a1, $a1, -0x79F0
    ctx->pc = 0x10c684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936080));
    // 0x10c688: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x10c688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
    // 0x10c68c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x10c68cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10c690: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10c690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10c694: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x10c694u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x10c698: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x10c698u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x10c69c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10c69cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x10c6a0: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x10c6a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x10c6a4: 0x35082010  ori         $t0, $t0, 0x2010
    ctx->pc = 0x10c6a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8208);
    // 0x10c6a8: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x10c6a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x10c6ac: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x10c6acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x10c6b0: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x10c6b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x10c6b4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10c6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x10c6b8: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x10c6b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x10c6bc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x10c6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x10c6c0: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x10c6c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x10c6c4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10c6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x10c6c8: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x10c6c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x10c6cc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x10c6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x10c6d0: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x10c6d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x10c6d4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10c6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x10c6d8: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x10c6d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x10c6dc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x10c6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x10c6e0: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x10c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x10c6e4: 0x0  nop
    ctx->pc = 0x10c6e4u;
    // NOP
label_10c6e8:
    // 0x10c6e8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x10c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10c6ec: 0x0  nop
    ctx->pc = 0x10c6ecu;
    // NOP
    // 0x10c6f0: 0x0  nop
    ctx->pc = 0x10c6f0u;
    // NOP
    // 0x10c6f4: 0x0  nop
    ctx->pc = 0x10c6f4u;
    // NOP
    // 0x10c6f8: 0x0  nop
    ctx->pc = 0x10c6f8u;
    // NOP
    // 0x10c6fc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C6FCu;
    {
        const bool branch_taken_0x10c6fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10c6fc) {
            ctx->pc = 0x10C6E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c6e8;
        }
    }
    ctx->pc = 0x10C704u;
    // 0x10c704: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10c708: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x10c708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x10c70c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10c70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10c710: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c714: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10c714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10c718: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x10c718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x10c71c: 0x0  nop
    ctx->pc = 0x10c71cu;
    // NOP
label_10c720:
    // 0x10c720: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10c720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10c724: 0x0  nop
    ctx->pc = 0x10c724u;
    // NOP
    // 0x10c728: 0x0  nop
    ctx->pc = 0x10c728u;
    // NOP
    // 0x10c72c: 0x0  nop
    ctx->pc = 0x10c72cu;
    // NOP
    // 0x10c730: 0x0  nop
    ctx->pc = 0x10c730u;
    // NOP
    // 0x10c734: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C734u;
    {
        const bool branch_taken_0x10c734 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10c734) {
            ctx->pc = 0x10C720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c720;
        }
    }
    ctx->pc = 0x10C73Cu;
    // 0x10c73c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x10c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x10c740: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c744: 0x24638660  addiu       $v1, $v1, -0x79A0
    ctx->pc = 0x10c744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936160));
    // 0x10c748: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x10c748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
    // 0x10c74c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x10c74cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c750: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10c750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10c754: 0x3c066000  lui         $a2, 0x6000
    ctx->pc = 0x10c754u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24576 << 16));
    // 0x10c758: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x10c758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x10c75c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10c75cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x10c760: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10c760u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10c764: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x10c764u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x10c768: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x10c768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x10c76c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x10c76cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x10c770: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x10c770u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x10c774: 0x0  nop
    ctx->pc = 0x10c774u;
    // NOP
label_10c778:
    // 0x10c778: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x10c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10c77c: 0x0  nop
    ctx->pc = 0x10c77cu;
    // NOP
    // 0x10c780: 0x0  nop
    ctx->pc = 0x10c780u;
    // NOP
    // 0x10c784: 0x0  nop
    ctx->pc = 0x10c784u;
    // NOP
    // 0x10c788: 0x0  nop
    ctx->pc = 0x10c788u;
    // NOP
    // 0x10c78c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C78Cu;
    {
        const bool branch_taken_0x10c78c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10c78c) {
            ctx->pc = 0x10C778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c778;
        }
    }
    ctx->pc = 0x10C794u;
    // 0x10c794: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10c798: 0x3c039000  lui         $v1, 0x9000
    ctx->pc = 0x10c798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36864 << 16));
    // 0x10c79c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10c79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10c7a0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c7a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10c7a8: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x10c7a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x10c7ac: 0x0  nop
    ctx->pc = 0x10c7acu;
    // NOP
label_10c7b0:
    // 0x10c7b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10c7b4: 0x0  nop
    ctx->pc = 0x10c7b4u;
    // NOP
    // 0x10c7b8: 0x0  nop
    ctx->pc = 0x10c7b8u;
    // NOP
    // 0x10c7bc: 0x0  nop
    ctx->pc = 0x10c7bcu;
    // NOP
    // 0x10c7c0: 0x0  nop
    ctx->pc = 0x10c7c0u;
    // NOP
    // 0x10c7c4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C7C4u;
    {
        const bool branch_taken_0x10c7c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10c7c4) {
            ctx->pc = 0x10C7B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c7b0;
        }
    }
    ctx->pc = 0x10C7CCu;
    // 0x10c7cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10c7d0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x10c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x10c7d4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x10c7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x10c7d8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c7dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10c7e0: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x10c7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x10c7e4: 0x0  nop
    ctx->pc = 0x10c7e4u;
    // NOP
label_10c7e8:
    // 0x10c7e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10c7ec: 0x0  nop
    ctx->pc = 0x10c7ecu;
    // NOP
    // 0x10c7f0: 0x0  nop
    ctx->pc = 0x10c7f0u;
    // NOP
    // 0x10c7f4: 0x0  nop
    ctx->pc = 0x10c7f4u;
    // NOP
    // 0x10c7f8: 0x0  nop
    ctx->pc = 0x10c7f8u;
    // NOP
    // 0x10c7fc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C7FCu;
    {
        const bool branch_taken_0x10c7fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10c7fc) {
            ctx->pc = 0x10C7E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c7e8;
        }
    }
    ctx->pc = 0x10C804u;
    // 0x10c804: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10c808: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c80c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10c80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10c810: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10c810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10c814: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10c814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_10c818:
    // 0x10c818: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c81c: 0x0  nop
    ctx->pc = 0x10c81cu;
    // NOP
    // 0x10c820: 0x0  nop
    ctx->pc = 0x10c820u;
    // NOP
    // 0x10c824: 0x0  nop
    ctx->pc = 0x10c824u;
    // NOP
    // 0x10c828: 0x0  nop
    ctx->pc = 0x10c828u;
    // NOP
    // 0x10c82c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C82Cu;
    {
        const bool branch_taken_0x10c82c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10c82c) {
            ctx->pc = 0x10C818u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c818;
        }
    }
    ctx->pc = 0x10C834u;
    // 0x10c834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c838: 0x3e00008  jr          $ra
    ctx->pc = 0x10C838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C838u;
        // 0x10c83c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C840u;
    // 0x10c840: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x10c840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x10c844: 0xc  syscall     0
    ctx->pc = 0x10c844u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c848: 0x3e00008  jr          $ra
    ctx->pc = 0x10C848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C850u;
    // 0x10c850: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10c850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c854: 0xc  syscall     0
    ctx->pc = 0x10c854u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c858: 0x3e00008  jr          $ra
    ctx->pc = 0x10C858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C860u;
label_10c860:
    // 0x10c860: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10c860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c864: 0xc  syscall     0
    ctx->pc = 0x10c864u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c868: 0x3e00008  jr          $ra
    ctx->pc = 0x10C868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C870u;
    // 0x10c870: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10c870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10c874: 0xc  syscall     0
    ctx->pc = 0x10c874u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c878: 0x3e00008  jr          $ra
    ctx->pc = 0x10C878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C880u;
label_10c880:
    // 0x10c880: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10c880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10c884: 0xc  syscall     0
    ctx->pc = 0x10c884u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c888: 0x3e00008  jr          $ra
    ctx->pc = 0x10C888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C890u;
    // 0x10c890: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10c890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10c894: 0xc  syscall     0
    ctx->pc = 0x10c894u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c898: 0x3e00008  jr          $ra
    ctx->pc = 0x10C898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C8A0u;
label_10c8a0:
    // 0x10c8a0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x10c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10c8a4: 0xc  syscall     0
    ctx->pc = 0x10c8a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C8B0u;
}
