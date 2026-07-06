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

// Function: sub_00222C18
// Address: 0x222c18 - 0x222e20
void sub_00222C18_0x222c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222C18_0x222c18");
#endif

    switch (ctx->pc) {
        case 0x222c40u: goto label_222c40;
        case 0x222c6cu: goto label_222c6c;
        case 0x222ca8u: goto label_222ca8;
        case 0x222cecu: goto label_222cec;
        case 0x222d04u: goto label_222d04;
        case 0x222d24u: goto label_222d24;
        case 0x222d30u: goto label_222d30;
        case 0x222d38u: goto label_222d38;
        case 0x222d6cu: goto label_222d6c;
        case 0x222da4u: goto label_222da4;
        case 0x222dc0u: goto label_222dc0;
        case 0x222dd8u: goto label_222dd8;
        case 0x222df0u: goto label_222df0;
        case 0x222e00u: goto label_222e00;
        default: break;
    }

    ctx->pc = 0x222c18u;

    // 0x222c18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x222c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x222c1c: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x222c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x222c20: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x222c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x222c24: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x222c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x222c28: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x222c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x222c2c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x222c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x222c30: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x222c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x222c34: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x222c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x222c38: 0xc087fa0  jal         func_21FE80
    ctx->pc = 0x222C38u;
    SET_GPR_U32(ctx, 31, 0x222C40u);
    ctx->pc = 0x222C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222C38u;
    // 0x222c3c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FE80u, 0x222C38u, 0x222C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C40u;
label_222c40:
    // 0x222c40: 0x8e6e0838  lw          $t6, 0x838($s3)
    ctx->pc = 0x222c40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2104)));
    // 0x222c44: 0x240f0800  addiu       $t7, $zero, 0x800
    ctx->pc = 0x222c44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x222c48: 0x1eea023  subu        $s4, $t7, $t6
    ctx->pc = 0x222c48u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x222c4c: 0x1a800038  blez        $s4, . + 4 + (0x38 << 2)
    ctx->pc = 0x222C4Cu;
    {
        const bool branch_taken_0x222c4c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x222C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C4Cu;
        // 0x222c50: 0x26e7821  addu        $t7, $s3, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c4c) {
            ctx->pc = 0x222D30u;
            goto label_222d30;
        }
    }
    ctx->pc = 0x222C54u;
    // 0x222c54: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x222c54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x222c58: 0x25f50034  addiu       $s5, $t7, 0x34
    ctx->pc = 0x222c58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 15), 52));
    // 0x222c5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x222c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x222c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c64: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x222C64u;
    SET_GPR_U32(ctx, 31, 0x222C6Cu);
    ctx->pc = 0x222C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222C64u;
    // 0x222c68: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x222C64u, 0x222C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C6Cu;
label_222c6c:
    // 0x222c6c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222c70: 0x8e6d000c  lw          $t5, 0xC($s3)
    ctx->pc = 0x222c70u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x222c74: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x222c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x222c78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x222c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c80: 0xd7143  sra         $t6, $t5, 5
    ctx->pc = 0x222c80u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 13), 5));
    // 0x222c84: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x222c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x222c88: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x222c88u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x222c8c: 0x31ad001f  andi        $t5, $t5, 0x1F
    ctx->pc = 0x222c8cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)31);
    // 0x222c90: 0x1dd7021  addu        $t6, $t6, $sp
    ctx->pc = 0x222c90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 29)));
    // 0x222c94: 0x1b06804  sllv        $t5, $s0, $t5
    ctx->pc = 0x222c94u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 13) & 0x1F));
    // 0x222c98: 0x8dcf0010  lw          $t7, 0x10($t6)
    ctx->pc = 0x222c98u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x222c9c: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x222c9cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x222ca0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x222CA0u;
    SET_GPR_U32(ctx, 31, 0x222CA8u);
    ctx->pc = 0x222CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222CA0u;
    // 0x222ca4: 0xadcf0010  sw          $t7, 0x10($t6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x222CA0u, 0x222CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222CA8u;
