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

// Function: sub_0025A5C8
// Address: 0x25a5c8 - 0x25a708
void sub_0025A5C8_0x25a5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A5C8_0x25a5c8");
#endif

    switch (ctx->pc) {
        case 0x25a5ecu: goto label_25a5ec;
        case 0x25a698u: goto label_25a698;
        default: break;
    }

    ctx->pc = 0x25a5c8u;

    // 0x25a5c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a5cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25a5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25a5d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a5d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25a5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a5d8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x25a5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25a5dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A5DCu;
    {
        const bool branch_taken_0x25a5dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5DCu;
        // 0x25a5e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5dc) {
            ctx->pc = 0x25A5F0u;
            goto label_25a5f0;
        }
    }
    ctx->pc = 0x25A5E4u;
    // 0x25a5e4: 0xc0932e6  jal         func_24CB98
    ctx->pc = 0x25A5E4u;
    SET_GPR_U32(ctx, 31, 0x25A5ECu);
    ctx->pc = 0x24CB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CB98u, 0x25A5E4u, 0x25A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A5ECu;
label_25a5ec:
    // 0x25a5ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x25a5ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a5f0:
    // 0x25a5f0: 0x10c00041  beqz        $a2, . + 4 + (0x41 << 2)
    ctx->pc = 0x25A5F0u;
    {
        const bool branch_taken_0x25a5f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5F0u;
        // 0x25a5f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5f0) {
            ctx->pc = 0x25A6F8u;
            goto label_25a6f8;
        }
    }
    ctx->pc = 0x25A5F8u;
    // 0x25a5f8: 0x860200a0  lh          $v0, 0xA0($s0)
    ctx->pc = 0x25a5f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x25a5fc: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x25A5FCu;
    {
        const bool branch_taken_0x25a5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a5fc) {
            ctx->pc = 0x25A600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A5FCu;
            // 0x25a600: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A6FCu;
            goto label_25a6fc;
        }
    }
    ctx->pc = 0x25A604u;
    // 0x25a604: 0xdcc20090  ld          $v0, 0x90($a2)
    ctx->pc = 0x25a604u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 144)));
    // 0x25a608: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x25a608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25a60c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x25a60cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x25a610: 0x50a0003a  beql        $a1, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x25A610u;
    {
        const bool branch_taken_0x25a610 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a610) {
            ctx->pc = 0x25A614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A610u;
            // 0x25a614: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A6FCu;
            goto label_25a6fc;
        }
    }
    ctx->pc = 0x25A618u;
    // 0x25a618: 0xdcc20058  ld          $v0, 0x58($a2)
    ctx->pc = 0x25a618u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x25a61c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x25a61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x25a620: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25A620u;
    {
        const bool branch_taken_0x25a620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A620u;
        // 0x25a624: 0x3c020007  lui         $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a620) {
            ctx->pc = 0x25A66Cu;
            goto label_25a66c;
        }
    }
    ctx->pc = 0x25A628u;
    // 0x25a628: 0x3442a120  ori         $v0, $v0, 0xA120
    ctx->pc = 0x25a628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41248);
    // 0x25a62c: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x25a62cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25a630: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25A630u;
    {
        const bool branch_taken_0x25a630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a630) {
            ctx->pc = 0x25A634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A630u;
            // 0x25a634: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A638u;
            goto label_25a638;
        }
    }
    ctx->pc = 0x25A638u;
label_25a638:
    // 0x25a638: 0x1812  mflo        $v1
    ctx->pc = 0x25a638u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x25a63c: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x25a63cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x25a640: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x25a640u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x25a644: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x25a644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25a648: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A648u;
    {
        const bool branch_taken_0x25a648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A648u;
        // 0x25a64c: 0xa60300a4  sh          $v1, 0xA4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 164), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a648) {
            ctx->pc = 0x25A658u;
            goto label_25a658;
        }
    }
    ctx->pc = 0x25A650u;
    // 0x25a650: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25A650u;
    {
        const bool branch_taken_0x25a650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A650u;
        // 0x25a654: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a650) {
            ctx->pc = 0x25A668u;
            goto label_25a668;
        }
    }
    ctx->pc = 0x25A658u;
label_25a658:
    // 0x25a658: 0x28820081  slti        $v0, $a0, 0x81
    ctx->pc = 0x25a658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x25a65c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A65Cu;
    {
        const bool branch_taken_0x25a65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A65Cu;
        // 0x25a660: 0x24023d09  addiu       $v0, $zero, 0x3D09 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15625));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a65c) {
            ctx->pc = 0x25A670u;
            goto label_25a670;
        }
    }
    ctx->pc = 0x25A664u;
    // 0x25a664: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x25a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_25a668:
    // 0x25a668: 0xa60200a4  sh          $v0, 0xA4($s0)
    ctx->pc = 0x25a668u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 164), (uint16_t)GPR_U32(ctx, 2));
