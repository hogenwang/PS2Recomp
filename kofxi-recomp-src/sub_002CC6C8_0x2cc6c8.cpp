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

// Function: sub_002CC6C8
// Address: 0x2cc6c8 - 0x2ccf40
void sub_002CC6C8_0x2cc6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC6C8_0x2cc6c8");
#endif

    switch (ctx->pc) {
        case 0x2cc6fcu: goto label_2cc6fc;
        case 0x2cc704u: goto label_2cc704;
        case 0x2cc920u: goto label_2cc920;
        case 0x2cc94cu: goto label_2cc94c;
        case 0x2cc970u: goto label_2cc970;
        case 0x2cc998u: goto label_2cc998;
        case 0x2cc9ccu: goto label_2cc9cc;
        case 0x2cc9d8u: goto label_2cc9d8;
        case 0x2cca0cu: goto label_2cca0c;
        case 0x2cca18u: goto label_2cca18;
        case 0x2cca58u: goto label_2cca58;
        case 0x2ccac4u: goto label_2ccac4;
        case 0x2ccc90u: goto label_2ccc90;
        case 0x2cccdcu: goto label_2cccdc;
        case 0x2ccf20u: goto label_2ccf20;
        default: break;
    }

    ctx->pc = 0x2cc6c8u;

    // 0x2cc6c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cc6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cc6cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cc6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cc6d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2cc6d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc6d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cc6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cc6d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2cc6d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc6dc: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x2cc6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2cc6e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc6e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cc6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cc6e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cc6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cc6ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cc6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cc6f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2cc6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2cc6f4: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2CC6F4u;
    SET_GPR_U32(ctx, 31, 0x2CC6FCu);
    ctx->pc = 0x2CC6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC6F4u;
    // 0x2cc6f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2CC6F4u, 0x2CC6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC6FCu;
label_2cc6fc:
    // 0x2cc6fc: 0xc0b33d0  jal         func_2CCF40
    ctx->pc = 0x2CC6FCu;
    SET_GPR_U32(ctx, 31, 0x2CC704u);
    ctx->pc = 0x2CC700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC6FCu;
    // 0x2cc700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCF40u, 0x2CC6FCu, 0x2CC704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC704u;
label_2cc704:
    // 0x2cc704: 0x544000ad  bnel        $v0, $zero, . + 4 + (0xAD << 2)
    ctx->pc = 0x2CC704u;
    {
        const bool branch_taken_0x2cc704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc704) {
            ctx->pc = 0x2CC708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC704u;
            // 0x2cc708: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC9BCu;
            goto label_2cc9bc;
        }
    }
    ctx->pc = 0x2CC70Cu;
    // 0x2cc70c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x2cc70cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cc710: 0x241903e8  addiu       $t9, $zero, 0x3E8
    ctx->pc = 0x2cc710u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2cc714: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x2cc714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cc718: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2cc718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2cc71c: 0x59001b  divu        $zero, $v0, $t9
    ctx->pc = 0x2cc71cu;
    { uint32_t divisor = GPR_U32(ctx, 25); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cc720: 0x53200001  beql        $t9, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CC720u;
    {
        const bool branch_taken_0x2cc720 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc720) {
            ctx->pc = 0x2CC724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC720u;
            // 0x2cc724: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC728u;
            goto label_2cc728;
        }
    }
    ctx->pc = 0x2CC728u;
