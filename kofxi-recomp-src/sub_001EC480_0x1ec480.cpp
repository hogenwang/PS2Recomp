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

// Function: sub_001EC480
// Address: 0x1ec480 - 0x1ec688
void sub_001EC480_0x1ec480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC480_0x1ec480");
#endif

    switch (ctx->pc) {
        case 0x1ec4c8u: goto label_1ec4c8;
        case 0x1ec4d8u: goto label_1ec4d8;
        case 0x1ec4ecu: goto label_1ec4ec;
        case 0x1ec574u: goto label_1ec574;
        case 0x1ec5ecu: goto label_1ec5ec;
        default: break;
    }

    ctx->pc = 0x1ec480u;

    // 0x1ec480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ec484: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1ec484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1ec488: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ec488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ec48c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ec48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec490: 0x2a030801  slti        $v1, $s0, 0x801
    ctx->pc = 0x1ec490u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x1ec494: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1ec494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1ec498: 0xa3800a  movz        $s0, $a1, $v1
    ctx->pc = 0x1ec498u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x1ec49c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ec49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4a0: 0x24423cb8  addiu       $v0, $v0, 0x3CB8
    ctx->pc = 0x1ec4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15544));
    // 0x1ec4a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ec4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ec4a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ec4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ec4acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ec4b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4b4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ec4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ec4b8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ec4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1ec4bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ec4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ec4c0: 0xc049c48  jal         func_127120
    ctx->pc = 0x1EC4C0u;
    SET_GPR_U32(ctx, 31, 0x1EC4C8u);
    ctx->pc = 0x1EC4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC4C0u;
    // 0x1ec4c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1EC4C0u, 0x1EC4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC4C8u;
label_1ec4c8:
    // 0x1ec4c8: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EC4C8u;
    {
        const bool branch_taken_0x1ec4c8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1EC4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4C8u;
        // 0x1ec4cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4c8) {
            ctx->pc = 0x1EC53Cu;
            goto label_1ec53c;
        }
    }
    ctx->pc = 0x1EC4D0u;
    // 0x1ec4d0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ec4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ec4d4: 0x2453e5f8  addiu       $s3, $v0, -0x1A08
    ctx->pc = 0x1ec4d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960632));
label_1ec4d8:
    // 0x1ec4d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ec4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4dc: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x1ec4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x1ec4e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ec4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec4e4: 0xc079fb8  jal         func_1E7EE0
    ctx->pc = 0x1EC4E4u;
    SET_GPR_U32(ctx, 31, 0x1EC4ECu);
    ctx->pc = 0x1EC4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC4E4u;
    // 0x1ec4e8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7EE0u, 0x1EC4E4u, 0x1EC4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC4ECu;
label_1ec4ec:
    // 0x1ec4ec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EC4ECu;
    {
        const bool branch_taken_0x1ec4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC4ECu;
        // 0x1ec4f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4ec) {
            ctx->pc = 0x1EC530u;
            goto label_1ec530;
        }
    }
    ctx->pc = 0x1EC4F4u;
    // 0x1ec4f4: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x1ec4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
    // 0x1ec4f8: 0x92230007  lbu         $v1, 0x7($s1)
    ctx->pc = 0x1ec4f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x1ec4fc: 0xa2430028  sb          $v1, 0x28($s2)
    ctx->pc = 0x1ec4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec500: 0x92250009  lbu         $a1, 0x9($s1)
    ctx->pc = 0x1ec500u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x1ec504: 0x92230008  lbu         $v1, 0x8($s1)
    ctx->pc = 0x1ec504u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ec508: 0x9224000a  lbu         $a0, 0xA($s1)
    ctx->pc = 0x1ec508u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1ec50c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1ec50cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1ec510: 0x9226000b  lbu         $a2, 0xB($s1)
    ctx->pc = 0x1ec510u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x1ec514: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1ec514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1ec518: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1ec518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1ec51c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ec51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ec520: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1ec520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1ec524: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ec524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ec528: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC528u;
    {
        const bool branch_taken_0x1ec528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC528u;
        // 0x1ec52c: 0xae43002c  sw          $v1, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec528) {
            ctx->pc = 0x1EC53Cu;
            goto label_1ec53c;
        }
    }
    ctx->pc = 0x1EC530u;
label_1ec530:
    // 0x1ec530: 0x1e00ffe9  bgtz        $s0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1EC530u;
    {
        const bool branch_taken_0x1ec530 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1EC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC530u;
        // 0x1ec534: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec530) {
            ctx->pc = 0x1EC4D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ec4d8;
        }
    }
    ctx->pc = 0x1EC538u;
    // 0x1ec538: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ec538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec53c:
    // 0x1ec53c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ec53cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec540: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ec540u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec544: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ec544u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec548: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ec548u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ec54c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ec54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec550: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC550u;
        // 0x1ec554: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC558u;
    // 0x1ec558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec55c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ec55cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec560: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ec560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec564: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ec564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ec56c: 0xc07b1cc  jal         func_1EC730
    ctx->pc = 0x1EC56Cu;
    SET_GPR_U32(ctx, 31, 0x1EC574u);
    ctx->pc = 0x1EC570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC56Cu;
    // 0x1ec570: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC730u, 0x1EC56Cu, 0x1EC574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC574u;
