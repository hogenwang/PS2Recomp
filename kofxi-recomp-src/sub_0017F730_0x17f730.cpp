#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F730
// Address: 0x17f730 - 0x17f860
void sub_0017F730_0x17f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F730_0x17f730");
#endif

    switch (ctx->pc) {
        case 0x17f778u: goto label_17f778;
        case 0x17f7b8u: goto label_17f7b8;
        case 0x17f80cu: goto label_17f80c;
        default: break;
    }

    ctx->pc = 0x17f730u;

    // 0x17f730: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F730u;
    {
        const bool branch_taken_0x17f730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F730u;
            // 0x17f734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f730) {
            ctx->pc = 0x17F740u;
            goto label_17f740;
        }
    }
    ctx->pc = 0x17F738u;
    // 0x17f738: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x17F738u;
    {
        const bool branch_taken_0x17f738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F738u;
            // 0x17f73c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f738) {
            ctx->pc = 0x17F854u;
            goto label_17f854;
        }
    }
    ctx->pc = 0x17F740u;
label_17f740:
    // 0x17f740: 0x8c8500dc  lw          $a1, 0xDC($a0)
    ctx->pc = 0x17f740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x17f744: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17f744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17f748: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x17f748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x17f74c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17f74cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f750: 0x30a5000c  andi        $a1, $a1, 0xC
    ctx->pc = 0x17f750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x17f754: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x17f754u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x17f758: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x17f758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17f75c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x17f75cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17f760: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17f760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x17f764: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17f764u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17f768: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x17f768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x17f76c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17f76cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17f770: 0x655021  addu        $t2, $v1, $a1
    ctx->pc = 0x17f770u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17f774: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x17f774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_17f778:
    // 0x17f778: 0x8ca30078  lw          $v1, 0x78($a1)
    ctx->pc = 0x17f778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x17f77c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F77Cu;
    {
        const bool branch_taken_0x17f77c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f77c) {
            ctx->pc = 0x17F780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F77Cu;
            // 0x17f780: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F79Cu;
            goto label_17f79c;
        }
    }
    ctx->pc = 0x17F784u;
    // 0x17f784: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x17f784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x17f788: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F788u;
    {
        const bool branch_taken_0x17f788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x17f788) {
            ctx->pc = 0x17F798u;
            goto label_17f798;
        }
    }
    ctx->pc = 0x17F790u;
    // 0x17f790: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17F790u;
    {
        const bool branch_taken_0x17f790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F790u;
            // 0x17f794: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f790) {
            ctx->pc = 0x17F7A8u;
            goto label_17f7a8;
        }
    }
    ctx->pc = 0x17F798u;
label_17f798:
    // 0x17f798: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17f798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_17f79c:
    // 0x17f79c: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x17f79cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17f7a0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x17F7A0u;
    {
        const bool branch_taken_0x17f7a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F7A0u;
            // 0x17f7a4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f7a0) {
            ctx->pc = 0x17F778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f778;
        }
    }
    ctx->pc = 0x17F7A8u;
label_17f7a8:
    // 0x17f7a8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x17F7A8u;
    {
        const bool branch_taken_0x17f7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f7a8) {
            ctx->pc = 0x17F7E8u;
            goto label_17f7e8;
        }
    }
    ctx->pc = 0x17F7B0u;
    // 0x17f7b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7b4: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x17f7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_17f7b8:
    // 0x17f7b8: 0x8cc300a8  lw          $v1, 0xA8($a2)
    ctx->pc = 0x17f7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x17f7bc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F7BCu;
    {
        const bool branch_taken_0x17f7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f7bc) {
            ctx->pc = 0x17F7C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F7BCu;
            // 0x17f7c0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F7DCu;
            goto label_17f7dc;
        }
    }
    ctx->pc = 0x17F7C4u;
    // 0x17f7c4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x17f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x17f7c8: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F7C8u;
    {
        const bool branch_taken_0x17f7c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x17f7c8) {
            ctx->pc = 0x17F7D8u;
            goto label_17f7d8;
        }
    }
    ctx->pc = 0x17F7D0u;
    // 0x17f7d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17F7D0u;
    {
        const bool branch_taken_0x17f7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F7D0u;
            // 0x17f7d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f7d0) {
            ctx->pc = 0x17F7E8u;
            goto label_17f7e8;
        }
    }
    ctx->pc = 0x17F7D8u;
label_17f7d8:
    // 0x17f7d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17f7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_17f7dc:
    // 0x17f7dc: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x17f7dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17f7e0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x17F7E0u;
    {
        const bool branch_taken_0x17f7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F7E0u;
            // 0x17f7e4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f7e0) {
            ctx->pc = 0x17F7B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f7b8;
        }
    }
    ctx->pc = 0x17F7E8u;
label_17f7e8:
    // 0x17f7e8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17F7E8u;
    {
        const bool branch_taken_0x17f7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f7e8) {
            ctx->pc = 0x17F848u;
            goto label_17f848;
        }
    }
    ctx->pc = 0x17F7F0u;
    // 0x17f7f0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x17f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x17f7f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17f7f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f7f8: 0x9068f35b  lbu         $t0, -0xCA5($v1)
    ctx->pc = 0x17f7f8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964059)));
    // 0x17f7fc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x17f7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17f800: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x17f800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17f804: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17F804u;
    {
        const bool branch_taken_0x17f804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F804u;
            // 0x17f808: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f804) {
            ctx->pc = 0x17F830u;
            goto label_17f830;
        }
    }
    ctx->pc = 0x17F80Cu;
label_17f80c:
    // 0x17f80c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F80Cu;
    {
        const bool branch_taken_0x17f80c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f80c) {
            ctx->pc = 0x17F810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F80Cu;
            // 0x17f810: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F82Cu;
            goto label_17f82c;
        }
    }
    ctx->pc = 0x17F814u;
    // 0x17f814: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x17f814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x17f818: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F818u;
    {
        const bool branch_taken_0x17f818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x17f818) {
            ctx->pc = 0x17F828u;
            goto label_17f828;
        }
    }
    ctx->pc = 0x17F820u;
    // 0x17f820: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17F820u;
    {
        const bool branch_taken_0x17f820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F820u;
            // 0x17f824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f820) {
            ctx->pc = 0x17F848u;
            goto label_17f848;
        }
    }
    ctx->pc = 0x17F828u;
label_17f828:
    // 0x17f828: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x17f828u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_17f82c:
    // 0x17f82c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x17f82cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_17f830:
    // 0x17f830: 0x51070002  beql        $t0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x17F830u;
    {
        const bool branch_taken_0x17f830 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        if (branch_taken_0x17f830) {
            ctx->pc = 0x17F834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F830u;
            // 0x17f834: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F83Cu;
            goto label_17f83c;
        }
    }
    ctx->pc = 0x17F838u;
    // 0x17f838: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x17f838u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17f83c:
    // 0x17f83c: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x17f83cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17f840: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x17F840u;
    {
        const bool branch_taken_0x17f840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f840) {
            ctx->pc = 0x17F844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F840u;
            // 0x17f844: 0x8d430100  lw          $v1, 0x100($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17F80Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f80c;
        }
    }
    ctx->pc = 0x17F848u;
label_17f848:
    // 0x17f848: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17f848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17f84c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17f84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x17f850: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17f850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17f854:
    // 0x17f854: 0x3e00008  jr          $ra
    ctx->pc = 0x17F854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F85Cu;
    // 0x17f85c: 0x0  nop
    ctx->pc = 0x17f85cu;
    // NOP
    ctx->pc = 0x17f860u;
}
