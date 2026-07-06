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

// Function: sub_001014C8
// Address: 0x1014c8 - 0x1016b0
void sub_001014C8_0x1014c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001014C8_0x1014c8");
#endif

    switch (ctx->pc) {
        case 0x10158cu: goto label_10158c;
        default: break;
    }

    ctx->pc = 0x1014c8u;

    // 0x1014c8: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1014c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1014cc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1014ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1014d0: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x1014d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1014d4: 0x76c03  sra         $t5, $a3, 16
    ctx->pc = 0x1014d4u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 7), 16));
    // 0x1014d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1014d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1014dc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1014dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1014e0: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x1014e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x1014e4: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x1014e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x1014e8: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x1014e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x1014ec: 0x66403  sra         $t4, $a2, 16
    ctx->pc = 0x1014ecu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1014f0: 0x87c03  sra         $t7, $t0, 16
    ctx->pc = 0x1014f0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 8), 16));
    // 0x1014f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1014f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1014f8: 0x53c03  sra         $a3, $a1, 16
    ctx->pc = 0x1014f8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1014fc: 0x9c403  sra         $t8, $t1, 16
    ctx->pc = 0x1014fcu;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 9), 16));
    // 0x101500: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x101500u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x101504: 0xb4403  sra         $t0, $t3, 16
    ctx->pc = 0x101504u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 11), 16));
    // 0x101508: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x101508u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10150c: 0x2da2003b  sltiu       $v0, $t5, 0x3B
    ctx->pc = 0x10150cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x101510: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x101510u;
    {
        const bool branch_taken_0x101510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101510u;
        // 0x101514: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101510) {
            ctx->pc = 0x101574u;
            goto label_101574;
        }
    }
    ctx->pc = 0x101518u;
    // 0x101518: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x101518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x10151c: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x10151cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x101520: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x101520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
    // 0x101524: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x101524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x101528: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x101528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10152c: 0x800008  jr          $a0
    ctx->pc = 0x10152Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101534u: goto label_101534;
            case 0x101540u: goto label_101540;
            case 0x101554u: goto label_101554;
            case 0x101560u: goto label_101560;
            case 0x10156Cu: goto label_10156c;
            case 0x101574u: goto label_101574;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10152Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x101534u;
label_101534:
    // 0x101534: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x101534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x101538: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x101538u;
    {
        const bool branch_taken_0x101538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101538u;
        // 0x10153c: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101538) {
            ctx->pc = 0x101574u;
            goto label_101574;
        }
    }
    ctx->pc = 0x101540u;
label_101540:
    // 0x101540: 0x1481818  mult        $v1, $t2, $t0
    ctx->pc = 0x101540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x101544: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x101544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x101548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10154c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10154Cu;
    {
        const bool branch_taken_0x10154c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10154Cu;
        // 0x101550: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10154c) {
            ctx->pc = 0x101574u;
            goto label_101574;
        }
    }
    ctx->pc = 0x101554u;
label_101554:
    // 0x101554: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x101554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x101558: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x101558u;
    {
        const bool branch_taken_0x101558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101558u;
        // 0x10155c: 0x230c3  sra         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101558) {
            ctx->pc = 0x101574u;
            goto label_101574;
        }
    }
    ctx->pc = 0x101560u;
label_101560:
    // 0x101560: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x101560u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x101564: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x101564u;
    {
        const bool branch_taken_0x101564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101564u;
        // 0x101568: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101564) {
            ctx->pc = 0x101574u;
            goto label_101574;
        }
    }
    ctx->pc = 0x10156Cu;
label_10156c:
    // 0x10156c: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x10156cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x101570: 0x23143  sra         $a2, $v0, 5
    ctx->pc = 0x101570u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 5));
label_101574:
    // 0x101574: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x101574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x101578: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x101578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x10157c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10157Cu;
    {
        const bool branch_taken_0x10157c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10157Cu;
        // 0x101580: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10157c) {
            ctx->pc = 0x101594u;
            goto label_101594;
        }
    }
    ctx->pc = 0x101584u;
    // 0x101584: 0xc043e52  jal         func_10F948
    ctx->pc = 0x101584u;
    SET_GPR_U32(ctx, 31, 0x10158Cu);
    ctx->pc = 0x101588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101584u;
    // 0x101588: 0x24849b90  addiu       $a0, $a0, -0x6470 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x101584u, 0x10158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10158Cu;
label_10158c:
    // 0x10158c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x10158Cu;
    {
        const bool branch_taken_0x10158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10158Cu;
        // 0x101590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10158c) {
            ctx->pc = 0x1016A0u;
            goto label_1016a0;
        }
    }
    ctx->pc = 0x101594u;
