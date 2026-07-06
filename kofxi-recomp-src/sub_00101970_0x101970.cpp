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

// Function: sub_00101970
// Address: 0x101970 - 0x102000
void sub_00101970_0x101970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101970_0x101970");
#endif

    switch (ctx->pc) {
        case 0x101b98u: goto label_101b98;
        case 0x101bbcu: goto label_101bbc;
        case 0x101bc4u: goto label_101bc4;
        case 0x101c58u: goto label_101c58;
        case 0x101ca0u: goto label_101ca0;
        case 0x101d24u: goto label_101d24;
        case 0x101d38u: goto label_101d38;
        case 0x101d5cu: goto label_101d5c;
        case 0x101d68u: goto label_101d68;
        case 0x101d78u: goto label_101d78;
        case 0x101e00u: goto label_101e00;
        case 0x101e40u: goto label_101e40;
        case 0x101e60u: goto label_101e60;
        case 0x101ec0u: goto label_101ec0;
        case 0x101ef8u: goto label_101ef8;
        case 0x101f38u: goto label_101f38;
        case 0x101f58u: goto label_101f58;
        case 0x101fa8u: goto label_101fa8;
        default: break;
    }

    ctx->pc = 0x101970u;

    // 0x101970: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x101970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x101974: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x101974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x101978: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x101978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x10197c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x10197cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101980: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x101980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x101984: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x101984u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101988: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x101988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x10198c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x10198cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101990: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x101990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x101994: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x101994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101998: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x101998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10199c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10199cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1019a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1019a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1019a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1019a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1019a8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1019a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1019ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1019acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1019b0: 0xde890040  ld          $t1, 0x40($s4)
    ctx->pc = 0x1019b0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x1019b4: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x1019b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1019b8: 0x31240fff  andi        $a0, $t1, 0xFFF
    ctx->pc = 0x1019b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
    // 0x1019bc: 0x9183e  dsrl32      $v1, $t1, 0
    ctx->pc = 0x1019bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x1019c0: 0x2163a  dsrl        $v0, $v0, 24
    ctx->pc = 0x1019c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 24);
    // 0x1019c4: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x1019c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1019c8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x1019c8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x1019cc: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1019ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1019d0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1019d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1019d4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1019d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1019d8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1019d8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1019dc: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x1019dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1019e0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1019e0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1019e4: 0x2c82003b  sltiu       $v0, $a0, 0x3B
    ctx->pc = 0x1019e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x1019e8: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1019E8u;
    {
        const bool branch_taken_0x1019e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1019ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019E8u;
        // 0x1019ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1019e8) {
            ctx->pc = 0x101B4Cu;
            goto label_101b4c;
        }
    }
    ctx->pc = 0x1019F0u;
    // 0x1019f0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x1019f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x1019f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1019f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1019f8: 0x24429dd0  addiu       $v0, $v0, -0x6230
    ctx->pc = 0x1019f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942160));
    // 0x1019fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1019fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x101a00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x101a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101a04: 0x800008  jr          $a0
    ctx->pc = 0x101A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101A0Cu: goto label_101a0c;
            case 0x101A44u: goto label_101a44;
            case 0x101A94u: goto label_101a94;
            case 0x101ACCu: goto label_101acc;
            case 0x101B00u: goto label_101b00;
            case 0x101B4Cu: goto label_101b4c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101A04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x101A0Cu;
label_101a0c:
    // 0x101a0c: 0x1072018  mult        $a0, $t0, $a3
    ctx->pc = 0x101a0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x101a10: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x101a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x101a14: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x101a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x101a18: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x101a18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x101a1c: 0x61903  sra         $v1, $a2, 4
    ctx->pc = 0x101a1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
    // 0x101a20: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x101a20u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x101a24: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x101a24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x101a28: 0x1260003e  beqz        $s3, . + 4 + (0x3E << 2)
    ctx->pc = 0x101A28u;
    {
        const bool branch_taken_0x101a28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A28u;
        // 0x101a2c: 0x30710007  andi        $s1, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a28) {
            ctx->pc = 0x101B24u;
            goto label_101b24;
        }
    }
    ctx->pc = 0x101A30u;
    // 0x101a30: 0x24e20003  addiu       $v0, $a3, 0x3
    ctx->pc = 0x101a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x101a34: 0x30451ffc  andi        $a1, $v0, 0x1FFC
    ctx->pc = 0x101a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8188);
    // 0x101a38: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x101a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x101a3c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x101A3Cu;
    {
        const bool branch_taken_0x101a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A3Cu;
        // 0x101a40: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a3c) {
            ctx->pc = 0x101B40u;
            goto label_101b40;
        }
    }
    ctx->pc = 0x101A44u;
