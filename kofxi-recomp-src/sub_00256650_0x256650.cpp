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

// Function: sub_00256650
// Address: 0x256650 - 0x256ab0
void sub_00256650_0x256650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256650_0x256650");
#endif

    switch (ctx->pc) {
        case 0x256684u: goto label_256684;
        case 0x2566a0u: goto label_2566a0;
        case 0x2566d8u: goto label_2566d8;
        case 0x2567b8u: goto label_2567b8;
        case 0x2567e0u: goto label_2567e0;
        case 0x2567f4u: goto label_2567f4;
        case 0x256814u: goto label_256814;
        case 0x256960u: goto label_256960;
        case 0x256a24u: goto label_256a24;
        case 0x256a48u: goto label_256a48;
        case 0x256a5cu: goto label_256a5c;
        default: break;
    }

    ctx->pc = 0x256650u;

    // 0x256650: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x256650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x256654: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x256654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x256658: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x256658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x25665c: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x25665cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
    // 0x256660: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x256660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x256664: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x256664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x256668: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x256668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x25666c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x25666cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x256670: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x256670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x256674: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x256674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x256678: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x256678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25667c: 0xc08c682  jal         func_231A08
    ctx->pc = 0x25667Cu;
    SET_GPR_U32(ctx, 31, 0x256684u);
    ctx->pc = 0x256680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25667Cu;
    // 0x256680: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x25667Cu, 0x256684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256684u;
label_256684:
    // 0x256684: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x256684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x256688: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x256688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25668c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25668cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x256690: 0x24571308  addiu       $s7, $v0, 0x1308
    ctx->pc = 0x256690u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x256694: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x256694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x256698: 0x24531228  addiu       $s3, $v0, 0x1228
    ctx->pc = 0x256698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4648));
    // 0x25669c: 0x4a8c0  sll         $s5, $a0, 3
    ctx->pc = 0x25669cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2566a0:
    // 0x2566a0: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x2566a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x2566a4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2566a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2566a8: 0x12000099  beqz        $s0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2566A8u;
    {
        const bool branch_taken_0x2566a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2566ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566A8u;
        // 0x2566ac: 0x24940001  addiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566a8) {
            ctx->pc = 0x256910u;
            goto label_256910;
        }
    }
    ctx->pc = 0x2566B0u;
    // 0x2566b0: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x2566b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2566b4: 0x10600096  beqz        $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x2566B4u;
    {
        const bool branch_taken_0x2566b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2566B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566B4u;
        // 0x2566b8: 0x3c16003a  lui         $s6, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566b4) {
            ctx->pc = 0x256910u;
            goto label_256910;
        }
    }
    ctx->pc = 0x2566BCu;
    // 0x2566bc: 0x8ec2f990  lw          $v0, -0x670($s6)
    ctx->pc = 0x2566bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294965648)));
    // 0x2566c0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2566c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2566c4: 0x54400093  bnel        $v0, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x2566C4u;
    {
        const bool branch_taken_0x2566c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2566c4) {
            ctx->pc = 0x2566C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2566C4u;
            // 0x2566c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256914u;
            goto label_256914;
        }
    }
    ctx->pc = 0x2566CCu;
    // 0x2566cc: 0x24940001  addiu       $s4, $a0, 0x1
    ctx->pc = 0x2566ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2566d0: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2566d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2566d4: 0x0  nop
    ctx->pc = 0x2566d4u;
    // NOP
