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

// Function: sub_00279650
// Address: 0x279650 - 0x279860
void sub_00279650_0x279650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279650_0x279650");
#endif

    switch (ctx->pc) {
        case 0x279690u: goto label_279690;
        case 0x27970cu: goto label_27970c;
        case 0x279770u: goto label_279770;
        case 0x2797acu: goto label_2797ac;
        case 0x2797f4u: goto label_2797f4;
        case 0x2797f8u: goto label_2797f8;
        case 0x2797fcu: goto label_2797fc;
        case 0x279818u: goto label_279818;
        case 0x27981cu: goto label_27981c;
        case 0x27982cu: goto label_27982c;
        case 0x279838u: goto label_279838;
        default: break;
    }

    ctx->pc = 0x279650u;

    // 0x279650: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x279650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x279654: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x279654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
    // 0x279658: 0x8c625394  lw          $v0, 0x5394($v1)
    ctx->pc = 0x279658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21396)));
    // 0x27965c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27965cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279660: 0x8ca553b8  lw          $a1, 0x53B8($a1)
    ctx->pc = 0x279660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 21432)));
    // 0x279664: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x279664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x279668: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x279668u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x27966c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279670: 0x828024  and         $s0, $a0, $v0
    ctx->pc = 0x279670u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x279674: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x279674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x279678: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x279678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27967c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27967cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x279680: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x279680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279684: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x279684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x279688: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x279688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x27968c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x27968cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_279690:
    // 0x279690: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x279690u;
    {
        const bool branch_taken_0x279690 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x279694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279690u;
        // 0x279694: 0x3c1401c3  lui         $s4, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279690) {
            ctx->pc = 0x2796F4u;
            goto label_2796f4;
        }
    }
    ctx->pc = 0x279698u;
    // 0x279698: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x279698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x27969c: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x27969cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2796a0: 0x0  nop
    ctx->pc = 0x2796a0u;
    // NOP
    // 0x2796a4: 0x0  nop
    ctx->pc = 0x2796a4u;
    // NOP
    // 0x2796a8: 0x0  nop
    ctx->pc = 0x2796a8u;
    // NOP
    // 0x2796ac: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2796ACu;
    {
        const bool branch_taken_0x2796ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2796ac) {
            ctx->pc = 0x2796B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2796ACu;
            // 0x2796b0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279690u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279690;
        }
    }
    ctx->pc = 0x2796B4u;
    // 0x2796b4: 0x1470000a  bne         $v1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2796B4u;
    {
        const bool branch_taken_0x2796b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x2796B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796B4u;
        // 0x2796b8: 0x8cb20008  lw          $s2, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2796b4) {
            ctx->pc = 0x2796E0u;
            goto label_2796e0;
        }
    }
    ctx->pc = 0x2796BCu;
    // 0x2796bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2796bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2796c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2796C0u;
    {
        const bool branch_taken_0x2796c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2796C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796C0u;
        // 0x2796c4: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2796c0) {
            ctx->pc = 0x2796D4u;
            goto label_2796d4;
        }
    }
    ctx->pc = 0x2796C8u;
    // 0x2796c8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2796c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2796cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2796ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2796d0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2796d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2796d4:
    // 0x2796d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2796d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2796d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2796D8u;
    {
        const bool branch_taken_0x2796d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2796DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796D8u;
        // 0x2796dc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2796d8) {
            ctx->pc = 0x2796F0u;
            goto label_2796f0;
        }
    }
    ctx->pc = 0x2796E0u;
label_2796e0:
    // 0x2796e0: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x2796e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2796e4: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x2796e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x2796e8: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x2796e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2796ec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2796ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_2796f0:
    // 0x2796f0: 0x3c1401c3  lui         $s4, 0x1C3
    ctx->pc = 0x2796f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)451 << 16));