label_101a44:
    // 0x101a44: 0x1072818  mult        $a1, $t0, $a3
    ctx->pc = 0x101a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x101a48: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x101a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x101a4c: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x101a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
    // 0x101a50: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x101a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x101a54: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x101a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x101a58: 0x62103  sra         $a0, $a2, 4
    ctx->pc = 0x101a58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
    // 0x101a5c: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x101a5cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x101a60: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x101a60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x101a64: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x101A64u;
    {
        const bool branch_taken_0x101a64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A64u;
        // 0x101a68: 0x30910007  andi        $s1, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a64) {
            ctx->pc = 0x101B24u;
            goto label_101b24;
        }
    }
    ctx->pc = 0x101A6Cu;
    // 0x101a6c: 0x24e2000f  addiu       $v0, $a3, 0xF
    ctx->pc = 0x101a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x101a70: 0x30451ff0  andi        $a1, $v0, 0x1FF0
    ctx->pc = 0x101a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8176);
    // 0x101a74: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x101a74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x101a78: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x101a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x101a7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101a80: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x101a80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x101a84: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x101a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x101a88: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x101a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x101a8c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x101A8Cu;
    {
        const bool branch_taken_0x101a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A8Cu;
        // 0x101a90: 0x2476ffff  addiu       $s6, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a8c) {
            ctx->pc = 0x101B4Cu;
            goto label_101b4c;
        }
    }
    ctx->pc = 0x101A94u;
label_101a94:
    // 0x101a94: 0x1071818  mult        $v1, $t0, $a3
    ctx->pc = 0x101a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x101a98: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x101a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x101a9c: 0x34a5fff8  ori         $a1, $a1, 0xFFF8
    ctx->pc = 0x101a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65528);
    // 0x101aa0: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x101aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x101aa4: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x101aa4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
    // 0x101aa8: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x101aa8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x101aac: 0x459024  and         $s2, $v0, $a1
    ctx->pc = 0x101aacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x101ab0: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x101AB0u;
    {
        const bool branch_taken_0x101ab0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x101AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AB0u;
        // 0x101ab4: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ab0) {
            ctx->pc = 0x101B24u;
            goto label_101b24;
        }
    }
    ctx->pc = 0x101AB8u;
    // 0x101ab8: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x101ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x101abc: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x101abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x101ac0: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x101ac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x101ac4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x101AC4u;
    {
        const bool branch_taken_0x101ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AC4u;
        // 0x101ac8: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ac4) {
            ctx->pc = 0x101B40u;
            goto label_101b40;
        }
    }
    ctx->pc = 0x101ACCu;
label_101acc:
    // 0x101acc: 0x1073018  mult        $a2, $t0, $a3
    ctx->pc = 0x101accu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x101ad0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x101ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x101ad4: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x101ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
    // 0x101ad8: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x101ad8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
    // 0x101adc: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x101adcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x101ae0: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x101ae0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x101ae4: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x101AE4u;
    {
        const bool branch_taken_0x101ae4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x101AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AE4u;
        // 0x101ae8: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ae4) {
            ctx->pc = 0x101B24u;
            goto label_101b24;
        }
    }
    ctx->pc = 0x101AECu;
    // 0x101aec: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x101aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x101af0: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x101af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x101af4: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x101af4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x101af8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x101AF8u;
    {
        const bool branch_taken_0x101af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AF8u;
        // 0x101afc: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101af8) {
            ctx->pc = 0x101B40u;
            goto label_101b40;
        }
    }
    ctx->pc = 0x101B00u;
label_101b00:
    // 0x101b00: 0x1071018  mult        $v0, $t0, $a3
    ctx->pc = 0x101b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x101b04: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x101b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x101b08: 0x34a5fff8  ori         $a1, $a1, 0xFFF8
    ctx->pc = 0x101b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65528);
    // 0x101b0c: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x101b0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
    // 0x101b10: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x101b10u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
    // 0x101b14: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x101b14u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x101b18: 0x659024  and         $s2, $v1, $a1
    ctx->pc = 0x101b18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x101b1c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x101B1Cu;
    {
        const bool branch_taken_0x101b1c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x101B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B1Cu;
        // 0x101b20: 0x30710007  andi        $s1, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b1c) {
            ctx->pc = 0x101B30u;
            goto label_101b30;
        }
    }
    ctx->pc = 0x101B24u;