label_2566d8:
    // 0x2566d8: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2566d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2566dc: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x2566dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2566e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2566e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2566e4: 0x2c440096  sltiu       $a0, $v0, 0x96
    ctx->pc = 0x2566e4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)150) ? 1 : 0);
    // 0x2566e8: 0x14800044  bnez        $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2566E8u;
    {
        const bool branch_taken_0x2566e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2566ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566E8u;
        // 0x2566ec: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566e8) {
            ctx->pc = 0x2567FCu;
            goto label_2567fc;
        }
    }
    ctx->pc = 0x2566F0u;
    // 0x2566f0: 0xdee201d0  ld          $v0, 0x1D0($s7)
    ctx->pc = 0x2566f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 464)));
    // 0x2566f4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2566f4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2566f8: 0xfee201d0  sd          $v0, 0x1D0($s7)
    ctx->pc = 0x2566f8u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 464), GPR_U64(ctx, 2));
    // 0x2566fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2566fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x256700: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x256700u;
    {
        const bool branch_taken_0x256700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256700u;
        // 0x256704: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256700) {
            ctx->pc = 0x256718u;
            goto label_256718;
        }
    }
    ctx->pc = 0x256708u;
    // 0x256708: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x256708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x25670c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x256710: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x256710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x256714: 0x0  nop
    ctx->pc = 0x256714u;
    // NOP
label_256718:
    // 0x256718: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x256718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25671c: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x25671cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x256720: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x256720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x256724: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x256724u;
    {
        const bool branch_taken_0x256724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256724u;
        // 0x256728: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256724) {
            ctx->pc = 0x256738u;
            goto label_256738;
        }
    }
    ctx->pc = 0x25672Cu;
    // 0x25672c: 0xac6200a0  sw          $v0, 0xA0($v1)
    ctx->pc = 0x25672cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 2));
    // 0x256730: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x256730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x256734: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x256734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_256738:
    // 0x256738: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x256738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25673c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x25673cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x256740: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x256740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x256744: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x256744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x256748: 0x24840490  addiu       $a0, $a0, 0x490
    ctx->pc = 0x256748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x25674c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25674cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x256750: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x256750u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x256754: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x256754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256758: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x256758u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x25675c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x25675cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x256760: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x256760u;
    {
        const bool branch_taken_0x256760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256760) {
            ctx->pc = 0x256764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256760u;
            // 0x256764: 0x96020088  lhu         $v0, 0x88($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256778u;
            goto label_256778;
        }
    }
    ctx->pc = 0x256768u;
    // 0x256768: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x256768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25676c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25676Cu;
    {
        const bool branch_taken_0x25676c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25676Cu;
        // 0x256770: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25676c) {
            ctx->pc = 0x256788u;
            goto label_256788;
        }
    }
    ctx->pc = 0x256774u;
    // 0x256774: 0x0  nop
    ctx->pc = 0x256774u;
    // NOP
label_256778:
    // 0x256778: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x256778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25677c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x25677cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x256780: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x256780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x256784: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x256784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_256788:
    // 0x256788: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x256788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25678c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x25678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x256790: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x256790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x256794: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x256794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256798: 0xde221218  ld          $v0, 0x1218($s1)
    ctx->pc = 0x256798u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4632)));
    // 0x25679c: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x25679cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
    // 0x2567a0: 0xfe221218  sd          $v0, 0x1218($s1)
    ctx->pc = 0x2567a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4632), GPR_U64(ctx, 2));
    // 0x2567a4: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x2567a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2567a8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2567A8u;
    {
        const bool branch_taken_0x2567a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2567a8) {
            ctx->pc = 0x2567ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2567A8u;
            // 0x2567ac: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2567C0u;
            goto label_2567c0;
        }
    }
    ctx->pc = 0x2567B0u;
    // 0x2567b0: 0xc08a996  jal         func_22A658
    ctx->pc = 0x2567B0u;
    SET_GPR_U32(ctx, 31, 0x2567B8u);
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x2567B0u, 0x2567B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2567B8u;
label_2567b8:
    // 0x2567b8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2567b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2567bc: 0x0  nop
    ctx->pc = 0x2567bcu;
    // NOP