label_101594:
    // 0x101594: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x101594u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x101598: 0x30c37fff  andi        $v1, $a2, 0x7FFF
    ctx->pc = 0x101598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x10159c: 0x7dc20050  sq          $v0, 0x50($t6)
    ctx->pc = 0x10159cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 80), GPR_VEC(ctx, 2));
    // 0x1015a0: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x1015a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1015a4: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1015a4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x1015a8: 0x3c07f3ff  lui         $a3, 0xF3FF
    ctx->pc = 0x1015a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62463 << 16));
    // 0x1015ac: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1015acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1015b0: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1015b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1015b4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1015b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1015b8: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1015b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1015bc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1015bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1015c0: 0xddc40050  ld          $a0, 0x50($t6)
    ctx->pc = 0x1015c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 80)));
    // 0x1015c4: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1015c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1015c8: 0xddc50000  ld          $a1, 0x0($t6)
    ctx->pc = 0x1015c8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1015cc: 0xc643c  dsll32      $t4, $t4, 16
    ctx->pc = 0x1015ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 16));
    // 0x1015d0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1015d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1015d4: 0xddcb0008  ld          $t3, 0x8($t6)
    ctx->pc = 0x1015d4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x1015d8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1015d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1015dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1015dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1015e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1015e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1015e4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1015e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1015e8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1015e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1015ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1015ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1015f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1015f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1015f4: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1015f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1015f8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1015f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1015fc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1015fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x101600: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x101600u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x101604: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x101604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x101608: 0x6343b  dsra        $a2, $a2, 16
    ctx->pc = 0x101608u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> 16);
    // 0x10160c: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x10160cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
    // 0x101610: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x101610u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x101614: 0xcc3025  or          $a2, $a2, $t4
    ctx->pc = 0x101614u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
    // 0x101618: 0x8443b  dsra        $t0, $t0, 16
    ctx->pc = 0x101618u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> 16);
    // 0x10161c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x10161cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x101620: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x101620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x101624: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x101624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x101628: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x101628u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10162c: 0x73b3c  dsll32      $a3, $a3, 12
    ctx->pc = 0x10162cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
    // 0x101630: 0xf4c3c  dsll32      $t1, $t7, 16
    ctx->pc = 0x101630u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) << (32 + 16));
    // 0x101634: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x101634u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x101638: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x101638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x10163c: 0x1485025  or          $t2, $t2, $t0
    ctx->pc = 0x10163cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x101640: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x101640u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x101644: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x101644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x101648: 0xd6e3c  dsll32      $t5, $t5, 24
    ctx->pc = 0x101648u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 24));
    // 0x10164c: 0x94c3b  dsra        $t1, $t1, 16
    ctx->pc = 0x10164cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> 16);
    // 0x101650: 0x18643c  dsll32      $t4, $t8, 16
    ctx->pc = 0x101650u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) << (32 + 16));
    // 0x101654: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x101654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
    // 0x101658: 0x12c4825  or          $t1, $t1, $t4
    ctx->pc = 0x101658u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 12));
    // 0x10165c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x10165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x101660: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x101660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x101664: 0x24070052  addiu       $a3, $zero, 0x52
    ctx->pc = 0x101664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x101668: 0x24080053  addiu       $t0, $zero, 0x53
    ctx->pc = 0x101668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x10166c: 0xfdc40050  sd          $a0, 0x50($t6)
    ctx->pc = 0x10166cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 80), GPR_U64(ctx, 4));
    // 0x101670: 0xfdc50000  sd          $a1, 0x0($t6)
    ctx->pc = 0x101670u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 5));
    // 0x101674: 0xfdcb0008  sd          $t3, 0x8($t6)
    ctx->pc = 0x101674u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 11));
    // 0x101678: 0xfdc60010  sd          $a2, 0x10($t6)
    ctx->pc = 0x101678u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 16), GPR_U64(ctx, 6));
    // 0x10167c: 0xfdc20018  sd          $v0, 0x18($t6)
    ctx->pc = 0x10167cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 24), GPR_U64(ctx, 2));
    // 0x101680: 0xfdc90020  sd          $t1, 0x20($t6)
    ctx->pc = 0x101680u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 32), GPR_U64(ctx, 9));
    // 0x101684: 0xfdc30028  sd          $v1, 0x28($t6)
    ctx->pc = 0x101684u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 40), GPR_U64(ctx, 3));
    // 0x101688: 0xfdca0030  sd          $t2, 0x30($t6)
    ctx->pc = 0x101688u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 48), GPR_U64(ctx, 10));
    // 0x10168c: 0xfdc70038  sd          $a3, 0x38($t6)
    ctx->pc = 0x10168cu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 56), GPR_U64(ctx, 7));
    // 0x101690: 0xfdc80048  sd          $t0, 0x48($t6)
    ctx->pc = 0x101690u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 72), GPR_U64(ctx, 8));
    // 0x101694: 0xfdc00040  sd          $zero, 0x40($t6)
    ctx->pc = 0x101694u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 64), GPR_U64(ctx, 0));
    // 0x101698: 0xf  sync
    ctx->pc = 0x101698u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10169c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10169cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1016a0:
    // 0x1016a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1016a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1016a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1016A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1016A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016A4u;
        // 0x1016a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1016A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1016ACu;
    // 0x1016ac: 0x0  nop
    ctx->pc = 0x1016acu;
    // NOP
    if (ctx->pc == 0x1016acu) { ctx->pc = 0x1016b0u; }
}