label_101b24:
    // 0x101b24: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x101b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101b28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x101B28u;
    {
        const bool branch_taken_0x101b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B28u;
        // 0x101b2c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b28) {
            ctx->pc = 0x101B4Cu;
            goto label_101b4c;
        }
    }
    ctx->pc = 0x101B30u;
label_101b30:
    // 0x101b30: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x101b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x101b34: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x101b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x101b38: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x101b38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x101b3c: 0x31143  sra         $v0, $v1, 5
    ctx->pc = 0x101b3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
label_101b40:
    // 0x101b40: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x101b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x101b44: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x101b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x101b48: 0x2456ffff  addiu       $s6, $v0, -0x1
    ctx->pc = 0x101b48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_101b4c:
    // 0x101b4c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x101B4Cu;
    {
        const bool branch_taken_0x101b4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x101B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B4Cu;
        // 0x101b50: 0x31230fff  andi        $v1, $t1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b4c) {
            ctx->pc = 0x101B74u;
            goto label_101b74;
        }
    }
    ctx->pc = 0x101B54u;
    // 0x101b54: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x101b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x101b58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x101b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x101b5c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x101b5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x101b60: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x101b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x101b64: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x101b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x101b68: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x101b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x101b6c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x101b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x101b70: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x101b70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_101b74:
    // 0x101b74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x101b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101b78: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x101b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x101b7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x101b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101b80: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x101b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x101b84: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x101B84u;
    {
        const bool branch_taken_0x101b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B84u;
        // 0x101b88: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b84) {
            ctx->pc = 0x101BB4u;
            goto label_101bb4;
        }
    }
    ctx->pc = 0x101B8Cu;
    // 0x101b8c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x101b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x101b90: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x101b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x101b94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101b98:
    // 0x101b98: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x101b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101b9c: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x101B9Cu;
    {
        const bool branch_taken_0x101b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B9Cu;
        // 0x101ba0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101b9c) {
            ctx->pc = 0x101D18u;
            goto label_101d18;
        }
    }
    ctx->pc = 0x101BA4u;
    // 0x101ba4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x101ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101ba8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x101ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x101bac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101BACu;
    {
        const bool branch_taken_0x101bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101BACu;
        // 0x101bb0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101bac) {
            ctx->pc = 0x101B98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101b98;
        }
    }
    ctx->pc = 0x101BB4u;
label_101bb4:
    // 0x101bb4: 0xc0433e0  jal         func_10CF80
    ctx->pc = 0x101BB4u;
    SET_GPR_U32(ctx, 31, 0x101BBCu);
    ctx->pc = 0x10CF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF80u, 0x101BB4u, 0x101BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101BBCu;
label_101bbc:
    // 0x101bbc: 0xc0433e8  jal         func_10CFA0
    ctx->pc = 0x101BBCu;
    SET_GPR_U32(ctx, 31, 0x101BC4u);
    ctx->pc = 0x101BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101BBCu;
    // 0x101bc0: 0x34440200  ori         $a0, $v0, 0x200 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CFA0u, 0x101BBCu, 0x101BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101BC4u;
label_101bc4:
    // 0x101bc4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x101bc4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101bc8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x101bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x101bcc: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x101bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x101bd0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101bd4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x101bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x101bd8: 0x34639020  ori         $v1, $v1, 0x9020
    ctx->pc = 0x101bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36896);
    // 0x101bdc: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x101bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x101be0: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x101be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x101be4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x101be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x101be8: 0x2851024  and         $v0, $s4, $a1
    ctx->pc = 0x101be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
    // 0x101bec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x101becu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x101bf0: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x101BF0u;
    {
        const bool branch_taken_0x101bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x101BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101BF0u;
        // 0x101bf4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101bf0) {
            ctx->pc = 0x101C14u;
            goto label_101c14;
        }
    }
    ctx->pc = 0x101BF8u;
    // 0x101bf8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101bfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x101bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x101c00: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x101c00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x101c04: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x101c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x101c08: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x101c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x101c0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x101C0Cu;
    {
        const bool branch_taken_0x101c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C0Cu;
        // 0x101c10: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c0c) {
            ctx->pc = 0x101C24u;
            goto label_101c24;
        }
    }
    ctx->pc = 0x101C14u;
