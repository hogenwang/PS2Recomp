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

// Function: sub_0016A950
// Address: 0x16a950 - 0x16abf0
void sub_0016A950_0x16a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A950_0x16a950");
#endif

    switch (ctx->pc) {
        case 0x16a9c0u: goto label_16a9c0;
        case 0x16aa7cu: goto label_16aa7c;
        case 0x16ab70u: goto label_16ab70;
        case 0x16ab80u: goto label_16ab80;
        case 0x16ab94u: goto label_16ab94;
        default: break;
    }

    ctx->pc = 0x16a950u;

    // 0x16a950: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x16a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x16a954: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x16a954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x16a958: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x16a958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x16a95c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16a95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16a960: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16a960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16a964: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x16a964u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a968: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16a968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16a96c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x16a96cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a970: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16a970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16a974: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16a974u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a978: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16a978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16a97c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x16a97cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a980: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16a980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16a984: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x16a984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16a988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16a98c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x16a98cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a990: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x16a990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a994: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a998: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x16a998u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16a99c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x16a99cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x16a9a0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x16a9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x16a9a4: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x16a9a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9a8: 0xa0404820  sb          $zero, 0x4820($v0)
    ctx->pc = 0x16a9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 18464), (uint8_t)GPR_U32(ctx, 0));
    // 0x16a9ac: 0x2484aa50  addiu       $a0, $a0, -0x55B0
    ctx->pc = 0x16a9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945360));
    // 0x16a9b0: 0x24a5d458  addiu       $a1, $a1, -0x2BA8
    ctx->pc = 0x16a9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956120));
    // 0x16a9b4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x16a9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16a9b8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x16A9B8u;
    SET_GPR_U32(ctx, 31, 0x16A9C0u);
    ctx->pc = 0x16A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A9B8u;
    // 0x16a9bc: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x16A9B8u, 0x16A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A9C0u;
label_16a9c0:
    // 0x16a9c0: 0x15243c  dsll32      $a0, $s5, 16
    ctx->pc = 0x16a9c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 16));
    // 0x16a9c4: 0x141c3c  dsll32      $v1, $s4, 16
    ctx->pc = 0x16a9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 16));
    // 0x16a9c8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x16a9c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x16a9cc: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x16a9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16a9d0: 0x43c00  sll         $a3, $a0, 16
    ctx->pc = 0x16a9d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16a9d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16a9d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16a9d8: 0x33400  sll         $a2, $v1, 16
    ctx->pc = 0x16a9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x16a9dc: 0x13243c  dsll32      $a0, $s3, 16
    ctx->pc = 0x16a9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 16));
    // 0x16a9e0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x16a9e0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x16a9e4: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x16a9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x16a9e8: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x16a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x16a9ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16a9ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16a9f0: 0x42c00  sll         $a1, $a0, 16
    ctx->pc = 0x16a9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16a9f4: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x16a9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
    // 0x16a9f8: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x16a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x16a9fc: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x16a9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x16aa00: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x16aa00u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x16aa04: 0x171c3c  dsll32      $v1, $s7, 16
    ctx->pc = 0x16aa04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 16));
    // 0x16aa08: 0xad110010  sw          $s1, 0x10($t0)
    ctx->pc = 0x16aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 17));
    // 0x16aa0c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16aa0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16aa10: 0xad100014  sw          $s0, 0x14($t0)
    ctx->pc = 0x16aa10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 16));
    // 0x16aa14: 0xad160018  sw          $s6, 0x18($t0)
    ctx->pc = 0x16aa14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 22));
    // 0x16aa18: 0xad03001c  sw          $v1, 0x1C($t0)
    ctx->pc = 0x16aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
    // 0x16aa1c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x16aa1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16aa20: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16aa20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16aa24: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16aa24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16aa28: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16aa28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16aa2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16aa2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16aa30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16aa30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16aa34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16aa34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16aa38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16aa38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16aa3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16aa3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aa40: 0x3e00008  jr          $ra
    ctx->pc = 0x16AA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA40u;
        // 0x16aa44: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AA48u;
    // 0x16aa48: 0x0  nop
    ctx->pc = 0x16aa48u;
    // NOP
    // 0x16aa4c: 0x0  nop
    ctx->pc = 0x16aa4cu;
    // NOP
    // 0x16aa50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16aa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16aa54: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x16aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x16aa58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16aa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16aa5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16aa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16aa60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16aa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16aa64: 0x90424820  lbu         $v0, 0x4820($v0)
    ctx->pc = 0x16aa64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18464)));
    // 0x16aa68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x16aa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x16aa6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AA6Cu;
    {
        const bool branch_taken_0x16aa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aa6c) {
            ctx->pc = 0x16AA84u;
            goto label_16aa84;
        }
    }
    ctx->pc = 0x16AA74u;
    // 0x16aa74: 0xc055728  jal         func_155CA0
    ctx->pc = 0x16AA74u;
    SET_GPR_U32(ctx, 31, 0x16AA7Cu);
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x16AA74u, 0x16AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA7Cu;
label_16aa7c:
    // 0x16aa7c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x16AA7Cu;
    {
        const bool branch_taken_0x16aa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA7Cu;
        // 0x16aa80: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa7c) {
            ctx->pc = 0x16ABC4u;
            goto label_16abc4;
        }
    }
    ctx->pc = 0x16AA84u;