label_2cc728:
    // 0x2cc728: 0x2418000a  addiu       $t8, $zero, 0xA
    ctx->pc = 0x2cc728u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cc72c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2cc72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cc730: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2cc730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cc734: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2cc734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cc738: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2cc738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cc73c: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2cc73cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cc740: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x2cc740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cc744: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x2cc744u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cc748: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x2cc748u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cc74c: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x2cc74cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cc750: 0x240d000a  addiu       $t5, $zero, 0xA
    ctx->pc = 0x2cc750u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cc754: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x2cc754u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cc758: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x2cc758u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cc75c: 0x2413000e  addiu       $s3, $zero, 0xE
    ctx->pc = 0x2cc75cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2cc760: 0x1012  mflo        $v0
    ctx->pc = 0x2cc760u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2cc764: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc768: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2cc768u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc76c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x2cc76cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cc770: 0x79001b  divu        $zero, $v1, $t9
    ctx->pc = 0x2cc770u;
    { uint32_t divisor = GPR_U32(ctx, 25); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2cc774: 0x1010  mfhi        $v0
    ctx->pc = 0x2cc774u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cc778: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x2cc778u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cc77c: 0x1012  mflo        $v0
    ctx->pc = 0x2cc77cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2cc780: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc784: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2cc784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc788: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x2cc788u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cc78c: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x2cc78cu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2cc790: 0x1010  mfhi        $v0
    ctx->pc = 0x2cc790u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cc794: 0x58001b  divu        $zero, $v0, $t8
    ctx->pc = 0x2cc794u;
    { uint32_t divisor = GPR_U32(ctx, 24); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cc798: 0x1012  mflo        $v0
    ctx->pc = 0x2cc798u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2cc79c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc7a0: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x2cc7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc7a4: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x2cc7a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cc7a8: 0x78001b  divu        $zero, $v1, $t8
    ctx->pc = 0x2cc7a8u;
    { uint32_t divisor = GPR_U32(ctx, 24); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2cc7ac: 0x1010  mfhi        $v0
    ctx->pc = 0x2cc7acu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cc7b0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc7b4: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x2cc7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc7b8: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x2cc7b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2cc7bc: 0x58001b  divu        $zero, $v0, $t8
    ctx->pc = 0x2cc7bcu;
    { uint32_t divisor = GPR_U32(ctx, 24); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cc7c0: 0x1012  mflo        $v0
    ctx->pc = 0x2cc7c0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2cc7c4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc7c8: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x2cc7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc7cc: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x2cc7ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2cc7d0: 0x78001b  divu        $zero, $v1, $t8
    ctx->pc = 0x2cc7d0u;
    { uint32_t divisor = GPR_U32(ctx, 24); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2cc7d4: 0x1010  mfhi        $v0
    ctx->pc = 0x2cc7d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cc7d8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc7dc: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x2cc7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc7e0: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x2cc7e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cc7e4: 0x58001b  divu        $zero, $v0, $t8
    ctx->pc = 0x2cc7e4u;
    { uint32_t divisor = GPR_U32(ctx, 24); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cc7e8: 0x1012  mflo        $v0
    ctx->pc = 0x2cc7e8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2cc7ec: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc7f0: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x2cc7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc7f4: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x2cc7f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cc7f8: 0x78001b  divu        $zero, $v1, $t8
    ctx->pc = 0x2cc7f8u;
    { uint32_t divisor = GPR_U32(ctx, 24); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2cc7fc: 0x1010  mfhi        $v0
    ctx->pc = 0x2cc7fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cc800: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc804: 0xa2020007  sb          $v0, 0x7($s0)
    ctx->pc = 0x2cc804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc808: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x2cc808u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2cc80c: 0x58001b  divu        $zero, $v0, $t8
    ctx->pc = 0x2cc80cu;
    { uint32_t divisor = GPR_U32(ctx, 24); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cc810: 0x1012  mflo        $v0
    ctx->pc = 0x2cc810u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2cc814: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc818: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x2cc818u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc81c: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x2cc81cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2cc820: 0x78001b  divu        $zero, $v1, $t8
    ctx->pc = 0x2cc820u;
    { uint32_t divisor = GPR_U32(ctx, 24); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2cc824: 0x1010  mfhi        $v0
    ctx->pc = 0x2cc824u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cc828: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc82c: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x2cc82cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc830: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x2cc830u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2cc834: 0x58001b  divu        $zero, $v0, $t8
    ctx->pc = 0x2cc834u;
    { uint32_t divisor = GPR_U32(ctx, 24); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cc838: 0x1012  mflo        $v0
    ctx->pc = 0x2cc838u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2cc83c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc840: 0xa202000a  sb          $v0, 0xA($s0)
    ctx->pc = 0x2cc840u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc844: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x2cc844u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2cc848: 0x78001b  divu        $zero, $v1, $t8
    ctx->pc = 0x2cc848u;
    { uint32_t divisor = GPR_U32(ctx, 24); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2cc84c: 0x1010  mfhi        $v0
    ctx->pc = 0x2cc84cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cc850: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc854: 0xa202000b  sb          $v0, 0xB($s0)
    ctx->pc = 0x2cc854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc858: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x2cc858u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2cc85c: 0x58001b  divu        $zero, $v0, $t8
    ctx->pc = 0x2cc85cu;
    { uint32_t divisor = GPR_U32(ctx, 24); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cc860: 0x1012  mflo        $v0
    ctx->pc = 0x2cc860u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2cc864: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc868: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2cc868u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc86c: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x2cc86cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2cc870: 0x78001b  divu        $zero, $v1, $t8
    ctx->pc = 0x2cc870u;
    { uint32_t divisor = GPR_U32(ctx, 24); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2cc874: 0x1010  mfhi        $v0
    ctx->pc = 0x2cc874u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cc878: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc87c: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2cc87cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc880: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2cc880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2cc884: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2CC884u;
    {
        const bool branch_taken_0x2cc884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC884u;
        // 0x2cc888: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc884) {
            ctx->pc = 0x2CC998u;
            goto label_2cc998;
        }
    }
    ctx->pc = 0x2CC88Cu;
    // 0x2cc88c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x2cc88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2cc890: 0x348486a0  ori         $a0, $a0, 0x86A0
    ctx->pc = 0x2cc890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34464);
    // 0x2cc894: 0xa202000e  sb          $v0, 0xE($s0)
    ctx->pc = 0x2cc894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc898: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CC898u;
    {
        const bool branch_taken_0x2cc898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc898) {
            ctx->pc = 0x2CC89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC898u;
            // 0x2cc89c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC8A0u;
            goto label_2cc8a0;
        }
    }
    ctx->pc = 0x2CC8A0u;
label_2cc8a0:
    // 0x2cc8a0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2cc8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2cc8a4: 0x24052710  addiu       $a1, $zero, 0x2710
    ctx->pc = 0x2cc8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2cc8a8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2cc8a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc8ac: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2cc8acu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cc8b0: 0x24072710  addiu       $a3, $zero, 0x2710
    ctx->pc = 0x2cc8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x2cc8b4: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2cc8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2cc8b8: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x2cc8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2cc8bc: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x2cc8bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cc8c0: 0x240a0064  addiu       $t2, $zero, 0x64
    ctx->pc = 0x2cc8c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cc8c4: 0x240d0030  addiu       $t5, $zero, 0x30
    ctx->pc = 0x2cc8c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2cc8c8: 0x24130015  addiu       $s3, $zero, 0x15
    ctx->pc = 0x2cc8c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2cc8cc: 0x1012  mflo        $v0
    ctx->pc = 0x2cc8ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2cc8d0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc8d4: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x2cc8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc8d8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2cc8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2cc8dc: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x2cc8dcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2cc8e0: 0x1010  mfhi        $v0
    ctx->pc = 0x2cc8e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cc8e4: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x2cc8e4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cc8e8: 0x1012  mflo        $v0
    ctx->pc = 0x2cc8e8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2cc8ec: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc8f0: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x2cc8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc8f4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2cc8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2cc8f8: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2cc8f8u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2cc8fc: 0x1010  mfhi        $v0
    ctx->pc = 0x2cc8fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cc900: 0x59001b  divu        $zero, $v0, $t9
    ctx->pc = 0x2cc900u;
    { uint32_t divisor = GPR_U32(ctx, 25); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cc904: 0x1012  mflo        $v0
    ctx->pc = 0x2cc904u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2cc908: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc90c: 0xa2020011  sb          $v0, 0x11($s0)
    ctx->pc = 0x2cc90cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc910: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2cc910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2cc914: 0x79001b  divu        $zero, $v1, $t9
    ctx->pc = 0x2cc914u;
    { uint32_t divisor = GPR_U32(ctx, 25); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2cc918: 0x1010  mfhi        $v0
    ctx->pc = 0x2cc918u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cc91c: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x2cc91cu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2cc920:
    // 0x2cc920: 0x1012  mflo        $v0
    ctx->pc = 0x2cc920u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2cc924: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc928: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x2cc928u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc92c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2cc92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2cc930: 0x72001b  divu        $zero, $v1, $s2
    ctx->pc = 0x2cc930u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2cc934: 0x1010  mfhi        $v0
    ctx->pc = 0x2cc934u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cc938: 0x58001b  divu        $zero, $v0, $t8
    ctx->pc = 0x2cc938u;
    { uint32_t divisor = GPR_U32(ctx, 24); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2cc93c: 0x1012  mflo        $v0
    ctx->pc = 0x2cc93cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2cc940: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc944: 0xa2020013  sb          $v0, 0x13($s0)
    ctx->pc = 0x2cc944u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc948: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2cc948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2cc94c:
    // 0x2cc94c: 0x78001b  divu        $zero, $v1, $t8
    ctx->pc = 0x2cc94cu;
    { uint32_t divisor = GPR_U32(ctx, 24); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2cc950: 0x1010  mfhi        $v0
    ctx->pc = 0x2cc950u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cc954: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2cc954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2cc958: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2cc958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cc95c: 0x146d0010  bne         $v1, $t5, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CC95Cu;
    {
        const bool branch_taken_0x2cc95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 13));
        ctx->pc = 0x2CC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC95Cu;
        // 0x2cc960: 0xa2020014  sb          $v0, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc95c) {
            ctx->pc = 0x2CC9A0u;
            goto label_2cc9a0;
        }
    }
    ctx->pc = 0x2CC964u;
    // 0x2cc964: 0x26040015  addiu       $a0, $s0, 0x15
    ctx->pc = 0x2cc964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
    // 0x2cc968: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x2cc968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2cc96c: 0x0  nop
    ctx->pc = 0x2cc96cu;
    // NOP
label_2cc970:
    // 0x2cc970: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2cc970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2cc974: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2cc974u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc978: 0x9062ffff  lbu         $v0, -0x1($v1)
    ctx->pc = 0x2cc978u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x2cc97c: 0x0  nop
    ctx->pc = 0x2cc97cu;
    // NOP
    // 0x2cc980: 0x0  nop
    ctx->pc = 0x2cc980u;
    // NOP
    // 0x2cc984: 0x1045fffa  beq         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CC984u;
    {
        const bool branch_taken_0x2cc984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2CC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC984u;
        // 0x2cc988: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc984) {
            ctx->pc = 0x2CC970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cc970;
        }
    }
    ctx->pc = 0x2CC98Cu;
    // 0x2cc98c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC98Cu;
    {
        const bool branch_taken_0x2cc98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC98Cu;
        // 0x2cc990: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc98c) {
            ctx->pc = 0x2CC9A8u;
            goto label_2cc9a8;
        }
    }
    ctx->pc = 0x2CC994u;
    // 0x2cc994: 0x0  nop
    ctx->pc = 0x2cc994u;
    // NOP
label_2cc998:
    // 0x2cc998: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CC998u;
    {
        const bool branch_taken_0x2cc998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC998u;
        // 0x2cc99c: 0x2603000e  addiu       $v1, $s0, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc998) {
            ctx->pc = 0x2CC9A4u;
            goto label_2cc9a4;
        }
    }
    ctx->pc = 0x2CC9A0u;
label_2cc9a0:
    // 0x2cc9a0: 0x26030015  addiu       $v1, $s0, 0x15
    ctx->pc = 0x2cc9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 21));
label_2cc9a4:
    // 0x2cc9a4: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x2cc9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_2cc9a8:
    // 0x2cc9a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2cc9a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2cc9ac: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2cc9acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cc9b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cc9b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc9b4: 0xae930000  sw          $s3, 0x0($s4)
    ctx->pc = 0x2cc9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
    // 0x2cc9b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cc9b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc9bc:
    // 0x2cc9bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cc9bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cc9c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cc9c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc9c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cc9c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cc9c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cc9c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cc9cc:
    // 0x2cc9cc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cc9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cc9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9D0u;
        // 0x2cc9d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC9D8u;
label_2cc9d8:
    // 0x2cc9d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cc9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cc9dc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2cc9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2cc9e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cc9e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc9e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2cc9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cc9e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2cc9e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc9ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc9f0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2cc9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cc9f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cc9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cc9f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cc9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc9fc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2cc9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2cca00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cca00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cca04: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2CCA04u;
    SET_GPR_U32(ctx, 31, 0x2CCA0Cu);
    ctx->pc = 0x2CCA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCA04u;
    // 0x2cca08: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2CCA04u, 0x2CCA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA0Cu;
label_2cca0c:
    // 0x2cca0c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2cca0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cca10: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2cca10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca14: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x2cca14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_2cca18:
    // 0x2cca18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cca18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cca1c: 0x2c63000a  sltiu       $v1, $v1, 0xA
    ctx->pc = 0x2cca1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cca20: 0x10600099  beqz        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x2CCA20u;
    {
        const bool branch_taken_0x2cca20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA20u;
        // 0x2cca24: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca20) {
            ctx->pc = 0x2CCC88u;
            goto label_2ccc88;
        }
    }
    ctx->pc = 0x2CCA28u;
    // 0x2cca28: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x2cca28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2cca2c: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cca30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cca30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cca34: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cca34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cca38: 0x10400139  beqz        $v0, . + 4 + (0x139 << 2)
    ctx->pc = 0x2CCA38u;
    {
        const bool branch_taken_0x2cca38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA38u;
        // 0x2cca3c: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca38) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCA40u;
    // 0x2cca40: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x2cca40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2cca44: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cca44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cca48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cca48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cca4c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cca4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cca50: 0x10400133  beqz        $v0, . + 4 + (0x133 << 2)
    ctx->pc = 0x2CCA50u;
    {
        const bool branch_taken_0x2cca50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA50u;
        // 0x2cca54: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca50) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCA58u;
label_2cca58:
    // 0x2cca58: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2cca58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2cca5c: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cca60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cca60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cca64: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cca64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cca68: 0x1040012d  beqz        $v0, . + 4 + (0x12D << 2)
    ctx->pc = 0x2CCA68u;
    {
        const bool branch_taken_0x2cca68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA68u;
        // 0x2cca6c: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca68) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCA70u;
    // 0x2cca70: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x2cca70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cca74: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cca74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cca78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cca78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cca7c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cca7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cca80: 0x10400127  beqz        $v0, . + 4 + (0x127 << 2)
    ctx->pc = 0x2CCA80u;
    {
        const bool branch_taken_0x2cca80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA80u;
        // 0x2cca84: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca80) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCA88u;
    // 0x2cca88: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x2cca88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x2cca8c: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cca90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cca90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cca94: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cca94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cca98: 0x10400121  beqz        $v0, . + 4 + (0x121 << 2)
    ctx->pc = 0x2CCA98u;
    {
        const bool branch_taken_0x2cca98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA98u;
        // 0x2cca9c: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca98) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCAA0u;
    // 0x2ccaa0: 0x92220006  lbu         $v0, 0x6($s1)
    ctx->pc = 0x2ccaa0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2ccaa4: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2ccaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2ccaa8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ccaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ccaac: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2ccaacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ccab0: 0x1040011b  beqz        $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x2CCAB0u;
    {
        const bool branch_taken_0x2ccab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAB0u;
        // 0x2ccab4: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccab0) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCAB8u;
    // 0x2ccab8: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x2ccab8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x2ccabc: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2ccabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2ccac0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ccac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ccac4:
    // 0x2ccac4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2ccac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ccac8: 0x10400115  beqz        $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x2CCAC8u;
    {
        const bool branch_taken_0x2ccac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAC8u;
        // 0x2ccacc: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccac8) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCAD0u;
    // 0x2ccad0: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x2ccad0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ccad4: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2ccad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2ccad8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ccad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ccadc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2ccadcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ccae0: 0x1040010f  beqz        $v0, . + 4 + (0x10F << 2)
    ctx->pc = 0x2CCAE0u;
    {
        const bool branch_taken_0x2ccae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAE0u;
        // 0x2ccae4: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccae0) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCAE8u;
    // 0x2ccae8: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x2ccae8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x2ccaec: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2ccaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2ccaf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ccaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ccaf4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2ccaf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ccaf8: 0x10400109  beqz        $v0, . + 4 + (0x109 << 2)
    ctx->pc = 0x2CCAF8u;
    {
        const bool branch_taken_0x2ccaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAF8u;
        // 0x2ccafc: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccaf8) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCB00u;
    // 0x2ccb00: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2ccb00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ccb04: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2ccb04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2ccb08: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ccb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ccb0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ccb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ccb10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ccb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ccb14: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ccb14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ccb18: 0x24634480  addiu       $v1, $v1, 0x4480
    ctx->pc = 0x2ccb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17536));
    // 0x2ccb1c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2ccb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ccb20: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x2ccb20u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2ccb24: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2ccb24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2ccb28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ccb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ccb2c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2ccb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ccb30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ccb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ccb34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ccb34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ccb38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ccb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ccb3c: 0x2463ed40  addiu       $v1, $v1, -0x12C0
    ctx->pc = 0x2ccb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962496));
    // 0x2ccb40: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2ccb40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ccb44: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x2ccb44u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2ccb48: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ccb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ccb4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ccb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ccb50: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ccb50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ccb54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ccb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ccb58: 0x2463fe20  addiu       $v1, $v1, -0x1E0
    ctx->pc = 0x2ccb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966816));
    // 0x2ccb5c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2ccb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ccb60: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2ccb60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2ccb64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ccb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ccb68: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x2ccb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2ccb6c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2ccb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ccb70: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ccb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ccb74: 0x2c632710  sltiu       $v1, $v1, 0x2710
    ctx->pc = 0x2ccb74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10000) ? 1 : 0);
    // 0x2ccb78: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x2ccb78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ccb7c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ccb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ccb80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ccb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ccb84: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ccb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ccb88: 0x2442fe20  addiu       $v0, $v0, -0x1E0
    ctx->pc = 0x2ccb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966816));
    // 0x2ccb8c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x2ccb8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ccb90: 0x92240005  lbu         $a0, 0x5($s1)
    ctx->pc = 0x2ccb90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x2ccb94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ccb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ccb98: 0x2446ffd0  addiu       $a2, $v0, -0x30
    ctx->pc = 0x2ccb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2ccb9c: 0xa6060002  sh          $a2, 0x2($s0)
    ctx->pc = 0x2ccb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ccba0: 0x92240006  lbu         $a0, 0x6($s1)
    ctx->pc = 0x2ccba0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2ccba4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ccba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ccba8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ccba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ccbac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ccbacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ccbb0: 0x2442fe20  addiu       $v0, $v0, -0x1E0
    ctx->pc = 0x2ccbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966816));
    // 0x2ccbb4: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2ccbb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ccbb8: 0x92240007  lbu         $a0, 0x7($s1)
    ctx->pc = 0x2ccbb8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x2ccbbc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ccbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ccbc0: 0x2445ffd0  addiu       $a1, $v0, -0x30
    ctx->pc = 0x2ccbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2ccbc4: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x2ccbc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ccbc8: 0x92240008  lbu         $a0, 0x8($s1)
    ctx->pc = 0x2ccbc8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ccbcc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ccbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ccbd0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ccbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ccbd4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ccbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ccbd8: 0x2442fe20  addiu       $v0, $v0, -0x1E0
    ctx->pc = 0x2ccbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966816));
    // 0x2ccbdc: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x2ccbdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ccbe0: 0x92240009  lbu         $a0, 0x9($s1)
    ctx->pc = 0x2ccbe0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x2ccbe4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ccbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ccbe8: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2ccbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2ccbec: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2CCBECu;
    {
        const bool branch_taken_0x2ccbec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBECu;
        // 0x2ccbf0: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbec) {
            ctx->pc = 0x2CCC88u;
            goto label_2ccc88;
        }
    }
    ctx->pc = 0x2CCBF4u;
    // 0x2ccbf4: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x2ccbf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2ccbf8: 0x106000c9  beqz        $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x2CCBF8u;
    {
        const bool branch_taken_0x2ccbf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBF8u;
        // 0x2ccbfc: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbf8) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCC00u;
    // 0x2ccc00: 0x2c62000d  sltiu       $v0, $v1, 0xD
    ctx->pc = 0x2ccc00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x2ccc04: 0x104000c6  beqz        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x2CCC04u;
    {
        const bool branch_taken_0x2ccc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC04u;
        // 0x2ccc08: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc04) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCC0Cu;
    // 0x2ccc0c: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x2ccc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2ccc10: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2CCC10u;
    {
        const bool branch_taken_0x2ccc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC10u;
        // 0x2ccc14: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc10) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCC18u;
    // 0x2ccc18: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2ccc18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ccc1c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2ccc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2ccc20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCC20u;
    {
        const bool branch_taken_0x2ccc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC20u;
        // 0x2ccc24: 0x30a4ffff  andi        $a0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc20) {
            ctx->pc = 0x2CCC34u;
            goto label_2ccc34;
        }
    }
    ctx->pc = 0x2CCC28u;
    // 0x2ccc28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ccc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ccc2c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2CCC2Cu;
    {
        const bool branch_taken_0x2ccc2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CCC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC2Cu;
        // 0x2ccc30: 0x2c82001e  sltiu       $v0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc2c) {
            ctx->pc = 0x2CCC60u;
            goto label_2ccc60;
        }
    }
    ctx->pc = 0x2CCC34u;
label_2ccc34:
    // 0x2ccc34: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x2ccc34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2ccc38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ccc38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ccc3c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2ccc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2ccc40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ccc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ccc44: 0x8c638554  lw          $v1, -0x7AAC($v1)
    ctx->pc = 0x2ccc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935892)));
    // 0x2ccc48: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x2ccc48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2ccc4c: 0x546000b4  bnel        $v1, $zero, . + 4 + (0xB4 << 2)
    ctx->pc = 0x2CCC4Cu;
    {
        const bool branch_taken_0x2ccc4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccc4c) {
            ctx->pc = 0x2CCC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCC4Cu;
            // 0x2ccc50: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCC54u;
    // 0x2ccc54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CCC54u;
    {
        const bool branch_taken_0x2ccc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC54u;
        // 0x2ccc58: 0x96020006  lhu         $v0, 0x6($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc54) {
            ctx->pc = 0x2CCC6Cu;
            goto label_2ccc6c;
        }
    }
    ctx->pc = 0x2CCC5Cu;
    // 0x2ccc5c: 0x0  nop
    ctx->pc = 0x2ccc5cu;
    // NOP