label_101c14:
    // 0x101c14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101c18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x101c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x101c1c: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x101c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x101c20: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x101c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_101c24:
    // 0x101c24: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x101c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x101c28: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x101c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101c2c: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x101c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x101c30: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x101c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x101c34: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x101c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x101c38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x101c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101c3c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x101c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x101c40: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x101C40u;
    {
        const bool branch_taken_0x101c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C40u;
        // 0x101c44: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c40) {
            ctx->pc = 0x101C74u;
            goto label_101c74;
        }
    }
    ctx->pc = 0x101C48u;
    // 0x101c48: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x101c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x101c4c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x101c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x101c50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c54: 0x0  nop
    ctx->pc = 0x101c54u;
    // NOP
label_101c58:
    // 0x101c58: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x101c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101c5c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x101C5Cu;
    {
        const bool branch_taken_0x101c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C5Cu;
        // 0x101c60: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c5c) {
            ctx->pc = 0x101D18u;
            goto label_101d18;
        }
    }
    ctx->pc = 0x101C64u;
    // 0x101c64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x101c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101c68: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x101c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x101c6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101C6Cu;
    {
        const bool branch_taken_0x101c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C6Cu;
        // 0x101c70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c6c) {
            ctx->pc = 0x101C58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101c58;
        }
    }
    ctx->pc = 0x101C74u;
label_101c74:
    // 0x101c74: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x101c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x101c78: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x101c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x101c7c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x101c7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101c80: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x101c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x101c84: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x101C84u;
    {
        const bool branch_taken_0x101c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x101C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C84u;
        // 0x101c88: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c84) {
            ctx->pc = 0x101CC0u;
            goto label_101cc0;
        }
    }
    ctx->pc = 0x101C8Cu;
    // 0x101c8c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x101c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x101c90: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x101c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x101c94: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x101c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x101c98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c9c: 0x0  nop
    ctx->pc = 0x101c9cu;
    // NOP
label_101ca0:
    // 0x101ca0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x101ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101ca4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x101CA4u;
    {
        const bool branch_taken_0x101ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CA4u;
        // 0x101ca8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ca4) {
            ctx->pc = 0x101D2Cu;
            goto label_101d2c;
        }
    }
    ctx->pc = 0x101CACu;
    // 0x101cac: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x101cacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101cb0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x101cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x101cb4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101CB4u;
    {
        const bool branch_taken_0x101cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CB4u;
        // 0x101cb8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101cb4) {
            ctx->pc = 0x101CA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101ca0;
        }
    }
    ctx->pc = 0x101CBCu;
    // 0x101cbc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x101cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_101cc0:
    // 0x101cc0: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x101cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x101cc4: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x101cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x101cc8: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x101cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x101ccc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x101cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x101cd0: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x101cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
    // 0x101cd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101cd8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x101cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x101cdc: 0x1240004f  beqz        $s2, . + 4 + (0x4F << 2)
    ctx->pc = 0x101CDCu;
    {
        const bool branch_taken_0x101cdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x101CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CDCu;
        // 0x101ce0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101cdc) {
            ctx->pc = 0x101E1Cu;
            goto label_101e1c;
        }
    }
    ctx->pc = 0x101CE4u;
    // 0x101ce4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x101ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x101ce8: 0x34429020  ori         $v0, $v0, 0x9020
    ctx->pc = 0x101ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36896);
    // 0x101cec: 0x2a41824  and         $v1, $s5, $a0
    ctx->pc = 0x101cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 4));
    // 0x101cf0: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x101cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x101cf4: 0x14640031  bne         $v1, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x101CF4u;
    {
        const bool branch_taken_0x101cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x101CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CF4u;
        // 0x101cf8: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101cf4) {
            ctx->pc = 0x101DBCu;
            goto label_101dbc;
        }
    }
    ctx->pc = 0x101CFCu;
    // 0x101cfc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101d00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x101d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x101d04: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x101d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x101d08: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x101d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x101d0c: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x101d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x101d10: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x101D10u;
    {
        const bool branch_taken_0x101d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D10u;
        // 0x101d14: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d10) {
            ctx->pc = 0x101DCCu;
            goto label_101dcc;
        }
    }
    ctx->pc = 0x101D18u;
