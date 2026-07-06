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

// Function: sub_0024C4F8
// Address: 0x24c4f8 - 0x24c608
void sub_0024C4F8_0x24c4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C4F8_0x24c4f8");
#endif

    switch (ctx->pc) {
        case 0x24c550u: goto label_24c550;
        case 0x24c560u: goto label_24c560;
        default: break;
    }

    ctx->pc = 0x24c4f8u;

    // 0x24c4f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x24c4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x24c4fc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x24c4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x24c500: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x24c500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x24c504: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x24c504u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c508: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24c508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x24c50c: 0x30d5ffff  andi        $s5, $a2, 0xFFFF
    ctx->pc = 0x24c50cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x24c510: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24c510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x24c514: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24c514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c518: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24c518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24c51c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24c51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x24c520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c524: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x24c524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x24c528: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24c528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24c52c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x24c52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x24c530: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24c530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24c534: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x24c534u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24c538: 0x12110027  beq         $s0, $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x24C538u;
    {
        const bool branch_taken_0x24c538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x24C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C538u;
        // 0x24c53c: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c538) {
            ctx->pc = 0x24C5D8u;
            goto label_24c5d8;
        }
    }
    ctx->pc = 0x24C540u;
    // 0x24c540: 0x8fb40000  lw          $s4, 0x0($sp)
    ctx->pc = 0x24c540u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c544: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x24c544u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c548: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x24c548u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x24c54c: 0x0  nop
    ctx->pc = 0x24c54cu;
    // NOP
label_24c550:
    // 0x24c550: 0x5455001f  bnel        $v0, $s5, . + 4 + (0x1F << 2)
    ctx->pc = 0x24C550u;
    {
        const bool branch_taken_0x24c550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x24c550) {
            ctx->pc = 0x24C554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C550u;
            // 0x24c554: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C5D0u;
            goto label_24c5d0;
        }
    }
    ctx->pc = 0x24C558u;
    // 0x24c558: 0xc08a254  jal         func_228950
    ctx->pc = 0x24C558u;
    SET_GPR_U32(ctx, 31, 0x24C560u);
    ctx->pc = 0x24C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C558u;
    // 0x24c55c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24C558u, 0x24C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C560u;
label_24c560:
    // 0x24c560: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24c560u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c564: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24c564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c568: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x24c568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x24c56c: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x24c56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x24c570: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x24c570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x24c574: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C574u;
    {
        const bool branch_taken_0x24c574 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x24C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C574u;
        // 0x24c578: 0x2e2200b  movn        $a0, $s7, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c574) {
            ctx->pc = 0x24C58Cu;
            goto label_24c58c;
        }
    }
    ctx->pc = 0x24C57Cu;
    // 0x24c57c: 0x2851826  xor         $v1, $s4, $a1
    ctx->pc = 0x24c57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 5));
    // 0x24c580: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x24c580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24c584: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24C584u;
    {
        const bool branch_taken_0x24c584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C584u;
        // 0x24c588: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c584) {
            ctx->pc = 0x24C5A8u;
            goto label_24c5a8;
        }
    }
    ctx->pc = 0x24C58Cu;
label_24c58c:
    // 0x24c58c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c590: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C590u;
    {
        const bool branch_taken_0x24c590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24c590) {
            ctx->pc = 0x24C5A0u;
            goto label_24c5a0;
        }
    }
    ctx->pc = 0x24C598u;
    // 0x24c598: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24C598u;
    {
        const bool branch_taken_0x24c598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C598u;
        // 0x24c59c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c598) {
            ctx->pc = 0x24C5A8u;
            goto label_24c5a8;
        }
    }
    ctx->pc = 0x24C5A0u;
label_24c5a0:
    // 0x24c5a0: 0x54a2000b  bnel        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24C5A0u;
    {
        const bool branch_taken_0x24c5a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c5a0) {
            ctx->pc = 0x24C5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C5A0u;
            // 0x24c5a4: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C5D0u;
            goto label_24c5d0;
        }
    }
    ctx->pc = 0x24C5A8u;
label_24c5a8:
    // 0x24c5a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C5A8u;
    {
        const bool branch_taken_0x24c5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C5A8u;
        // 0x24c5ac: 0x92102a  slt         $v0, $a0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5a8) {
            ctx->pc = 0x24C5B8u;
            goto label_24c5b8;
        }
    }
    ctx->pc = 0x24C5B0u;
    // 0x24c5b0: 0x52c00007  beql        $s6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24C5B0u;
    {
        const bool branch_taken_0x24c5b0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c5b0) {
            ctx->pc = 0x24C5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C5B0u;
            // 0x24c5b4: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C5D0u;
            goto label_24c5d0;
        }
    }
    ctx->pc = 0x24C5B8u;
label_24c5b8:
    // 0x24c5b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C5B8u;
    {
        const bool branch_taken_0x24c5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c5b8) {
            ctx->pc = 0x24C5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C5B8u;
            // 0x24c5bc: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C5D0u;
            goto label_24c5d0;
        }
    }
    ctx->pc = 0x24C5C0u;
    // 0x24c5c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24c5c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c5c4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C5C4u;
    {
        const bool branch_taken_0x24c5c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C5C4u;
        // 0x24c5c8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5c4) {
            ctx->pc = 0x24C5D8u;
            goto label_24c5d8;
        }
    }
    ctx->pc = 0x24C5CCu;
    // 0x24c5cc: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x24c5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24c5d0:
    // 0x24c5d0: 0x5611ffdf  bnel        $s0, $s1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x24C5D0u;
    {
        const bool branch_taken_0x24c5d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x24c5d0) {
            ctx->pc = 0x24C5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C5D0u;
            // 0x24c5d4: 0x9602001a  lhu         $v0, 0x1A($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C550u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24c550;
        }
    }
    ctx->pc = 0x24C5D8u;
label_24c5d8:
    // 0x24c5d8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x24c5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c5dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24c5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24c5e0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24c5e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24c5e4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24c5e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24c5e8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24c5e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24c5ec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24c5ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24c5f0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24c5f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c5f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24c5f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c5f8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24c5f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c5fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24c5fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c600: 0x3e00008  jr          $ra
    ctx->pc = 0x24C600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C600u;
        // 0x24c604: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C608u;
}