label_2ccc60:
    // 0x2ccc60: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x2CCC60u;
    {
        const bool branch_taken_0x2ccc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC60u;
        // 0x2ccc64: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc60) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCC68u;
    // 0x2ccc68: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x2ccc68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_2ccc6c:
    // 0x2ccc6c: 0x2c420018  sltiu       $v0, $v0, 0x18
    ctx->pc = 0x2ccc6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x2ccc70: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x2CCC70u;
    {
        const bool branch_taken_0x2ccc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC70u;
        // 0x2ccc74: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc70) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCC78u;
    // 0x2ccc78: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x2ccc78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ccc7c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x2CCC7Cu;
    {
        const bool branch_taken_0x2ccc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC7Cu;
        // 0x2ccc80: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc7c) {
            ctx->pc = 0x2CCEF4u;
            goto label_2ccef4;
        }
    }
    ctx->pc = 0x2CCC84u;
    // 0x2ccc84: 0x0  nop
    ctx->pc = 0x2ccc84u;
    // NOP
label_2ccc88:
    // 0x2ccc88: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x2CCC88u;
    {
        const bool branch_taken_0x2ccc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC88u;
        // 0x2ccc8c: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc88) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCC90u;
label_2ccc90:
    // 0x2ccc90: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2ccc90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ccc94: 0x2463ffd5  addiu       $v1, $v1, -0x2B
    ctx->pc = 0x2ccc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967253));
    // 0x2ccc98: 0x2c620030  sltiu       $v0, $v1, 0x30
    ctx->pc = 0x2ccc98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x2ccc9c: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x2CCC9Cu;
    {
        const bool branch_taken_0x2ccc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccc9c) {
            ctx->pc = 0x2CCCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCC9Cu;
            // 0x2ccca0: 0x22a1821  addu        $v1, $s1, $t2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCE0Cu;
            goto label_2cce0c;
        }
    }
    ctx->pc = 0x2CCCA4u;
    // 0x2ccca4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ccca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ccca8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ccca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2cccac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cccacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cccb0: 0x8c63ef90  lw          $v1, -0x1070($v1)
    ctx->pc = 0x2cccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963088)));
    // 0x2cccb4: 0x600008  jr          $v1
    ctx->pc = 0x2CCCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CCCC0u: goto label_2cccc0;
            case 0x2CCCF0u: goto label_2cccf0;
            case 0x2CCD00u: goto label_2ccd00;
            case 0x2CCE08u: goto label_2cce08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCCB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CCCBCu;
    // 0x2cccbc: 0x0  nop
    ctx->pc = 0x2cccbcu;
    // NOP