label_2796f4:
    // 0x2796f4: 0x26915390  addiu       $s1, $s4, 0x5390
    ctx->pc = 0x2796f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 21392));
    // 0x2796f8: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2796f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2796fc: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2796FCu;
    {
        const bool branch_taken_0x2796fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x279700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2796FCu;
        // 0x279700: 0xf08006  srlv        $s0, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 7) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2796fc) {
            ctx->pc = 0x27971Cu;
            goto label_27971c;
        }
    }
    ctx->pc = 0x279704u;
    // 0x279704: 0xc09e576  jal         func_2795D8
    ctx->pc = 0x279704u;
    SET_GPR_U32(ctx, 31, 0x27970Cu);
    ctx->pc = 0x279708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279704u;
    // 0x279708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2795D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2795D8u, 0x279704u, 0x27970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27970Cu;
label_27970c:
    // 0x27970c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27970cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279710: 0x1240003f  beqz        $s2, . + 4 + (0x3F << 2)
    ctx->pc = 0x279710u;
    {
        const bool branch_taken_0x279710 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x279710) {
            ctx->pc = 0x279810u;
            goto label_279810;
        }
    }
    ctx->pc = 0x279718u;
    // 0x279718: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x279718u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27971c:
    // 0x27971c: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x27971cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x279720: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x279720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
    // 0x279724: 0x8c6253a0  lw          $v0, 0x53A0($v1)
    ctx->pc = 0x279724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21408)));
    // 0x279728: 0x3c0401c3  lui         $a0, 0x1C3
    ctx->pc = 0x279728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)451 << 16));
    // 0x27972c: 0x8ca653a4  lw          $a2, 0x53A4($a1)
    ctx->pc = 0x27972cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 21412)));
    // 0x279730: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x279730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279734: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x279734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x279738: 0x248853ac  addiu       $t0, $a0, 0x53AC
    ctx->pc = 0x279738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 21420));
    // 0x27973c: 0xe21006  srlv        $v0, $v0, $a3
    ctx->pc = 0x27973cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x279740: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x279740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279744: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x279744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x279748: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x279748u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27974c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27974cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x279750: 0xf0202b  sltu        $a0, $a3, $s0
    ctx->pc = 0x279750u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x279754: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x279754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279758: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x279758u;
    {
        const bool branch_taken_0x279758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279758u;
        // 0x27975c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279758) {
            ctx->pc = 0x27978Cu;
            goto label_27978c;
        }
    }
    ctx->pc = 0x279760u;
    // 0x279760: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x279760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279764: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x279764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x279768: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x279768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27976c: 0x0  nop
    ctx->pc = 0x27976cu;
    // NOP
label_279770:
    // 0x279770: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x279770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x279774: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x279774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x279778: 0xf0182b  sltu        $v1, $a3, $s0
    ctx->pc = 0x279778u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x27977c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x27977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x279780: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x279780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x279784: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279784u;
    {
        const bool branch_taken_0x279784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x279788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279784u;
        // 0x279788: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279784) {
            ctx->pc = 0x279770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279770;
        }
    }
    ctx->pc = 0x27978Cu;
label_27978c:
    // 0x27978c: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x27978cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x279790: 0x8c4353e4  lw          $v1, 0x53E4($v0)
    ctx->pc = 0x279790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21476)));
    // 0x279794: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x279794u;
    {
        const bool branch_taken_0x279794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279794u;
        // 0x279798: 0x8e865390  lw          $a2, 0x5390($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 21392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279794) {
            ctx->pc = 0x2797ACu;
            goto label_2797ac;
        }
    }
    ctx->pc = 0x27979Cu;
    // 0x27979c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27979cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2797a0: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x2797a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x2797a4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2797A4u;
    SET_GPR_U32(ctx, 31, 0x2797ACu);
    ctx->pc = 0x2797A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2797A4u;
    // 0x2797a8: 0xd03004  sllv        $a2, $s0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 6) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2797A4u, 0x2797ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2797ACu;
