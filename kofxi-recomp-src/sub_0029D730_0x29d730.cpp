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

// Function: sub_0029D730
// Address: 0x29d730 - 0x29d970
void sub_0029D730_0x29d730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D730_0x29d730");
#endif

    switch (ctx->pc) {
        case 0x29d754u: goto label_29d754;
        case 0x29d788u: goto label_29d788;
        case 0x29d7ecu: goto label_29d7ec;
        case 0x29d820u: goto label_29d820;
        case 0x29d870u: goto label_29d870;
        case 0x29d8a0u: goto label_29d8a0;
        case 0x29d8a4u: goto label_29d8a4;
        case 0x29d8e4u: goto label_29d8e4;
        case 0x29d918u: goto label_29d918;
        case 0x29d92cu: goto label_29d92c;
        case 0x29d93cu: goto label_29d93c;
        case 0x29d954u: goto label_29d954;
        default: break;
    }

    ctx->pc = 0x29d730u;

    // 0x29d730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29d730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29d734: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x29d734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x29d738: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29d738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29d73c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29d73cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d740: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29d740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29d744: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29d744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d748: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x29d748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x29d74c: 0xc0a5a28  jal         func_2968A0
    ctx->pc = 0x29D74Cu;
    SET_GPR_U32(ctx, 31, 0x29D754u);
    ctx->pc = 0x29D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D74Cu;
    // 0x29d750: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2968A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2968A0u, 0x29D74Cu, 0x29D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D754u;
label_29d754:
    // 0x29d754: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x29d754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d758: 0x1080007e  beqz        $a0, . + 4 + (0x7E << 2)
    ctx->pc = 0x29D758u;
    {
        const bool branch_taken_0x29d758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D758u;
        // 0x29d75c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d758) {
            ctx->pc = 0x29D954u;
            goto label_29d954;
        }
    }
    ctx->pc = 0x29D760u;
    // 0x29d760: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x29d760u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29d764: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D764u;
    {
        const bool branch_taken_0x29d764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D764u;
        // 0x29d768: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d764) {
            ctx->pc = 0x29D774u;
            goto label_29d774;
        }
    }
    ctx->pc = 0x29D76Cu;
    // 0x29d76c: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D76Cu;
    {
        const bool branch_taken_0x29d76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x29D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D76Cu;
        // 0x29d770: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d76c) {
            ctx->pc = 0x29D77Cu;
            goto label_29d77c;
        }
    }
    ctx->pc = 0x29D774u;
label_29d774:
    // 0x29d774: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x29D774u;
    {
        const bool branch_taken_0x29d774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D774u;
        // 0x29d778: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d774) {
            ctx->pc = 0x29D954u;
            goto label_29d954;
        }
    }
    ctx->pc = 0x29D77Cu;
label_29d77c:
    // 0x29d77c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x29d77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29d780: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x29D780u;
    SET_GPR_U32(ctx, 31, 0x29D788u);
    ctx->pc = 0x29D784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D780u;
    // 0x29d784: 0x24a5c670  addiu       $a1, $a1, -0x3990 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x29D780u, 0x29D788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D788u;
label_29d788:
    // 0x29d788: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D788u;
    {
        const bool branch_taken_0x29d788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D788u;
        // 0x29d78c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d788) {
            ctx->pc = 0x29D79Cu;
            goto label_29d79c;
        }
    }
    ctx->pc = 0x29D790u;
    // 0x29d790: 0x24050076  addiu       $a1, $zero, 0x76
    ctx->pc = 0x29d790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x29d794: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x29D794u;
    {
        const bool branch_taken_0x29d794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D794u;
        // 0x29d798: 0x2406006b  addiu       $a2, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d794) {
            ctx->pc = 0x29D90Cu;
            goto label_29d90c;
        }
    }
    ctx->pc = 0x29D79Cu;
label_29d79c:
    // 0x29d79c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x29d79cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d7a0: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x29d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x29d7a4: 0x24a3000b  addiu       $v1, $a1, 0xB
    ctx->pc = 0x29d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 11));
    // 0x29d7a8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x29d7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x29d7ac: 0x80a4000b  lb          $a0, 0xB($a1)
    ctx->pc = 0x29d7acu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x29d7b0: 0x54820068  bnel        $a0, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x29D7B0u;
    {
        const bool branch_taken_0x29d7b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x29d7b0) {
            ctx->pc = 0x29D7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D7B0u;
            // 0x29d7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D954u;
            goto label_29d954;
        }
    }
    ctx->pc = 0x29D7B8u;
    // 0x29d7b8: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x29d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x29d7bc: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x29d7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x29d7c0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x29d7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x29d7c4: 0x80a3000c  lb          $v1, 0xC($a1)
    ctx->pc = 0x29d7c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x29d7c8: 0x14640062  bne         $v1, $a0, . + 4 + (0x62 << 2)
    ctx->pc = 0x29D7C8u;
    {
        const bool branch_taken_0x29d7c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x29D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7C8u;
        // 0x29d7cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d7c8) {
            ctx->pc = 0x29D954u;
            goto label_29d954;
        }
    }
    ctx->pc = 0x29D7D0u;
    // 0x29d7d0: 0x24a2000d  addiu       $v0, $a1, 0xD
    ctx->pc = 0x29d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
    // 0x29d7d4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x29d7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29d7d8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x29d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x29d7dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29d7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d7e0: 0x24a5c680  addiu       $a1, $a1, -0x3980
    ctx->pc = 0x29d7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
    // 0x29d7e4: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x29D7E4u;
    SET_GPR_U32(ctx, 31, 0x29D7ECu);
    ctx->pc = 0x29D7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D7E4u;
    // 0x29d7e8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x29D7E4u, 0x29D7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D7ECu;