label_101d18:
    // 0x101d18: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x101d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x101d1c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x101D1Cu;
    SET_GPR_U32(ctx, 31, 0x101D24u);
    ctx->pc = 0x101D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D1Cu;
    // 0x101d20: 0x24849cf0  addiu       $a0, $a0, -0x6310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x101D1Cu, 0x101D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D24u;
label_101d24:
    // 0x101d24: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x101D24u;
    {
        const bool branch_taken_0x101d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D24u;
        // 0x101d28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d24) {
            ctx->pc = 0x101FD4u;
            goto label_101fd4;
        }
    }
    ctx->pc = 0x101D2Cu;
label_101d2c:
    // 0x101d2c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x101d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x101d30: 0xc043e52  jal         func_10F948
    ctx->pc = 0x101D30u;
    SET_GPR_U32(ctx, 31, 0x101D38u);
    ctx->pc = 0x101D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101D30u;
    // 0x101d34: 0x24849d28  addiu       $a0, $a0, -0x62D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x101D30u, 0x101D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D38u;
label_101d38:
    // 0x101d38: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x101d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x101d3c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x101d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x101d40: 0x24428440  addiu       $v0, $v0, -0x7BC0
    ctx->pc = 0x101d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935616));
    // 0x101d44: 0x34845000  ori         $a0, $a0, 0x5000
    ctx->pc = 0x101d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    // 0x101d48: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x101d48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101d4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x101d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101d50: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x101d50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x101d54: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x101D54u;
    {
        const bool branch_taken_0x101d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D54u;
        // 0x101d58: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d54) {
            ctx->pc = 0x101FD8u;
            goto label_101fd8;
        }
    }
    ctx->pc = 0x101D5Cu;
label_101d5c:
    // 0x101d5c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x101d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x101d60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x101D60u;
    {
        const bool branch_taken_0x101d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D60u;
        // 0x101d64: 0x24849d58  addiu       $a0, $a0, -0x62A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d60) {
            ctx->pc = 0x101D70u;
            goto label_101d70;
        }
    }
    ctx->pc = 0x101D68u;
label_101d68:
    // 0x101d68: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x101d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x101d6c: 0x24849d98  addiu       $a0, $a0, -0x6268
    ctx->pc = 0x101d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942104));
label_101d70:
    // 0x101d70: 0xc043e52  jal         func_10F948
    ctx->pc = 0x101D70u;
    SET_GPR_U32(ctx, 31, 0x101D78u);
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x101D70u, 0x101D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D78u;
label_101d78:
    // 0x101d78: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x101d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x101d7c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x101d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x101d80: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x101d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x101d84: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x101d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x101d88: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x101d88u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x101d8c: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x101d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
    // 0x101d90: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x101d90u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x101d94: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x101d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101d98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x101d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101d9c: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x101d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x101da0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101da4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x101da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x101da8: 0x34633c10  ori         $v1, $v1, 0x3C10
    ctx->pc = 0x101da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15376);
    // 0x101dac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x101dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101db0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x101db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x101db4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x101DB4u;
    {
        const bool branch_taken_0x101db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101DB4u;
        // 0x101db8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101db4) {
            ctx->pc = 0x101FD8u;
            goto label_101fd8;
        }
    }
    ctx->pc = 0x101DBCu;
label_101dbc:
    // 0x101dbc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101dc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x101dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x101dc4: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x101dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x101dc8: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x101dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_101dcc:
    // 0x101dcc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x101dccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x101dd0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x101dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101dd4: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x101dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x101dd8: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x101dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x101ddc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x101ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x101de0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x101de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101de4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x101de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x101de8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x101DE8u;
    {
        const bool branch_taken_0x101de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101DE8u;
        // 0x101dec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101de8) {
            ctx->pc = 0x101E1Cu;
            goto label_101e1c;
        }
    }
    ctx->pc = 0x101DF0u;
    // 0x101df0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101df4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x101df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x101df8: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x101df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x101dfc: 0x0  nop
    ctx->pc = 0x101dfcu;
    // NOP