label_2797ac:
    // 0x2797ac: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x2797acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x2797b0: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x2797b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x2797b4: 0x24635400  addiu       $v1, $v1, 0x5400
    ctx->pc = 0x2797b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21504));
    // 0x2797b8: 0x24465408  addiu       $a2, $v0, 0x5408
    ctx->pc = 0x2797b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 21512));
    // 0x2797bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2797bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2797c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2797c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2797c4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2797c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2797c8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2797c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2797cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2797CCu;
    {
        const bool branch_taken_0x2797cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2797D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797CCu;
        // 0x2797d0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2797cc) {
            ctx->pc = 0x2797F0u;
            goto label_2797f0;
        }
    }
    ctx->pc = 0x2797D4u;
    // 0x2797d4: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x2797d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
    // 0x2797d8: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x2797d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x2797dc: 0x8ca2538c  lw          $v0, 0x538C($a1)
    ctx->pc = 0x2797dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 21388)));
    // 0x2797e0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2797e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x2797e4: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2797e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2797e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2797E8u;
    {
        const bool branch_taken_0x2797e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2797ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2797E8u;
        // 0x2797ec: 0xac625404  sw          $v0, 0x5404($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 21508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2797e8) {
            ctx->pc = 0x2797F4u;
            goto label_2797f4;
        }
    }
    ctx->pc = 0x2797F0u;
label_2797f0:
    // 0x2797f0: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x2797f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
label_2797f4:
    // 0x2797f4: 0x8ca4538c  lw          $a0, 0x538C($a1)
    ctx->pc = 0x2797f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 21388)));
label_2797f8:
    // 0x2797f8: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x2797f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
label_2797fc:
    // 0x2797fc: 0x246353fc  addiu       $v1, $v1, 0x53FC
    ctx->pc = 0x2797fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21500));
    // 0x279800: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x279800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x279804: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x279804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279808: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x279808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27980c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x27980cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_279810:
    // 0x279810: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x279810u;
    {
        const bool branch_taken_0x279810 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x279814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279810u;
        // 0x279814: 0x3c0201c3  lui         $v0, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279810) {
            ctx->pc = 0x279838u;
            goto label_279838;
        }
    }
    ctx->pc = 0x279818u;
label_279818:
    // 0x279818: 0x244253e8  addiu       $v0, $v0, 0x53E8
    ctx->pc = 0x279818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21480));
label_27981c:
    // 0x27981c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279820: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x279820u;
    {
        const bool branch_taken_0x279820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x279820) {
            ctx->pc = 0x279830u;
            goto label_279830;
        }
    }
    ctx->pc = 0x279828u;
    // 0x279828: 0x10000003  b           . + 4 + (0x3 << 2)
label_27982c:
    if (ctx->pc == 0x27982Cu) {
        ctx->pc = 0x27982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279828u;
        // 0x27982c: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279830u;
        goto label_279830;
    }
    ctx->pc = 0x279828u;
    {
        const bool branch_taken_0x279828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279828u;
        // 0x27982c: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279828) {
            ctx->pc = 0x279838u;
            goto label_279838;
        }
    }
    ctx->pc = 0x279830u;
label_279830:
    // 0x279830: 0xc09e920  jal         func_27A480
    ctx->pc = 0x279830u;
    SET_GPR_U32(ctx, 31, 0x279838u);
    ctx->pc = 0x279834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279830u;
    // 0x279834: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A480u, 0x279830u, 0x279838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279838u;
label_279838:
    // 0x279838: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x279838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27983c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27983cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279840: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x279840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x279844: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x279844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279848: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x279848u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27984c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27984cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279850: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x279850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x279854: 0x3e00008  jr          $ra
    ctx->pc = 0x279854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279854u;
        // 0x279858: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27985Cu;
    // 0x27985c: 0x0  nop
    ctx->pc = 0x27985cu;
    // NOP
}