label_222ca8:
    // 0x222ca8: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x222ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x222cac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x222cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222cb0: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x222cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x222cb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x222cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222cb8: 0x47143  sra         $t6, $a0, 5
    ctx->pc = 0x222cb8u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 4), 5));
    // 0x222cbc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x222cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x222cc0: 0x308f001f  andi        $t7, $a0, 0x1F
    ctx->pc = 0x222cc0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x222cc4: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x222cc4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x222cc8: 0x1f08004  sllv        $s0, $s0, $t7
    ctx->pc = 0x222cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 15) & 0x1F));
    // 0x222ccc: 0x1dd7021  addu        $t6, $t6, $sp
    ctx->pc = 0x222cccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 29)));
    // 0x222cd0: 0x8dcf0030  lw          $t7, 0x30($t6)
    ctx->pc = 0x222cd0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 48)));
    // 0x222cd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x222cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x222cd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x222cd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222cdc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x222cdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ce0: 0x1f07825  or          $t7, $t7, $s0
    ctx->pc = 0x222ce0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 16));
    // 0x222ce4: 0xc097978  jal         func_25E5E0
    ctx->pc = 0x222CE4u;
    SET_GPR_U32(ctx, 31, 0x222CECu);
    ctx->pc = 0x222CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222CE4u;
    // 0x222ce8: 0xadcf0030  sw          $t7, 0x30($t6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 14), 48), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E5E0u, 0x222CE4u, 0x222CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222CECu;
label_222cec:
    // 0x222cec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x222CECu;
    {
        const bool branch_taken_0x222cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CECu;
        // 0x222cf0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cec) {
            ctx->pc = 0x222D30u;
            goto label_222d30;
        }
    }
    ctx->pc = 0x222CF4u;
    // 0x222cf4: 0x5c400019  bgtzl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x222CF4u;
    {
        const bool branch_taken_0x222cf4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x222cf4) {
            ctx->pc = 0x222CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222CF4u;
            // 0x222cf8: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222D5Cu;
            goto label_222d5c;
        }
    }
    ctx->pc = 0x222CFCu;
    // 0x222cfc: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222CFCu;
    SET_GPR_U32(ctx, 31, 0x222D04u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222CFCu, 0x222D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D04u;
label_222d04:
    // 0x222d04: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x222d04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222d08: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x222d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x222d0c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x222d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x222d10: 0x24842ff8  addiu       $a0, $a0, 0x2FF8
    ctx->pc = 0x222d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12280));
    // 0x222d14: 0x25083008  addiu       $t0, $t0, 0x3008
    ctx->pc = 0x222d14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12296));
    // 0x222d18: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x222d18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d1c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x222d1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d20: 0x240500ce  addiu       $a1, $zero, 0xCE
    ctx->pc = 0x222d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
label_222d24:
    // 0x222d24: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x222d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222d28: 0xc089794  jal         func_225E50
    ctx->pc = 0x222D28u;
    SET_GPR_U32(ctx, 31, 0x222D30u);
    ctx->pc = 0x222D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D28u;
    // 0x222d2c: 0x2407d8e6  addiu       $a3, $zero, -0x271A (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957286));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225E50u, 0x222D28u, 0x222D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D30u;
label_222d30:
    // 0x222d30: 0xc087fac  jal         func_21FEB0
    ctx->pc = 0x222D30u;
    SET_GPR_U32(ctx, 31, 0x222D38u);
    ctx->pc = 0x21FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FEB0u, 0x222D30u, 0x222D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D38u;
label_222d38:
    // 0x222d38: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x222d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x222d3c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x222d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x222d40: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x222d40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x222d44: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x222d44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x222d48: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x222d48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x222d4c: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x222d4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x222d50: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x222d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x222d54: 0x3e00008  jr          $ra
    ctx->pc = 0x222D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D54u;
        // 0x222d58: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222D5Cu;
label_222d5c:
    // 0x222d5c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x222d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d60: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x222d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d64: 0xc09765c  jal         func_25D970
    ctx->pc = 0x222D64u;
    SET_GPR_U32(ctx, 31, 0x222D6Cu);
    ctx->pc = 0x222D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D64u;
    // 0x222d68: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D970u, 0x222D64u, 0x222D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D6Cu;
label_222d6c:
    // 0x222d6c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x222d6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x222d70: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x222d70u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x222d74: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222D74u;
    {
        const bool branch_taken_0x222d74 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x222d74) {
            ctx->pc = 0x222D8Cu;
            goto label_222d8c;
        }
    }
    ctx->pc = 0x222D7Cu;
    // 0x222d7c: 0x8e6f0838  lw          $t7, 0x838($s3)
    ctx->pc = 0x222d7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2104)));
    // 0x222d80: 0xae601048  sw          $zero, 0x1048($s3)
    ctx->pc = 0x222d80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4168), GPR_U32(ctx, 0));
    // 0x222d84: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x222d84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x222d88: 0xae6f0838  sw          $t7, 0x838($s3)
    ctx->pc = 0x222d88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2104), GPR_U32(ctx, 15));