label_29d7ec:
    // 0x29d7ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D7ECu;
    {
        const bool branch_taken_0x29d7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7ECu;
        // 0x29d7f0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d7ec) {
            ctx->pc = 0x29D800u;
            goto label_29d800;
        }
    }
    ctx->pc = 0x29D7F4u;
    // 0x29d7f4: 0x24050076  addiu       $a1, $zero, 0x76
    ctx->pc = 0x29d7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x29d7f8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x29D7F8u;
    {
        const bool branch_taken_0x29d7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D7F8u;
        // 0x29d7fc: 0x2406006a  addiu       $a2, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d7f8) {
            ctx->pc = 0x29D90Cu;
            goto label_29d90c;
        }
    }
    ctx->pc = 0x29D800u;
label_29d800:
    // 0x29d800: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x29d800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d804: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x29d804u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29d808: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x29D808u;
    {
        const bool branch_taken_0x29d808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x29d808) {
            ctx->pc = 0x29D840u;
            goto label_29d840;
        }
    }
    ctx->pc = 0x29D810u;
    // 0x29d810: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29D810u;
    {
        const bool branch_taken_0x29d810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D810u;
        // 0x29d814: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d810) {
            ctx->pc = 0x29D848u;
            goto label_29d848;
        }
    }
    ctx->pc = 0x29D818u;
    // 0x29d818: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x29d818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29d81c: 0x0  nop
    ctx->pc = 0x29d81cu;
    // NOP
label_29d820:
    // 0x29d820: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x29d820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x29d824: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29d824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d828: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x29d828u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29d82c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D82Cu;
    {
        const bool branch_taken_0x29d82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29d82c) {
            ctx->pc = 0x29D840u;
            goto label_29d840;
        }
    }
    ctx->pc = 0x29D834u;
    // 0x29d834: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29D834u;
    {
        const bool branch_taken_0x29d834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D834u;
        // 0x29d838: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d834) {
            ctx->pc = 0x29D820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d820;
        }
    }
    ctx->pc = 0x29D83Cu;
    // 0x29d83c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x29d83cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29d840:
    // 0x29d840: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D840u;
    {
        const bool branch_taken_0x29d840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D840u;
        // 0x29d844: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d840) {
            ctx->pc = 0x29D858u;
            goto label_29d858;
        }
    }
    ctx->pc = 0x29D848u;
label_29d848:
    // 0x29d848: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29d848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29d84c: 0x24050076  addiu       $a1, $zero, 0x76
    ctx->pc = 0x29d84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x29d850: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x29D850u;
    {
        const bool branch_taken_0x29d850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D850u;
        // 0x29d854: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d850) {
            ctx->pc = 0x29D90Cu;
            goto label_29d90c;
        }
    }
    ctx->pc = 0x29D858u;
label_29d858:
    // 0x29d858: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x29d858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29d85c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x29d85cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x29d860: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29d860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d864: 0x24a5c690  addiu       $a1, $a1, -0x3970
    ctx->pc = 0x29d864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952592));
    // 0x29d868: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x29D868u;
    SET_GPR_U32(ctx, 31, 0x29D870u);
    ctx->pc = 0x29D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D868u;
    // 0x29d86c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x29D868u, 0x29D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D870u;
label_29d870:
    // 0x29d870: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D870u;
    {
        const bool branch_taken_0x29d870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D870u;
        // 0x29d874: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d870) {
            ctx->pc = 0x29D884u;
            goto label_29d884;
        }
    }
    ctx->pc = 0x29D878u;
    // 0x29d878: 0x24050076  addiu       $a1, $zero, 0x76
    ctx->pc = 0x29d878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x29d87c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x29D87Cu;
    {
        const bool branch_taken_0x29d87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D87Cu;
        // 0x29d880: 0x24060069  addiu       $a2, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d87c) {
            ctx->pc = 0x29D90Cu;
            goto label_29d90c;
        }
    }
    ctx->pc = 0x29D884u;
label_29d884:
    // 0x29d884: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x29d884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d888: 0x2462000a  addiu       $v0, $v1, 0xA
    ctx->pc = 0x29d888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x29d88c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x29d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x29d890: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29d890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d894: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29d894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d898: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29D898u;
    {
        const bool branch_taken_0x29d898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D898u;
        // 0x29d89c: 0x8070000a  lb          $s0, 0xA($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d898) {
            ctx->pc = 0x29D8B0u;
            goto label_29d8b0;
        }
    }
    ctx->pc = 0x29D8A0u;
