#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018B5F0
// Address: 0x18b5f0 - 0x18b7c0
void sub_0018B5F0_0x18b5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B5F0_0x18b5f0");
#endif

    ctx->pc = 0x18b5f0u;

    // 0x18b5f0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x18b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x18b5f4: 0x9063f35a  lbu         $v1, -0xCA6($v1)
    ctx->pc = 0x18b5f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964058)));
    // 0x18b5f8: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x18B5F8u;
    {
        const bool branch_taken_0x18b5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b5f8) {
            ctx->pc = 0x18B5FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B5F8u;
            // 0x18b5fc: 0x428c0  sll         $a1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B644u;
            goto label_18b644;
        }
    }
    ctx->pc = 0x18B600u;
    // 0x18b600: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18b600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18b604: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x18b604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x18b608: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x18b608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b60c: 0x24a5db51  addiu       $a1, $a1, -0x24AF
    ctx->pc = 0x18b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957905));
    // 0x18b610: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x18b610u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18b614: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18b614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18b618: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x18b618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x18b61c: 0x2463dc9d  addiu       $v1, $v1, -0x2363
    ctx->pc = 0x18b61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958237));
    // 0x18b620: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x18b620u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18b624: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x18b624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18b628: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18b628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18b62c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x18b62cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18b630: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x18b630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x18b634: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x18b634u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x18b638: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18b638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18b63c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18B63Cu;
    {
        const bool branch_taken_0x18b63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B63Cu;
            // 0x18b640: 0x90630000  lbu         $v1, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b63c) {
            ctx->pc = 0x18B664u;
            goto label_18b664;
        }
    }
    ctx->pc = 0x18B644u;