label_2cccc0:
    // 0x2cccc0: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x2cccc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2cccc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cccc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cccc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cccc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccccc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cccccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cccd0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2cccd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cccd4: 0xc0b3436  jal         func_2CD0D8
    ctx->pc = 0x2CCCD4u;
    SET_GPR_U32(ctx, 31, 0x2CCCDCu);
    ctx->pc = 0x2CCCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCCD4u;
    // 0x2cccd8: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD0D8u, 0x2CCCD4u, 0x2CCCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCCDCu;
label_2cccdc:
    // 0x2cccdc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2cccdcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccce0: 0x1560008f  bnez        $t3, . + 4 + (0x8F << 2)
    ctx->pc = 0x2CCCE0u;
    {
        const bool branch_taken_0x2ccce0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCCE0u;
        // 0x2ccce4: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccce0) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCCE8u;
    // 0x2ccce8: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2CCCE8u;
    {
        const bool branch_taken_0x2ccce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCCE8u;
        // 0x2cccec: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccce8) {
            ctx->pc = 0x2CCEECu;
            goto label_2cceec;
        }
    }
    ctx->pc = 0x2CCCF0u;
label_2cccf0:
    // 0x2cccf0: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x2cccf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2cccf4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2cccf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cccf8: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x2CCCF8u;
    {
        const bool branch_taken_0x2cccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCCF8u;
        // 0x2cccfc: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cccf8) {
            ctx->pc = 0x2CCEECu;
            goto label_2cceec;
        }
    }
    ctx->pc = 0x2CCD00u;