label_101e00:
    // 0x101e00: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x101e00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101e04: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x101E04u;
    {
        const bool branch_taken_0x101e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E04u;
        // 0x101e08: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e04) {
            ctx->pc = 0x101D5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101d5c;
        }
    }
    ctx->pc = 0x101E0Cu;
    // 0x101e0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x101e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101e10: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x101e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x101e14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101E14u;
    {
        const bool branch_taken_0x101e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E14u;
        // 0x101e18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e14) {
            ctx->pc = 0x101E00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101e00;
        }
    }
    ctx->pc = 0x101E1Cu;
label_101e1c:
    // 0x101e1c: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x101E1Cu;
    {
        const bool branch_taken_0x101e1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E1Cu;
        // 0x101e20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e1c) {
            ctx->pc = 0x101E94u;
            goto label_101e94;
        }
    }
    ctx->pc = 0x101E24u;
    // 0x101e24: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x101e24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x101e28: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x101e28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x101e2c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x101e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x101e30: 0x35293c00  ori         $t1, $t1, 0x3C00
    ctx->pc = 0x101e30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)15360);
    // 0x101e34: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x101e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x101e38: 0x3c0a1f00  lui         $t2, 0x1F00
    ctx->pc = 0x101e38u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)7936 << 16));
    // 0x101e3c: 0x35085000  ori         $t0, $t0, 0x5000
    ctx->pc = 0x101e3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20480);
label_101e40:
    // 0x101e40: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x101e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x101e44: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x101e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x101e48: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x101E48u;
    {
        const bool branch_taken_0x101e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E48u;
        // 0x101e4c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e48) {
            ctx->pc = 0x101E7Cu;
            goto label_101e7c;
        }
    }
    ctx->pc = 0x101E50u;
    // 0x101e50: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x101e50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x101e54: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x101e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x101e58: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x101e58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x101e5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101e60:
    // 0x101e60: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x101e60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101e64: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x101E64u;
    {
        const bool branch_taken_0x101e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E64u;
        // 0x101e68: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e64) {
            ctx->pc = 0x101D68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101d68;
        }
    }
    ctx->pc = 0x101E6Cu;
    // 0x101e6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x101e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101e70: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x101e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x101e74: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101E74u;
    {
        const bool branch_taken_0x101e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E74u;
        // 0x101e78: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e74) {
            ctx->pc = 0x101E60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101e60;
        }
    }
    ctx->pc = 0x101E7Cu;
label_101e7c:
    // 0x101e7c: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x101e7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x101e80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x101e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x101e84: 0xb1182a  slt         $v1, $a1, $s1
    ctx->pc = 0x101e84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x101e88: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x101e88u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x101e8c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x101E8Cu;
    {
        const bool branch_taken_0x101e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x101E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E8Cu;
        // 0x101e90: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e8c) {
            ctx->pc = 0x101E40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101e40;
        }
    }
    ctx->pc = 0x101E94u;
label_101e94:
    // 0x101e94: 0x1260003c  beqz        $s3, . + 4 + (0x3C << 2)
    ctx->pc = 0x101E94u;
    {
        const bool branch_taken_0x101e94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101E94u;
        // 0x101e98: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e94) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101E9Cu;
    // 0x101e9c: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x101e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x101ea0: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x101ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x101ea4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x101ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101ea8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x101ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x101eac: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x101EACu;
    {
        const bool branch_taken_0x101eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x101EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EACu;
        // 0x101eb0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101eac) {
            ctx->pc = 0x101EE0u;
            goto label_101ee0;
        }
    }
    ctx->pc = 0x101EB4u;
    // 0x101eb4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x101eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x101eb8: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x101eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x101ebc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101ec0:
    // 0x101ec0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x101ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101ec4: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x101EC4u;
    {
        const bool branch_taken_0x101ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EC4u;
        // 0x101ec8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ec4) {
            ctx->pc = 0x101D68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101d68;
        }
    }
    ctx->pc = 0x101ECCu;
    // 0x101ecc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x101eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101ed0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x101ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x101ed4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101ED4u;
    {
        const bool branch_taken_0x101ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101ED4u;
        // 0x101ed8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ed4) {
            ctx->pc = 0x101EC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101ec0;
        }
    }
    ctx->pc = 0x101EDCu;
    // 0x101edc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_101ee0:
    // 0x101ee0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ee4: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x101ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x101ee8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x101ee8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101eec: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x101EECu;
    {
        const bool branch_taken_0x101eec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x101EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EECu;
        // 0x101ef0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101eec) {
            ctx->pc = 0x101F1Cu;
            goto label_101f1c;
        }
    }
    ctx->pc = 0x101EF4u;
    // 0x101ef4: 0x2513021  addu        $a2, $s2, $s1
    ctx->pc = 0x101ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_101ef8:
    // 0x101ef8: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x101ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x101efc: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x101efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x101f00: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x101f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x101f04: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x101f04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101f08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x101f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x101f0c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x101f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x101f10: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x101f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x101f14: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x101F14u;
    {
        const bool branch_taken_0x101f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F14u;
        // 0x101f18: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f14) {
            ctx->pc = 0x101EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101ef8;
        }
    }
    ctx->pc = 0x101F1Cu;