label_16aa84:
    // 0x16aa84: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x16aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x16aa88: 0x8c42a20c  lw          $v0, -0x5DF4($v0)
    ctx->pc = 0x16aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943244)));
    // 0x16aa8c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x16aa8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x16aa90: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16AA90u;
    {
        const bool branch_taken_0x16aa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA90u;
        // 0x16aa94: 0x8c900010  lw          $s0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa90) {
            ctx->pc = 0x16AA9Cu;
            goto label_16aa9c;
        }
    }
    ctx->pc = 0x16AA98u;
    // 0x16aa98: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x16aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_16aa9c:
    // 0x16aa9c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x16aa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16aaa0: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x16aaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x16aaa4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16aaa8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16aaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16aaac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x16aaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16aab0: 0x63c03  sra         $a3, $a2, 16
    ctx->pc = 0x16aab0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 16));
    // 0x16aab4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x16aab4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16aab8: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x16aab8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16aabc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x16aabcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16aac0: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x16aac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x16aac4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x16aac4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16aac8: 0x0  nop
    ctx->pc = 0x16aac8u;
    // NOP
    // 0x16aacc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16aaccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16aad0: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x16aad0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x16aad4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x16aad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x16aad8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16aadc: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x16aadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x16aae0: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x16aae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x16aae4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x16aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16aae8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16aaec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16aaecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16aaf0: 0x0  nop
    ctx->pc = 0x16aaf0u;
    // NOP
    // 0x16aaf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16aaf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16aaf8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x16aaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x16aafc: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x16aafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x16ab00: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16ab04: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x16ab04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x16ab08: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16ab0c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x16ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16ab10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ab10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ab14: 0x0  nop
    ctx->pc = 0x16ab14u;
    // NOP
    // 0x16ab18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16ab18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16ab1c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x16ab1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x16ab20: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x16ab20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x16ab24: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x16ab24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x16ab28: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16ab2c: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x16ab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x16ab30: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16ab34: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x16ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16ab38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ab38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ab3c: 0x0  nop
    ctx->pc = 0x16ab3cu;
    // NOP
    // 0x16ab40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16ab40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16ab44: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x16ab44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x16ab48: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x16ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16ab4c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16ab50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ab50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ab54: 0x0  nop
    ctx->pc = 0x16ab54u;
    // NOP
    // 0x16ab58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16ab58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16ab5c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x16ab5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x16ab60: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x16ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x16ab64: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x16ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16ab68: 0xc0c4ad0  jal         func_312B40
    ctx->pc = 0x16AB68u;
    SET_GPR_U32(ctx, 31, 0x16AB70u);
    ctx->pc = 0x16AB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB68u;
    // 0x16ab6c: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312B40u, 0x16AB68u, 0x16AB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB70u;
label_16ab70:
    // 0x16ab70: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x16ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16ab74: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x16ab74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16ab78: 0xc05e264  jal         func_178990
    ctx->pc = 0x16AB78u;
    SET_GPR_U32(ctx, 31, 0x16AB80u);
    ctx->pc = 0x16AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB78u;
    // 0x16ab7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178990u, 0x16AB78u, 0x16AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB80u;
label_16ab80:
    // 0x16ab80: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x16ab80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16ab84: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x16ab84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16ab88: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x16ab88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x16ab8c: 0xc05e264  jal         func_178990
    ctx->pc = 0x16AB8Cu;
    SET_GPR_U32(ctx, 31, 0x16AB94u);
    ctx->pc = 0x16AB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB8Cu;
    // 0x16ab90: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178990u, 0x16AB8Cu, 0x16AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB94u;
label_16ab94:
    // 0x16ab94: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x16ab94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16ab98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ab9c: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x16ab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x16aba0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x16aba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x16aba4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16ABA4u;
    {
        const bool branch_taken_0x16aba4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16aba4) {
            ctx->pc = 0x16ABC0u;
            goto label_16abc0;
        }
    }
    ctx->pc = 0x16ABACu;
    // 0x16abac: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x16abacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x16abb0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x16abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x16abb4: 0x90844820  lbu         $a0, 0x4820($a0)
    ctx->pc = 0x16abb4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18464)));
    // 0x16abb8: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x16abb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x16abbc: 0xa0644820  sb          $a0, 0x4820($v1)
    ctx->pc = 0x16abbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18464), (uint8_t)GPR_U32(ctx, 4));
label_16abc0:
    // 0x16abc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16abc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16abc4:
    // 0x16abc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16abc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16abc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16abc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16abcc: 0x3e00008  jr          $ra
    ctx->pc = 0x16ABCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABCCu;
        // 0x16abd0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ABCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16ABD4u;
    // 0x16abd4: 0x0  nop
    ctx->pc = 0x16abd4u;
    // NOP
    // 0x16abd8: 0x0  nop
    ctx->pc = 0x16abd8u;
    // NOP
    // 0x16abdc: 0x0  nop
    ctx->pc = 0x16abdcu;
    // NOP
    // 0x16abe0: 0x8061b84  j           func_186E10
    ctx->pc = 0x16ABE0u;
    ctx->pc = 0x16ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ABE0u;
    // 0x16abe4: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186E10u;
    sub_00186E10_0x186e10(rdram, ctx, runtime); return;
    ctx->pc = 0x16ABE8u;
    // 0x16abe8: 0x0  nop
    ctx->pc = 0x16abe8u;
    // NOP
    // 0x16abec: 0x0  nop
    ctx->pc = 0x16abecu;
    // NOP
}