label_2ccd00:
    // 0x2ccd00: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x2ccd00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2ccd04: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x2ccd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x2ccd08: 0x2293821  addu        $a3, $s1, $t1
    ctx->pc = 0x2ccd08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x2ccd0c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2ccd0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ccd10: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2ccd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2ccd14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ccd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ccd18: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2ccd18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ccd1c: 0x50400073  beql        $v0, $zero, . + 4 + (0x73 << 2)
    ctx->pc = 0x2CCD1Cu;
    {
        const bool branch_taken_0x2ccd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccd1c) {
            ctx->pc = 0x2CCD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCD1Cu;
            // 0x2ccd20: 0x240b0804  addiu       $t3, $zero, 0x804 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCEECu;
            goto label_2cceec;
        }
    }
    ctx->pc = 0x2CCD24u;
    // 0x2ccd24: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x2ccd24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ccd28: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2ccd28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ccd2c: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2ccd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2ccd30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ccd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ccd34: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2ccd34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ccd38: 0x5040006c  beql        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x2CCD38u;
    {
        const bool branch_taken_0x2ccd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccd38) {
            ctx->pc = 0x2CCD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCD38u;
            // 0x2ccd3c: 0x240b0804  addiu       $t3, $zero, 0x804 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCEECu;
            goto label_2cceec;
        }
    }
    ctx->pc = 0x2CCD40u;
    // 0x2ccd40: 0x24e30002  addiu       $v1, $a3, 0x2
    ctx->pc = 0x2ccd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x2ccd44: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2ccd44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ccd48: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2ccd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2ccd4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ccd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ccd50: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2ccd50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ccd54: 0x50400065  beql        $v0, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x2CCD54u;
    {
        const bool branch_taken_0x2ccd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccd54) {
            ctx->pc = 0x2CCD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCD54u;
            // 0x2ccd58: 0x240b0804  addiu       $t3, $zero, 0x804 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCEECu;
            goto label_2cceec;
        }
    }
    ctx->pc = 0x2CCD5Cu;
    // 0x2ccd5c: 0x24e90003  addiu       $t1, $a3, 0x3
    ctx->pc = 0x2ccd5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x2ccd60: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x2ccd60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ccd64: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2ccd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2ccd68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ccd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ccd6c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2ccd6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ccd70: 0x5040005e  beql        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x2CCD70u;
    {
        const bool branch_taken_0x2ccd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccd70) {
            ctx->pc = 0x2CCD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCD70u;
            // 0x2ccd74: 0x240b0804  addiu       $t3, $zero, 0x804 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCEECu;
            goto label_2cceec;
        }
    }
    ctx->pc = 0x2CCD78u;
    // 0x2ccd78: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x2ccd78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ccd7c: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x2ccd7cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ccd80: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ccd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ccd84: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x2ccd84u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ccd88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ccd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ccd8c: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x2ccd8cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ccd90: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ccd90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ccd94: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ccd94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ccd98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ccd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ccd9c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ccd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ccda0: 0x2445fdf0  addiu       $a1, $v0, -0x210
    ctx->pc = 0x2ccda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966768));
    // 0x2ccda4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ccda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ccda8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ccda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ccdac: 0x2ca20018  sltiu       $v0, $a1, 0x18
    ctx->pc = 0x2ccdacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x2ccdb0: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2CCDB0u;
    {
        const bool branch_taken_0x2ccdb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCDB0u;
        // 0x2ccdb4: 0x2463fdf0  addiu       $v1, $v1, -0x210 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccdb0) {
            ctx->pc = 0x2CCEE8u;
            goto label_2ccee8;
        }
    }
    ctx->pc = 0x2CCDB8u;
    // 0x2ccdb8: 0x2c62003c  sltiu       $v0, $v1, 0x3C
    ctx->pc = 0x2ccdb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x2ccdbc: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x2CCDBCu;
    {
        const bool branch_taken_0x2ccdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccdbc) {
            ctx->pc = 0x2CCDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCDBCu;
            // 0x2ccdc0: 0x240b0804  addiu       $t3, $zero, 0x804 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCEECu;
            goto label_2cceec;
        }
    }
    ctx->pc = 0x2CCDC4u;
    // 0x2ccdc4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2ccdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2ccdc8: 0x25490005  addiu       $t1, $t2, 0x5
    ctx->pc = 0x2ccdc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 5));
    // 0x2ccdcc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2ccdccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ccdd0: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x2ccdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x2ccdd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ccdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ccdd8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ccdd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccddc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ccddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ccde0: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x2ccde0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ccde4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2ccde4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2ccde8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2ccde8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2ccdec: 0x90e3ffff  lbu         $v1, -0x1($a3)
    ctx->pc = 0x2ccdecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967295)));
    // 0x2ccdf0: 0x22023  negu        $a0, $v0
    ctx->pc = 0x2ccdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2ccdf4: 0x3863002d  xori        $v1, $v1, 0x2D
    ctx->pc = 0x2ccdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)45);
    // 0x2ccdf8: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x2ccdf8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2ccdfc: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2CCDFCu;
    {
        const bool branch_taken_0x2ccdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCDFCu;
        // 0x2cce00: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccdfc) {
            ctx->pc = 0x2CCEECu;
            goto label_2cceec;
        }
    }
    ctx->pc = 0x2CCE04u;
    // 0x2cce04: 0x0  nop
    ctx->pc = 0x2cce04u;
    // NOP