label_101f1c:
    // 0x101f1c: 0x1ac0001a  blez        $s6, . + 4 + (0x1A << 2)
    ctx->pc = 0x101F1Cu;
    {
        const bool branch_taken_0x101f1c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x101F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F1Cu;
        // 0x101f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f1c) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101F24u;
    // 0x101f24: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x101f24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x101f28: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x101f28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x101f2c: 0x35083c00  ori         $t0, $t0, 0x3C00
    ctx->pc = 0x101f2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)15360);
    // 0x101f30: 0x3c091f00  lui         $t1, 0x1F00
    ctx->pc = 0x101f30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)7936 << 16));
    // 0x101f34: 0x34e75000  ori         $a3, $a3, 0x5000
    ctx->pc = 0x101f34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)20480);
label_101f38:
    // 0x101f38: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x101f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x101f3c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x101f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x101f40: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x101F40u;
    {
        const bool branch_taken_0x101f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F40u;
        // 0x101f44: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f40) {
            ctx->pc = 0x101F74u;
            goto label_101f74;
        }
    }
    ctx->pc = 0x101F48u;
    // 0x101f48: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x101f48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x101f4c: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x101f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x101f50: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x101f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x101f54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101f58:
    // 0x101f58: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x101f58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101f5c: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x101F5Cu;
    {
        const bool branch_taken_0x101f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F5Cu;
        // 0x101f60: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f5c) {
            ctx->pc = 0x101D68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101d68;
        }
    }
    ctx->pc = 0x101F64u;
    // 0x101f64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x101f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101f68: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x101f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x101f6c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101F6Cu;
    {
        const bool branch_taken_0x101f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F6Cu;
        // 0x101f70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f6c) {
            ctx->pc = 0x101F58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101f58;
        }
    }
    ctx->pc = 0x101F74u;
label_101f74:
    // 0x101f74: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x101f74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x101f78: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x101f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x101f7c: 0xb6182a  slt         $v1, $a1, $s6
    ctx->pc = 0x101f7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x101f80: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x101F80u;
    {
        const bool branch_taken_0x101f80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x101F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F80u;
        // 0x101f84: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f80) {
            ctx->pc = 0x101F38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101f38;
        }
    }
    ctx->pc = 0x101F88u;
label_101f88:
    // 0x101f88: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x101f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x101f8c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x101f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x101f90: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x101f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x101f94: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x101f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
    // 0x101f98: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x101f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x101f9c: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x101f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101fa0: 0xc0433e8  jal         func_10CFA0
    ctx->pc = 0x101FA0u;
    SET_GPR_U32(ctx, 31, 0x101FA8u);
    ctx->pc = 0x101FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101FA0u;
    // 0x101fa4: 0xfc600000  sd          $zero, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CFA0u, 0x101FA0u, 0x101FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FA8u;
label_101fa8:
    // 0x101fa8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x101fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x101fac: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x101facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x101fb0: 0x24638440  addiu       $v1, $v1, -0x7BC0
    ctx->pc = 0x101fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935616));
    // 0x101fb4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x101fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x101fb8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x101fb8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101fbc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x101fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x101fc0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101fc4: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x101fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x101fc8: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x101fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x101fcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101fd0: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x101fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
label_101fd4:
    // 0x101fd4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x101fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_101fd8:
    // 0x101fd8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x101fd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x101fdc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x101fdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101fe0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x101fe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101fe4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x101fe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101fe8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x101fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101fec: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x101fecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101ff0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x101ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x101FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101FF4u;
        // 0x101ff8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101FFCu;
    // 0x101ffc: 0x0  nop
    ctx->pc = 0x101ffcu;
    // NOP
}