label_18b644:
    // 0x18b644: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18b644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18b648: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x18b648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x18b64c: 0x2463dc9d  addiu       $v1, $v1, -0x2363
    ctx->pc = 0x18b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958237));
    // 0x18b650: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x18b650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18b654: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x18b654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x18b658: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18b658u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18b65c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b660: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x18b660u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_18b664:
    // 0x18b664: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18b664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18b668: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18b668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x18b66c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x18b66cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18b670: 0x24844120  addiu       $a0, $a0, 0x4120
    ctx->pc = 0x18b670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16672));
    // 0x18b674: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18b674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18b678: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18b678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b67c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x18b67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18b680: 0x4323c  dsll32      $a2, $a0, 8
    ctx->pc = 0x18b680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 8));
    // 0x18b684: 0x6323e  dsrl32      $a2, $a2, 8
    ctx->pc = 0x18b684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 8));
    // 0x18b688: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B688u;
    {
        const bool branch_taken_0x18b688 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b688) {
            ctx->pc = 0x18B68Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B688u;
            // 0x18b68c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B698u;
            goto label_18b698;
        }
    }
    ctx->pc = 0x18B690u;
    // 0x18b690: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x18B690u;
    {
        const bool branch_taken_0x18b690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B690u;
            // 0x18b694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b690) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B698u;
label_18b698:
    // 0x18b698: 0x54c40003  bnel        $a2, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B698u;
    {
        const bool branch_taken_0x18b698 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x18b698) {
            ctx->pc = 0x18B69Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B698u;
            // 0x18b69c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B6A8u;
            goto label_18b6a8;
        }
    }
    ctx->pc = 0x18B6A0u;
    // 0x18b6a0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x18B6A0u;
    {
        const bool branch_taken_0x18b6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6A0u;
            // 0x18b6a4: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6a0) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B6A8u;
label_18b6a8:
    // 0x18b6a8: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B6A8u;
    {
        const bool branch_taken_0x18b6a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b6a8) {
            ctx->pc = 0x18B6ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6A8u;
            // 0x18b6ac: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B6B8u;
            goto label_18b6b8;
        }
    }
    ctx->pc = 0x18B6B0u;
    // 0x18b6b0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x18B6B0u;
    {
        const bool branch_taken_0x18b6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6B0u;
            // 0x18b6b4: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6b0) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B6B8u;
label_18b6b8:
    // 0x18b6b8: 0x54c50003  bnel        $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B6B8u;
    {
        const bool branch_taken_0x18b6b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b6b8) {
            ctx->pc = 0x18B6BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6B8u;
            // 0x18b6bc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B6C8u;
            goto label_18b6c8;
        }
    }
    ctx->pc = 0x18B6C0u;
    // 0x18b6c0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x18B6C0u;
    {
        const bool branch_taken_0x18b6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6C0u;
            // 0x18b6c4: 0x64020003  daddiu      $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6c0) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B6C8u;
label_18b6c8:
    // 0x18b6c8: 0x54c40003  bnel        $a2, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B6C8u;
    {
        const bool branch_taken_0x18b6c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x18b6c8) {
            ctx->pc = 0x18B6CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6C8u;
            // 0x18b6cc: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B6D8u;
            goto label_18b6d8;
        }
    }
    ctx->pc = 0x18B6D0u;
    // 0x18b6d0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x18B6D0u;
    {
        const bool branch_taken_0x18b6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6D0u;
            // 0x18b6d4: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6d0) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B6D8u;
label_18b6d8:
    // 0x18b6d8: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B6D8u;
    {
        const bool branch_taken_0x18b6d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b6d8) {
            ctx->pc = 0x18B6DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6D8u;
            // 0x18b6dc: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B6E8u;
            goto label_18b6e8;
        }
    }
    ctx->pc = 0x18B6E0u;
    // 0x18b6e0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x18B6E0u;
    {
        const bool branch_taken_0x18b6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6E0u;
            // 0x18b6e4: 0x64020005  daddiu      $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6e0) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B6E8u;
label_18b6e8:
    // 0x18b6e8: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B6E8u;
    {
        const bool branch_taken_0x18b6e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b6e8) {
            ctx->pc = 0x18B6ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6E8u;
            // 0x18b6ec: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B6F8u;
            goto label_18b6f8;
        }
    }
    ctx->pc = 0x18B6F0u;
    // 0x18b6f0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x18B6F0u;
    {
        const bool branch_taken_0x18b6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6F0u;
            // 0x18b6f4: 0x64020006  daddiu      $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b6f0) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B6F8u;
label_18b6f8:
    // 0x18b6f8: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B6F8u;
    {
        const bool branch_taken_0x18b6f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b6f8) {
            ctx->pc = 0x18B6FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B6F8u;
            // 0x18b6fc: 0x24030100  addiu       $v1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B708u;
            goto label_18b708;
        }
    }
    ctx->pc = 0x18B700u;
    // 0x18b700: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x18B700u;
    {
        const bool branch_taken_0x18b700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B700u;
            // 0x18b704: 0x64020007  daddiu      $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b700) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B708u;
label_18b708:
    // 0x18b708: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B708u;
    {
        const bool branch_taken_0x18b708 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b708) {
            ctx->pc = 0x18B70Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B708u;
            // 0x18b70c: 0x24030200  addiu       $v1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B718u;
            goto label_18b718;
        }
    }
    ctx->pc = 0x18B710u;
    // 0x18b710: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x18B710u;
    {
        const bool branch_taken_0x18b710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B710u;
            // 0x18b714: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b710) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B718u;
label_18b718:
    // 0x18b718: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B718u;
    {
        const bool branch_taken_0x18b718 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b718) {
            ctx->pc = 0x18B71Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B718u;
            // 0x18b71c: 0x24030400  addiu       $v1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B728u;
            goto label_18b728;
        }
    }
    ctx->pc = 0x18B720u;
    // 0x18b720: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x18B720u;
    {
        const bool branch_taken_0x18b720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B720u;
            // 0x18b724: 0x64020009  daddiu      $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)9);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b720) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B728u;
label_18b728:
    // 0x18b728: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B728u;
    {
        const bool branch_taken_0x18b728 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b728) {
            ctx->pc = 0x18B738u;
            goto label_18b738;
        }
    }
    ctx->pc = 0x18B730u;
    // 0x18b730: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x18B730u;
    {
        const bool branch_taken_0x18b730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B730u;
            // 0x18b734: 0x6402000a  daddiu      $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b730) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B738u;
label_18b738:
    // 0x18b738: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B738u;
    {
        const bool branch_taken_0x18b738 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b738) {
            ctx->pc = 0x18B73Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B738u;
            // 0x18b73c: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B748u;
            goto label_18b748;
        }
    }
    ctx->pc = 0x18B740u;
    // 0x18b740: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x18B740u;
    {
        const bool branch_taken_0x18b740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B740u;
            // 0x18b744: 0x6402000a  daddiu      $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b740) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B748u;
label_18b748:
    // 0x18b748: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B748u;
    {
        const bool branch_taken_0x18b748 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b748) {
            ctx->pc = 0x18B74Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B748u;
            // 0x18b74c: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B758u;
            goto label_18b758;
        }
    }
    ctx->pc = 0x18B750u;
    // 0x18b750: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x18B750u;
    {
        const bool branch_taken_0x18b750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B750u;
            // 0x18b754: 0x6402000b  daddiu      $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)11);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b750) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B758u;
label_18b758:
    // 0x18b758: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B758u;
    {
        const bool branch_taken_0x18b758 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b758) {
            ctx->pc = 0x18B75Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B758u;
            // 0x18b75c: 0x24032000  addiu       $v1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B768u;
            goto label_18b768;
        }
    }
    ctx->pc = 0x18B760u;
    // 0x18b760: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18B760u;
    {
        const bool branch_taken_0x18b760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B760u;
            // 0x18b764: 0x6402000c  daddiu      $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b760) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B768u;
label_18b768:
    // 0x18b768: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B768u;
    {
        const bool branch_taken_0x18b768 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b768) {
            ctx->pc = 0x18B76Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B768u;
            // 0x18b76c: 0x24034000  addiu       $v1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B778u;
            goto label_18b778;
        }
    }
    ctx->pc = 0x18B770u;
    // 0x18b770: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18B770u;
    {
        const bool branch_taken_0x18b770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B770u;
            // 0x18b774: 0x6402000d  daddiu      $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b770) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B778u;
label_18b778:
    // 0x18b778: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B778u;
    {
        const bool branch_taken_0x18b778 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b778) {
            ctx->pc = 0x18B77Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B778u;
            // 0x18b77c: 0x34038000  ori         $v1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B788u;
            goto label_18b788;
        }
    }
    ctx->pc = 0x18B780u;
    // 0x18b780: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18B780u;
    {
        const bool branch_taken_0x18b780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B780u;
            // 0x18b784: 0x6402000e  daddiu      $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b780) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B788u;
label_18b788:
    // 0x18b788: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B788u;
    {
        const bool branch_taken_0x18b788 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b788) {
            ctx->pc = 0x18B78Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B788u;
            // 0x18b78c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B798u;
            goto label_18b798;
        }
    }
    ctx->pc = 0x18B790u;
    // 0x18b790: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18B790u;
    {
        const bool branch_taken_0x18b790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B790u;
            // 0x18b794: 0x6402000f  daddiu      $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b790) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B798u;
label_18b798:
    // 0x18b798: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B798u;
    {
        const bool branch_taken_0x18b798 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b798) {
            ctx->pc = 0x18B79Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18B798u;
            // 0x18b79c: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18B7A8u;
            goto label_18b7a8;
        }
    }
    ctx->pc = 0x18B7A0u;
    // 0x18b7a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B7A0u;
    {
        const bool branch_taken_0x18b7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B7A0u;
            // 0x18b7a4: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b7a0) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B7A8u;
label_18b7a8:
    // 0x18b7a8: 0x14c30002  bne         $a2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18B7A8u;
    {
        const bool branch_taken_0x18b7a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b7a8) {
            ctx->pc = 0x18B7B4u;
            goto label_18b7b4;
        }
    }
    ctx->pc = 0x18B7B0u;
    // 0x18b7b0: 0x64020011  daddiu      $v0, $zero, 0x11
    ctx->pc = 0x18b7b0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)17);
label_18b7b4:
    // 0x18b7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x18B7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18B7BCu;
    // 0x18b7bc: 0x0  nop
    ctx->pc = 0x18b7bcu;
    // NOP
    ctx->pc = 0x18b7c0u;
}