label_2cce08:
    // 0x2cce08: 0x22a1821  addu        $v1, $s1, $t2
    ctx->pc = 0x2cce08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
label_2cce0c:
    // 0x2cce0c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2cce0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cce10: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cce10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cce14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cce14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cce18: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cce18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cce1c: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x2CCE1Cu;
    {
        const bool branch_taken_0x2cce1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cce1c) {
            ctx->pc = 0x2CCE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCE1Cu;
            // 0x2cce20: 0x240b0804  addiu       $t3, $zero, 0x804 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCEECu;
            goto label_2cceec;
        }
    }
    ctx->pc = 0x2CCE24u;
    // 0x2cce24: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2cce24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cce28: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2cce28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cce2c: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cce30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cce30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cce34: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cce34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cce38: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2CCE38u;
    {
        const bool branch_taken_0x2cce38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cce38) {
            ctx->pc = 0x2CCE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCE38u;
            // 0x2cce3c: 0x240b0804  addiu       $t3, $zero, 0x804 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCEECu;
            goto label_2cceec;
        }
    }
    ctx->pc = 0x2CCE40u;
    // 0x2cce40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cce40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cce44: 0x11020006  beq         $t0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CCE44u;
    {
        const bool branch_taken_0x2cce44 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CCE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE44u;
        // 0x2cce48: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce44) {
            ctx->pc = 0x2CCE60u;
            goto label_2cce60;
        }
    }
    ctx->pc = 0x2CCE4Cu;
    // 0x2cce4c: 0x51020016  beql        $t0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CCE4Cu;
    {
        const bool branch_taken_0x2cce4c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cce4c) {
            ctx->pc = 0x2CCE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CCE4Cu;
            // 0x2cce50: 0x90630000  lbu         $v1, 0x0($v1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CCEA8u;
            goto label_2ccea8;
        }
    }
    ctx->pc = 0x2CCE54u;
    // 0x2cce54: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2CCE54u;
    {
        const bool branch_taken_0x2cce54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE54u;
        // 0x2cce58: 0x240b0804  addiu       $t3, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce54) {
            ctx->pc = 0x2CCEECu;
            goto label_2cceec;
        }
    }
    ctx->pc = 0x2CCE5Cu;
    // 0x2cce5c: 0x0  nop
    ctx->pc = 0x2cce5cu;
    // NOP