label_29d8a0:
    // 0x29d8a0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x29d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_29d8a4:
    // 0x29d8a4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x29d8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x29d8a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29d8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d8ac: 0x80b00000  lb          $s0, 0x0($a1)
    ctx->pc = 0x29d8acu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_29d8b0:
    // 0x29d8b0: 0x2602ffbf  addiu       $v0, $s0, -0x41
    ctx->pc = 0x29d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967231));
    // 0x29d8b4: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x29d8b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x29d8b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29D8B8u;
    {
        const bool branch_taken_0x29d8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d8b8) {
            ctx->pc = 0x29D8A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d8a0;
        }
    }
    ctx->pc = 0x29D8C0u;
    // 0x29d8c0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x29d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x29d8c4: 0x1202fff7  beq         $s0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x29D8C4u;
    {
        const bool branch_taken_0x29d8c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x29D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8C4u;
        // 0x29d8c8: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d8c4) {
            ctx->pc = 0x29D8A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d8a4;
        }
    }
    ctx->pc = 0x29D8CCu;
    // 0x29d8cc: 0x2602ffd0  addiu       $v0, $s0, -0x30
    ctx->pc = 0x29d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
    // 0x29d8d0: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x29d8d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x29d8d4: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x29D8D4u;
    {
        const bool branch_taken_0x29d8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8D4u;
        // 0x29d8d8: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d8d4) {
            ctx->pc = 0x29D8A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d8a4;
        }
    }
    ctx->pc = 0x29D8DCu;
    // 0x29d8dc: 0xc0a5c1c  jal         func_297070
    ctx->pc = 0x29D8DCu;
    SET_GPR_U32(ctx, 31, 0x29D8E4u);
    ctx->pc = 0x29D8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D8DCu;
    // 0x29d8e0: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297070u, 0x29D8DCu, 0x29D8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8E4u;
label_29d8e4:
    // 0x29d8e4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x29d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d8e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29d8e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d8ec: 0xa0700000  sb          $s0, 0x0($v1)
    ctx->pc = 0x29d8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x29d8f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d8f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29d8f8: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29D8F8u;
    {
        const bool branch_taken_0x29d8f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8F8u;
        // 0x29d8fc: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d8f8) {
            ctx->pc = 0x29D920u;
            goto label_29d920;
        }
    }
    ctx->pc = 0x29D900u;
    // 0x29d900: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29d900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29d904: 0x24050076  addiu       $a1, $zero, 0x76
    ctx->pc = 0x29d904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x29d908: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x29d908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_29d90c:
    // 0x29d90c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29d90cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d910: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29D910u;
    SET_GPR_U32(ctx, 31, 0x29D918u);
    ctx->pc = 0x29D914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D910u;
    // 0x29d914: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29D910u, 0x29D918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D918u;
label_29d918:
    // 0x29d918: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x29D918u;
    {
        const bool branch_taken_0x29d918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D918u;
        // 0x29d91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d918) {
            ctx->pc = 0x29D954u;
            goto label_29d954;
        }
    }
    ctx->pc = 0x29D920u;
label_29d920:
    // 0x29d920: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x29d920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d924: 0xc0a5b04  jal         func_296C10
    ctx->pc = 0x29D924u;
    SET_GPR_U32(ctx, 31, 0x29D92Cu);
    ctx->pc = 0x29D928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D924u;
    // 0x29d928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C10u, 0x29D924u, 0x29D92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D92Cu;
label_29d92c:
    // 0x29d92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d930: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29d930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d934: 0xc0a765c  jal         func_29D970
    ctx->pc = 0x29D934u;
    SET_GPR_U32(ctx, 31, 0x29D93Cu);
    ctx->pc = 0x29D938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D934u;
    // 0x29d938: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D970u, 0x29D934u, 0x29D93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D93Cu;
label_29d93c:
    // 0x29d93c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x29D93Cu;
    {
        const bool branch_taken_0x29d93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D93Cu;
        // 0x29d940: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d93c) {
            ctx->pc = 0x29D918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d918;
        }
    }
    ctx->pc = 0x29D944u;
    // 0x29d944: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29d944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29d948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d94c: 0xc0a5908  jal         func_296420
    ctx->pc = 0x29D94Cu;
    SET_GPR_U32(ctx, 31, 0x29D954u);
    ctx->pc = 0x29D950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D94Cu;
    // 0x29d950: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296420u, 0x29D94Cu, 0x29D954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D954u;
label_29d954:
    // 0x29d954: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29d954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29d958: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x29d958u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29d95c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x29d95cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d960: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x29d960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d964: 0x3e00008  jr          $ra
    ctx->pc = 0x29D964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D964u;
        // 0x29d968: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D96Cu;
    // 0x29d96c: 0x0  nop
    ctx->pc = 0x29d96cu;
    // NOP
}