label_25a66c:
    // 0x25a66c: 0x24023d09  addiu       $v0, $zero, 0x3D09
    ctx->pc = 0x25a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15625));
label_25a670:
    // 0x25a670: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x25a670u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25a674: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25A674u;
    {
        const bool branch_taken_0x25a674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a674) {
            ctx->pc = 0x25A678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A674u;
            // 0x25a678: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A67Cu;
            goto label_25a67c;
        }
    }
    ctx->pc = 0x25A67Cu;
label_25a67c:
    // 0x25a67c: 0x1812  mflo        $v1
    ctx->pc = 0x25a67cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x25a680: 0xa60300a0  sh          $v1, 0xA0($s0)
    ctx->pc = 0x25a680u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x25a684: 0xdcc40098  ld          $a0, 0x98($a2)
    ctx->pc = 0x25a684u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 152)));
    // 0x25a688: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A688u;
    {
        const bool branch_taken_0x25a688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a688) {
            ctx->pc = 0x25A68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A688u;
            // 0x25a68c: 0x31400  sll         $v0, $v1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A6A0u;
            goto label_25a6a0;
        }
    }
    ctx->pc = 0x25A690u;
    // 0x25a690: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x25A690u;
    SET_GPR_U32(ctx, 31, 0x25A698u);
    ctx->pc = 0x25A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A690u;
    // 0x25a694: 0x24057a12  addiu       $a1, $zero, 0x7A12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x25A690u, 0x25A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A698u;
label_25a698:
    // 0x25a698: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25A698u;
    {
        const bool branch_taken_0x25a698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A698u;
        // 0x25a69c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a698) {
            ctx->pc = 0x25A6A4u;
            goto label_25a6a4;
        }
    }
    ctx->pc = 0x25A6A0u;
label_25a6a0:
    // 0x25a6a0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x25a6a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_25a6a4:
    // 0x25a6a4: 0xa60200a2  sh          $v0, 0xA2($s0)
    ctx->pc = 0x25a6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x25a6a8: 0x960200a0  lhu         $v0, 0xA0($s0)
    ctx->pc = 0x25a6a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x25a6ac: 0x860400a2  lh          $a0, 0xA2($s0)
    ctx->pc = 0x25a6acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 162)));
    // 0x25a6b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25a6b4: 0x860300a4  lh          $v1, 0xA4($s0)
    ctx->pc = 0x25a6b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x25a6b8: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x25a6b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x25a6bc: 0x960500a4  lhu         $a1, 0xA4($s0)
    ctx->pc = 0x25a6bcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x25a6c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25a6c4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x25a6c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x25a6c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25a6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a6cc: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x25a6ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25a6d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A6D0u;
    {
        const bool branch_taken_0x25a6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6D0u;
        // 0x25a6d4: 0xa602001c  sh          $v0, 0x1C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6d0) {
            ctx->pc = 0x25A6E0u;
            goto label_25a6e0;
        }
    }
    ctx->pc = 0x25A6D8u;
    // 0x25a6d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25A6D8u;
    {
        const bool branch_taken_0x25a6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6D8u;
        // 0x25a6dc: 0xa605001c  sh          $a1, 0x1C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6d8) {
            ctx->pc = 0x25A6F4u;
            goto label_25a6f4;
        }
    }
    ctx->pc = 0x25A6E0u;
label_25a6e0:
    // 0x25a6e0: 0x28820081  slti        $v0, $a0, 0x81
    ctx->pc = 0x25a6e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x25a6e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A6E4u;
    {
        const bool branch_taken_0x25a6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6E4u;
        // 0x25a6e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6e4) {
            ctx->pc = 0x25A6F8u;
            goto label_25a6f8;
        }
    }
    ctx->pc = 0x25A6ECu;
    // 0x25a6ec: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x25a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x25a6f0: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x25a6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
label_25a6f4:
    // 0x25a6f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25a6f8:
    // 0x25a6f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25a6f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25a6fc:
    // 0x25a6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x25A6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6FCu;
        // 0x25a700: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A704u;
    // 0x25a704: 0x0  nop
    ctx->pc = 0x25a704u;
    // NOP
    if (ctx->pc == 0x25a704u) { ctx->pc = 0x25a708u; }
}