label_2567c0:
    // 0x2567c0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2567C0u;
    {
        const bool branch_taken_0x2567c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2567c0) {
            ctx->pc = 0x2567ECu;
            goto label_2567ec;
        }
    }
    ctx->pc = 0x2567C8u;
    // 0x2567c8: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x2567c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2567cc: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2567ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2567d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2567D0u;
    {
        const bool branch_taken_0x2567d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2567D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567D0u;
        // 0x2567d4: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567d0) {
            ctx->pc = 0x2567E8u;
            goto label_2567e8;
        }
    }
    ctx->pc = 0x2567D8u;
    // 0x2567d8: 0xc090c4c  jal         func_243130
    ctx->pc = 0x2567D8u;
    SET_GPR_U32(ctx, 31, 0x2567E0u);
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x2567D8u, 0x2567E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2567E0u;
label_2567e0:
    // 0x2567e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2567E0u;
    {
        const bool branch_taken_0x2567e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2567e0) {
            ctx->pc = 0x2567ECu;
            goto label_2567ec;
        }
    }
    ctx->pc = 0x2567E8u;
label_2567e8:
    // 0x2567e8: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x2567e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_2567ec:
    // 0x2567ec: 0xc098560  jal         func_261580
    ctx->pc = 0x2567ECu;
    SET_GPR_U32(ctx, 31, 0x2567F4u);
    ctx->pc = 0x2567F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2567ECu;
    // 0x2567f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2567ECu, 0x2567F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2567F4u;
label_2567f4:
    // 0x2567f4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2567F4u;
    {
        const bool branch_taken_0x2567f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2567F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2567F4u;
        // 0x2567f8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567f4) {
            ctx->pc = 0x2568E8u;
            goto label_2568e8;
        }
    }
    ctx->pc = 0x2567FCu;
label_2567fc:
    // 0x2567fc: 0xdee20218  ld          $v0, 0x218($s7)
    ctx->pc = 0x2567fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 536)));
    // 0x256800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256804: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x256804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256808: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x256808u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25680c: 0xc095eac  jal         func_257AB0
    ctx->pc = 0x25680Cu;
    SET_GPR_U32(ctx, 31, 0x256814u);
    ctx->pc = 0x256810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25680Cu;
    // 0x256810: 0xfee20218  sd          $v0, 0x218($s7) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 23), 536), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257AB0u, 0x25680Cu, 0x256814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256814u;
label_256814:
    // 0x256814: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x256814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x256818: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x256818u;
    {
        const bool branch_taken_0x256818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x256818) {
            ctx->pc = 0x25681Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256818u;
            // 0x25681c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256830u;
            goto label_256830;
        }
    }
    ctx->pc = 0x256820u;
    // 0x256820: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x256820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x256824: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x256824u;
    {
        const bool branch_taken_0x256824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256824u;
        // 0x256828: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256824) {
            ctx->pc = 0x256838u;
            goto label_256838;
        }
    }
    ctx->pc = 0x25682Cu;
    // 0x25682c: 0x0  nop
    ctx->pc = 0x25682cu;
    // NOP
label_256830:
    // 0x256830: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x256830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x256834: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x256834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_256838:
    // 0x256838: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x256838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25683c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x25683cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x256840: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x256840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x256844: 0xa6140088  sh          $s4, 0x88($s0)
    ctx->pc = 0x256844u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 20));
    // 0x256848: 0x3285ffff  andi        $a1, $s4, 0xFFFF
    ctx->pc = 0x256848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x25684c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25684cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x256850: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x256850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x256854: 0x24631548  addiu       $v1, $v1, 0x1548
    ctx->pc = 0x256854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5448));
    // 0x256858: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x256858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25685c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25685cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x256860: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x256860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256864: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x256864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x256868: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x256868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x25686c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25686Cu;
    {
        const bool branch_taken_0x25686c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25686Cu;
        // 0x256870: 0xae030080  sw          $v1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25686c) {
            ctx->pc = 0x256880u;
            goto label_256880;
        }
    }
    ctx->pc = 0x256874u;
    // 0x256874: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x256874u;
    {
        const bool branch_taken_0x256874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256874u;
        // 0x256878: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256874) {
            ctx->pc = 0x256890u;
            goto label_256890;
        }
    }
    ctx->pc = 0x25687Cu;
    // 0x25687c: 0x0  nop
    ctx->pc = 0x25687cu;
    // NOP