label_1ec574:
    // 0x1ec574: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC574u;
    {
        const bool branch_taken_0x1ec574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC574u;
        // 0x1ec578: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec574) {
            ctx->pc = 0x1EC588u;
            goto label_1ec588;
        }
    }
    ctx->pc = 0x1EC57Cu;
    // 0x1ec57c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1EC57Cu;
    {
        const bool branch_taken_0x1ec57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC57Cu;
        // 0x1ec580: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec57c) {
            ctx->pc = 0x1EC5C4u;
            goto label_1ec5c4;
        }
    }
    ctx->pc = 0x1EC584u;
    // 0x1ec584: 0x0  nop
    ctx->pc = 0x1ec584u;
    // NOP
label_1ec588:
    // 0x1ec588: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x1ec588u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec58c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ec58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ec590: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x1ec590u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1ec594: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ec594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ec598: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ec598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ec59c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ec59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ec5a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1ec5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1ec5a4: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x1ec5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1ec5a8: 0x8c23e6d0  lw          $v1, -0x1930($at)
    ctx->pc = 0x1ec5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960848)));
    // 0x1ec5ac: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC5ACu;
    {
        const bool branch_taken_0x1ec5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1EC5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5ACu;
        // 0x1ec5b0: 0x32140  sll         $a0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5ac) {
            ctx->pc = 0x1EC5C4u;
            goto label_1ec5c4;
        }
    }
    ctx->pc = 0x1EC5B4u;
    // 0x1ec5b4: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x1ec5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ec5b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ec5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ec5bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ec5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec5c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ec5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ec5c4:
    // 0x1ec5c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5C8u;
        // 0x1ec5cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC5D0u;
    // 0x1ec5d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec5d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ec5d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5d8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ec5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ec5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec5e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ec5e4: 0xc07b1cc  jal         func_1EC730
    ctx->pc = 0x1EC5E4u;
    SET_GPR_U32(ctx, 31, 0x1EC5ECu);
    ctx->pc = 0x1EC5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC5E4u;
    // 0x1ec5e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC730u, 0x1EC5E4u, 0x1EC5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC5ECu;
label_1ec5ec:
    // 0x1ec5ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC5ECu;
    {
        const bool branch_taken_0x1ec5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5ECu;
        // 0x1ec5f0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5ec) {
            ctx->pc = 0x1EC600u;
            goto label_1ec600;
        }
    }
    ctx->pc = 0x1EC5F4u;
    // 0x1ec5f4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1EC5F4u;
    {
        const bool branch_taken_0x1ec5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC5F4u;
        // 0x1ec5f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec5f4) {
            ctx->pc = 0x1EC678u;
            goto label_1ec678;
        }
    }
    ctx->pc = 0x1EC5FCu;
    // 0x1ec5fc: 0x0  nop
    ctx->pc = 0x1ec5fcu;
    // NOP
label_1ec600:
    // 0x1ec600: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x1ec600u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec604: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x1ec604u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1ec608: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1ec608u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ec60c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ec60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ec610: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ec610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ec614: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ec614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ec618: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1ec618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1ec61c: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x1ec61cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1ec620: 0x8c23e6d0  lw          $v1, -0x1930($at)
    ctx->pc = 0x1ec620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960848)));
    // 0x1ec624: 0x10660014  beq         $v1, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EC624u;
    {
        const bool branch_taken_0x1ec624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1EC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC624u;
        // 0x1ec628: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec624) {
            ctx->pc = 0x1EC678u;
            goto label_1ec678;
        }
    }
    ctx->pc = 0x1EC62Cu;
    // 0x1ec62c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ec62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ec630: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ec630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ec634: 0x8c84e7d0  lw          $a0, -0x1830($a0)
    ctx->pc = 0x1ec634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x1ec638: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x1ec638u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x1ec63c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1ec63cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ec640: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ec640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ec644: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1ec644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1ec648: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ec648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ec64c: 0x8c63e6c0  lw          $v1, -0x1940($v1)
    ctx->pc = 0x1ec64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960832)));
    // 0x1ec650: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x1ec650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1ec654: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1ec654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ec658: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1ec658u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ec65c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EC65Cu;
    {
        const bool branch_taken_0x1ec65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec65c) {
            ctx->pc = 0x1EC660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC65Cu;
            // 0x1ec660: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC664u;
            goto label_1ec664;
        }
    }
    ctx->pc = 0x1EC664u;
label_1ec664:
    // 0x1ec664: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ec664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ec668: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ec668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ec66c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ec66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ec670: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1ec670u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ec674: 0x1012  mflo        $v0
    ctx->pc = 0x1ec674u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1ec678:
    // 0x1ec678: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec67c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC67Cu;
        // 0x1ec680: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC684u;
    // 0x1ec684: 0x0  nop
    ctx->pc = 0x1ec684u;
    // NOP
    if (ctx->pc == 0x1ec684u) { ctx->pc = 0x1ec688u; }
}