label_2cce60:
    // 0x2cce60: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2cce60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cce64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2cce64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cce68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cce6c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2cce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2cce70: 0x2442fe20  addiu       $v0, $v0, -0x1E0
    ctx->pc = 0x2cce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966816));
    // 0x2cce74: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x2cce74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cce78: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2cce78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cce7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cce80: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2cce80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2cce84: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2cce84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2cce88: 0x2c63003c  sltiu       $v1, $v1, 0x3C
    ctx->pc = 0x2cce88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x2cce8c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CCE8Cu;
    {
        const bool branch_taken_0x2cce8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE8Cu;
        // 0x2cce90: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce8c) {
            ctx->pc = 0x2CCEE8u;
            goto label_2ccee8;
        }
    }
    ctx->pc = 0x2CCE94u;
    // 0x2cce94: 0x25490002  addiu       $t1, $t2, 0x2
    ctx->pc = 0x2cce94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x2cce98: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2cce98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cce9c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2CCE9Cu;
    {
        const bool branch_taken_0x2cce9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCE9Cu;
        // 0x2ccea0: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cce9c) {
            ctx->pc = 0x2CCEECu;
            goto label_2cceec;
        }
    }
    ctx->pc = 0x2CCEA4u;
    // 0x2ccea4: 0x0  nop
    ctx->pc = 0x2ccea4u;
    // NOP