label_222d8c:
    // 0x222d8c: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x222D8Cu;
    {
        const bool branch_taken_0x222d8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x222D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D8Cu;
        // 0x222d90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d8c) {
            ctx->pc = 0x222DC8u;
            goto label_222dc8;
        }
    }
    ctx->pc = 0x222D94u;
    // 0x222d94: 0xae601048  sw          $zero, 0x1048($s3)
    ctx->pc = 0x222d94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4168), GPR_U32(ctx, 0));
    // 0x222d98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x222d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x222d9c: 0xc089144  jal         func_224510
    ctx->pc = 0x222D9Cu;
    SET_GPR_U32(ctx, 31, 0x222DA4u);
    ctx->pc = 0x222DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D9Cu;
    // 0x222da0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x222D9Cu, 0x222DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222DA4u;
label_222da4:
    // 0x222da4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x222da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x222da8: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x222da8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x222dac: 0x24842ff8  addiu       $a0, $a0, 0x2FF8
    ctx->pc = 0x222dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12280));
    // 0x222db0: 0x24e73020  addiu       $a3, $a3, 0x3020
    ctx->pc = 0x222db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12320));
    // 0x222db4: 0x240500df  addiu       $a1, $zero, 0xDF
    ctx->pc = 0x222db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x222db8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x222DB8u;
    SET_GPR_U32(ctx, 31, 0x222DC0u);
    ctx->pc = 0x222DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222DB8u;
    // 0x222dbc: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x222DB8u, 0x222DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222DC0u;
label_222dc0:
    // 0x222dc0: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x222DC0u;
    {
        const bool branch_taken_0x222dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222dc0) {
            ctx->pc = 0x222D30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222d30;
        }
    }
    ctx->pc = 0x222DC8u;
label_222dc8:
    // 0x222dc8: 0x601ffd9  bgez        $s0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x222DC8u;
    {
        const bool branch_taken_0x222dc8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x222dc8) {
            ctx->pc = 0x222D30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222d30;
        }
    }
    ctx->pc = 0x222DD0u;
    // 0x222dd0: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222DD0u;
    SET_GPR_U32(ctx, 31, 0x222DD8u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222DD0u, 0x222DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222DD8u;
label_222dd8:
    // 0x222dd8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x222dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222ddc: 0x240f000b  addiu       $t7, $zero, 0xB
    ctx->pc = 0x222ddcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x222de0: 0x122fffd3  beq         $s1, $t7, . + 4 + (-0x2D << 2)
    ctx->pc = 0x222DE0u;
    {
        const bool branch_taken_0x222de0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 15));
        if (branch_taken_0x222de0) {
            ctx->pc = 0x222D30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222d30;
        }
    }
    ctx->pc = 0x222DE8u;
    // 0x222de8: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x222DE8u;
    SET_GPR_U32(ctx, 31, 0x222DF0u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x222DE8u, 0x222DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222DF0u;
label_222df0:
    // 0x222df0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x222df0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222df4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x222df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222df8: 0xc089144  jal         func_224510
    ctx->pc = 0x222DF8u;
    SET_GPR_U32(ctx, 31, 0x222E00u);
    ctx->pc = 0x222DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222DF8u;
    // 0x222dfc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224510u, 0x222DF8u, 0x222E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222E00u;
label_222e00:
    // 0x222e00: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x222e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x222e04: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x222e04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x222e08: 0x24842ff8  addiu       $a0, $a0, 0x2FF8
    ctx->pc = 0x222e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12280));
    // 0x222e0c: 0x25083038  addiu       $t0, $t0, 0x3038
    ctx->pc = 0x222e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12344));
    // 0x222e10: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x222e10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e14: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x222e14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222e18: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
    ctx->pc = 0x222E18u;
    {
        const bool branch_taken_0x222e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222E18u;
        // 0x222e1c: 0x240500f6  addiu       $a1, $zero, 0xF6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222e18) {
            ctx->pc = 0x222D24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_222d24;
        }
    }
    ctx->pc = 0x222E20u;
}