label_256880:
    // 0x256880: 0x2c620081  sltiu       $v0, $v1, 0x81
    ctx->pc = 0x256880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x256884: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x256884u;
    {
        const bool branch_taken_0x256884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256884u;
        // 0x256888: 0x8ec3f990  lw          $v1, -0x670($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294965648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256884) {
            ctx->pc = 0x256898u;
            goto label_256898;
        }
    }
    ctx->pc = 0x25688Cu;
    // 0x25688c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x25688cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_256890:
    // 0x256890: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x256890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x256894: 0x8ec3f990  lw          $v1, -0x670($s6)
    ctx->pc = 0x256894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294965648)));
label_256898:
    // 0x256898: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x256898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x25689c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25689cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2568a0: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x2568a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x2568a4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2568a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2568a8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2568a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2568ac: 0x96040088  lhu         $a0, 0x88($s0)
    ctx->pc = 0x2568acu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2568b0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2568b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2568b4: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x2568b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2568b8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2568b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2568bc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2568bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2568c0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2568c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2568c4: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x2568c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x2568c8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2568c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2568cc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2568ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2568d0: 0x96020088  lhu         $v0, 0x88($s0)
    ctx->pc = 0x2568d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2568d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2568d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2568d8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2568d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2568dc: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x2568dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x2568e0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2568e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2568e4: 0x0  nop
    ctx->pc = 0x2568e4u;
    // NOP
label_2568e8:
    // 0x2568e8: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2568E8u;
    {
        const bool branch_taken_0x2568e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2568ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568E8u;
        // 0x2568ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2568e8) {
            ctx->pc = 0x256914u;
            goto label_256914;
        }
    }
    ctx->pc = 0x2568F0u;
    // 0x2568f0: 0x8e43007c  lw          $v1, 0x7C($s2)
    ctx->pc = 0x2568f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x2568f4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2568F4u;
    {
        const bool branch_taken_0x2568f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2568F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2568F4u;
        // 0x2568f8: 0x8ec2f990  lw          $v0, -0x670($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294965648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2568f4) {
            ctx->pc = 0x256914u;
            goto label_256914;
        }
    }
    ctx->pc = 0x2568FCu;
    // 0x2568fc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2568fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x256900: 0x5040ff75  beql        $v0, $zero, . + 4 + (-0x8B << 2)
    ctx->pc = 0x256900u;
    {
        const bool branch_taken_0x256900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256900) {
            ctx->pc = 0x256904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256900u;
            // 0x256904: 0x8e020084  lw          $v0, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2566D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2566d8;
        }
    }
    ctx->pc = 0x256908u;
    // 0x256908: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x256908u;
    {
        const bool branch_taken_0x256908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256908u;
        // 0x25690c: 0x2882000c  slti        $v0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x256908) {
            ctx->pc = 0x256918u;
            goto label_256918;
        }
    }
    ctx->pc = 0x256910u;