label_2ccea8:
    // 0x2ccea8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ccea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cceac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cceacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cceb0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2cceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2cceb4: 0x2442fe20  addiu       $v0, $v0, -0x1E0
    ctx->pc = 0x2cceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966816));
    // 0x2cceb8: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x2cceb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ccebc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2ccebcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ccec0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ccec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ccec4: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2ccec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x2ccec8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ccec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ccecc: 0x2c63003c  sltiu       $v1, $v1, 0x3C
    ctx->pc = 0x2cceccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x2cced0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CCED0u;
    {
        const bool branch_taken_0x2cced0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCED0u;
        // 0x2cced4: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cced0) {
            ctx->pc = 0x2CCEE8u;
            goto label_2ccee8;
        }
    }
    ctx->pc = 0x2CCED8u;
    // 0x2cced8: 0x25490002  addiu       $t1, $t2, 0x2
    ctx->pc = 0x2cced8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x2ccedc: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2ccedcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ccee0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CCEE0u;
    {
        const bool branch_taken_0x2ccee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCEE0u;
        // 0x2ccee4: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccee0) {
            ctx->pc = 0x2CCEECu;
            goto label_2cceec;
        }
    }
    ctx->pc = 0x2CCEE8u;
label_2ccee8:
    // 0x2ccee8: 0x240b0804  addiu       $t3, $zero, 0x804
    ctx->pc = 0x2ccee8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
label_2cceec:
    // 0x2cceec: 0x1560000c  bnez        $t3, . + 4 + (0xC << 2)
    ctx->pc = 0x2CCEECu;
    {
        const bool branch_taken_0x2cceec = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCEECu;
        // 0x2ccef0: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cceec) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCEF4u;
label_2ccef4:
    // 0x2ccef4: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x2ccef4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ccef8: 0x152102b  sltu        $v0, $t2, $s2
    ctx->pc = 0x2ccef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2ccefc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCEFCu;
    {
        const bool branch_taken_0x2ccefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccefc) {
            ctx->pc = 0x2CCF10u;
            goto label_2ccf10;
        }
    }
    ctx->pc = 0x2CCF04u;
    // 0x2ccf04: 0x1260ff62  beqz        $s3, . + 4 + (-0x9E << 2)
    ctx->pc = 0x2CCF04u;
    {
        const bool branch_taken_0x2ccf04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF04u;
        // 0x2ccf08: 0x22a1021  addu        $v0, $s1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf04) {
            ctx->pc = 0x2CCC90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ccc90;
        }
    }
    ctx->pc = 0x2CCF0Cu;
    // 0x2ccf0c: 0x240b0804  addiu       $t3, $zero, 0x804
    ctx->pc = 0x2ccf0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
label_2ccf10:
    // 0x2ccf10: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCF10u;
    {
        const bool branch_taken_0x2ccf10 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF10u;
        // 0x2ccf14: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf10) {
            ctx->pc = 0x2CCF20u;
            goto label_2ccf20;
        }
    }
    ctx->pc = 0x2CCF18u;
    // 0x2ccf18: 0xc0b33d0  jal         func_2CCF40
    ctx->pc = 0x2CCF18u;
    SET_GPR_U32(ctx, 31, 0x2CCF20u);
    ctx->pc = 0x2CCF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CCF18u;
    // 0x2ccf1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCF40u, 0x2CCF18u, 0x2CCF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF20u;
label_2ccf20:
    // 0x2ccf20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ccf20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ccf24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ccf24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ccf28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ccf28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ccf2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2ccf2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ccf30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ccf30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ccf34: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCF34u;
        // 0x2ccf38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCF3Cu;
    // 0x2ccf3c: 0x0  nop
    ctx->pc = 0x2ccf3cu;
    // NOP
    if (ctx->pc == 0x2ccf3cu) { ctx->pc = 0x2ccf40u; }
}