label_256910:
    // 0x256910: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x256910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_256914:
    // 0x256914: 0x2882000c  slti        $v0, $a0, 0xC
    ctx->pc = 0x256914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_256918:
    // 0x256918: 0x1440ff61  bnez        $v0, . + 4 + (-0x9F << 2)
    ctx->pc = 0x256918u;
    {
        const bool branch_taken_0x256918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256918u;
        // 0x25691c: 0x4a8c0  sll         $s5, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256918) {
            ctx->pc = 0x2566A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2566a0;
        }
    }
    ctx->pc = 0x256920u;
    // 0x256920: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x256920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x256924: 0x8c501288  lw          $s0, 0x1288($v0)
    ctx->pc = 0x256924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4744)));
    // 0x256928: 0x52000055  beql        $s0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x256928u;
    {
        const bool branch_taken_0x256928 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x256928) {
            ctx->pc = 0x25692Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256928u;
            // 0x25692c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256A80u;
            goto label_256a80;
        }
    }
    ctx->pc = 0x256930u;
    // 0x256930: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x256930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x256934: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x256934u;
    {
        const bool branch_taken_0x256934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256934u;
        // 0x256938: 0x3c15003a  lui         $s5, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256934) {
            ctx->pc = 0x256A7Cu;
            goto label_256a7c;
        }
    }
    ctx->pc = 0x25693Cu;
    // 0x25693c: 0x8ea2f990  lw          $v0, -0x670($s5)
    ctx->pc = 0x25693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965648)));
    // 0x256940: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x256940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x256944: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x256944u;
    {
        const bool branch_taken_0x256944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256944) {
            ctx->pc = 0x256948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256944u;
            // 0x256948: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256A80u;
            goto label_256a80;
        }
    }
    ctx->pc = 0x25694Cu;
    // 0x25694c: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x25694cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x256950: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x256950u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x256954: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x256954u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x256958: 0x26831308  addiu       $v1, $s4, 0x1308
    ctx->pc = 0x256958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4872));
    // 0x25695c: 0x0  nop
    ctx->pc = 0x25695cu;
    // NOP
label_256960:
    // 0x256960: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x256960u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x256964: 0xdc6201d0  ld          $v0, 0x1D0($v1)
    ctx->pc = 0x256964u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 464)));
    // 0x256968: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x256968u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25696c: 0xfc6201d0  sd          $v0, 0x1D0($v1)
    ctx->pc = 0x25696cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 464), GPR_U64(ctx, 2));
    // 0x256970: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x256970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x256974: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x256974u;
    {
        const bool branch_taken_0x256974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256974u;
        // 0x256978: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256974) {
            ctx->pc = 0x256988u;
            goto label_256988;
        }
    }
    ctx->pc = 0x25697Cu;
    // 0x25697c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x25697cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x256980: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x256980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x256984: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x256984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_256988:
    // 0x256988: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x256988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25698c: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x25698cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x256990: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x256990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x256994: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x256994u;
    {
        const bool branch_taken_0x256994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256994u;
        // 0x256998: 0x8e0200a0  lw          $v0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256994) {
            ctx->pc = 0x2569A8u;
            goto label_2569a8;
        }
    }
    ctx->pc = 0x25699Cu;
    // 0x25699c: 0xac6200a0  sw          $v0, 0xA0($v1)
    ctx->pc = 0x25699cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 2));
    // 0x2569a0: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x2569a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2569a4: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x2569a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_2569a8:
    // 0x2569a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2569a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2569ac: 0x26640490  addiu       $a0, $s3, 0x490
    ctx->pc = 0x2569acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1168));
    // 0x2569b0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2569b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2569b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2569b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2569b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2569b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2569bc: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x2569bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2569c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2569c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2569c4: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x2569c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2569c8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2569c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2569cc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2569CCu;
    {
        const bool branch_taken_0x2569cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2569cc) {
            ctx->pc = 0x2569D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2569CCu;
            // 0x2569d0: 0x96020088  lhu         $v0, 0x88($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2569E0u;
            goto label_2569e0;
        }
    }
    ctx->pc = 0x2569D4u;
    // 0x2569d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2569d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2569d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2569D8u;
    {
        const bool branch_taken_0x2569d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2569DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2569D8u;
        // 0x2569dc: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569d8) {
            ctx->pc = 0x2569F8u;
            goto label_2569f8;
        }
    }
    ctx->pc = 0x2569E0u;
label_2569e0:
    // 0x2569e0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2569e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2569e4: 0x24831228  addiu       $v1, $a0, 0x1228
    ctx->pc = 0x2569e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4648));
    // 0x2569e8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2569e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2569ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2569ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2569f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2569f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2569f4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2569f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_2569f8:
    // 0x2569f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2569f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2569fc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2569fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x256a00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x256a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x256a04: 0xde241218  ld          $a0, 0x1218($s1)
    ctx->pc = 0x256a04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 4632)));
    // 0x256a08: 0x6484ffff  daddiu      $a0, $a0, -0x1
    ctx->pc = 0x256a08u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x256a0c: 0xfe241218  sd          $a0, 0x1218($s1)
    ctx->pc = 0x256a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4632), GPR_U64(ctx, 4));
    // 0x256a10: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x256a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x256a14: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x256A14u;
    {
        const bool branch_taken_0x256a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x256a14) {
            ctx->pc = 0x256A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256A14u;
            // 0x256a18: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256A28u;
            goto label_256a28;
        }
    }
    ctx->pc = 0x256A1Cu;
    // 0x256a1c: 0xc08a996  jal         func_22A658
    ctx->pc = 0x256A1Cu;
    SET_GPR_U32(ctx, 31, 0x256A24u);
    ctx->pc = 0x22A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A658u, 0x256A1Cu, 0x256A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A24u;
label_256a24:
    // 0x256a24: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x256a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_256a28:
    // 0x256a28: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x256A28u;
    {
        const bool branch_taken_0x256a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x256a28) {
            ctx->pc = 0x256A54u;
            goto label_256a54;
        }
    }
    ctx->pc = 0x256A30u;
    // 0x256a30: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x256a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x256a34: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x256a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x256a38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x256A38u;
    {
        const bool branch_taken_0x256a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A38u;
        // 0x256a3c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a38) {
            ctx->pc = 0x256A50u;
            goto label_256a50;
        }
    }
    ctx->pc = 0x256A40u;
    // 0x256a40: 0xc090c4c  jal         func_243130
    ctx->pc = 0x256A40u;
    SET_GPR_U32(ctx, 31, 0x256A48u);
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x256A40u, 0x256A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A48u;
label_256a48:
    // 0x256a48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x256A48u;
    {
        const bool branch_taken_0x256a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x256a48) {
            ctx->pc = 0x256A54u;
            goto label_256a54;
        }
    }
    ctx->pc = 0x256A50u;
label_256a50:
    // 0x256a50: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x256a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_256a54:
    // 0x256a54: 0xc098560  jal         func_261580
    ctx->pc = 0x256A54u;
    SET_GPR_U32(ctx, 31, 0x256A5Cu);
    ctx->pc = 0x256A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A54u;
    // 0x256a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x256A54u, 0x256A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A5Cu;
label_256a5c:
    // 0x256a5c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x256A5Cu;
    {
        const bool branch_taken_0x256a5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A5Cu;
        // 0x256a60: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a5c) {
            ctx->pc = 0x256A7Cu;
            goto label_256a7c;
        }
    }
    ctx->pc = 0x256A64u;
    // 0x256a64: 0x8e43007c  lw          $v1, 0x7C($s2)
    ctx->pc = 0x256a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x256a68: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x256A68u;
    {
        const bool branch_taken_0x256a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A68u;
        // 0x256a6c: 0x8ea2f990  lw          $v0, -0x670($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a68) {
            ctx->pc = 0x256A7Cu;
            goto label_256a7c;
        }
    }
    ctx->pc = 0x256A70u;
    // 0x256a70: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x256a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x256a74: 0x1040ffba  beqz        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x256A74u;
    {
        const bool branch_taken_0x256a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A74u;
        // 0x256a78: 0x26831308  addiu       $v1, $s4, 0x1308 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a74) {
            ctx->pc = 0x256960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256960;
        }
    }
    ctx->pc = 0x256A7Cu;
label_256a7c:
    // 0x256a7c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x256a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_256a80:
    // 0x256a80: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x256a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x256a84: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x256a84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x256a88: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x256a88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x256a8c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x256a8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x256a90: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x256a90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x256a94: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x256a94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256a98: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x256a98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256a9c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x256a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256aa0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x256aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256aa4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x256aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256aa8: 0x808c698  j           func_231A60
    ctx->pc = 0x256AA8u;
    ctx->pc = 0x256AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256AA8u;
    // 0x256aac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    ctx->pc = 0x256AB0u;
}
