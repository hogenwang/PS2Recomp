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

// Function: sub_0017FBA0
// Address: 0x17fba0 - 0x17fdd0
void sub_0017FBA0_0x17fba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FBA0_0x17fba0");
#endif

    switch (ctx->pc) {
        case 0x17fc3cu: goto label_17fc3c;
        case 0x17fc5cu: goto label_17fc5c;
        case 0x17fc88u: goto label_17fc88;
        case 0x17fce8u: goto label_17fce8;
        case 0x17fd30u: goto label_17fd30;
        case 0x17fd38u: goto label_17fd38;
        default: break;
    }

    ctx->pc = 0x17fba0u;

    // 0x17fba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fba4: 0x50a2000e  beql        $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17FBA4u;
    {
        const bool branch_taken_0x17fba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x17fba4) {
            ctx->pc = 0x17FBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FBA4u;
            // 0x17fba8: 0x8c8300dc  lw          $v1, 0xDC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FBE0u;
            goto label_17fbe0;
        }
    }
    ctx->pc = 0x17FBACu;
    // 0x17fbac: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FBACu;
    {
        const bool branch_taken_0x17fbac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fbac) {
            ctx->pc = 0x17FBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FBACu;
            // 0x17fbb0: 0x8c840518  lw          $a0, 0x518($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FBBCu;
            goto label_17fbbc;
        }
    }
    ctx->pc = 0x17FBB4u;
    // 0x17fbb4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x17FBB4u;
    {
        const bool branch_taken_0x17fbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBB4u;
        // 0x17fbb8: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbb4) {
            ctx->pc = 0x17FC00u;
            goto label_17fc00;
        }
    }
    ctx->pc = 0x17FBBCu;
label_17fbbc:
    // 0x17fbbc: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x17fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x17fbc0: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x17fbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x17fbc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17fbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17fbc8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FBC8u;
    {
        const bool branch_taken_0x17fbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fbc8) {
            ctx->pc = 0x17FBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FBC8u;
            // 0x17fbcc: 0x9082027f  lbu         $v0, 0x27F($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 639)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FBD8u;
            goto label_17fbd8;
        }
    }
    ctx->pc = 0x17FBD0u;
    // 0x17fbd0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17FBD0u;
    {
        const bool branch_taken_0x17fbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBD0u;
        // 0x17fbd4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbd0) {
            ctx->pc = 0x17FC18u;
            goto label_17fc18;
        }
    }
    ctx->pc = 0x17FBD8u;
label_17fbd8:
    // 0x17fbd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17FBD8u;
    {
        const bool branch_taken_0x17fbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBD8u;
        // 0x17fbdc: 0x3044000f  andi        $a0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbd8) {
            ctx->pc = 0x17FBFCu;
            goto label_17fbfc;
        }
    }
    ctx->pc = 0x17FBE0u;
label_17fbe0:
    // 0x17fbe0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x17fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x17fbe4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17fbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17fbe8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FBE8u;
    {
        const bool branch_taken_0x17fbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fbe8) {
            ctx->pc = 0x17FBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FBE8u;
            // 0x17fbec: 0x9082027f  lbu         $v0, 0x27F($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 639)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FBF8u;
            goto label_17fbf8;
        }
    }
    ctx->pc = 0x17FBF0u;
    // 0x17fbf0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17FBF0u;
    {
        const bool branch_taken_0x17fbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBF0u;
        // 0x17fbf4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbf0) {
            ctx->pc = 0x17FC18u;
            goto label_17fc18;
        }
    }
    ctx->pc = 0x17FBF8u;
label_17fbf8:
    // 0x17fbf8: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x17fbf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_17fbfc:
    // 0x17fbfc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x17fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_17fc00:
    // 0x17fc00: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x17fc04: 0x24423c60  addiu       $v0, $v0, 0x3C60
    ctx->pc = 0x17fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15456));
    // 0x17fc08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17fc0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fc10: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17fc14: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17fc14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_17fc18:
    // 0x17fc18: 0x3e00008  jr          $ra
    ctx->pc = 0x17FC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FC20u;
    // 0x17fc20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17fc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17fc24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17fc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17fc28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17fc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17fc2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17fc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17fc30: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17fc34: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x17FC34u;
    SET_GPR_U32(ctx, 31, 0x17FC3Cu);
    ctx->pc = 0x17FC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC34u;
    // 0x17fc38: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F20u, 0x17FC34u, 0x17FC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC3Cu;
label_17fc3c:
    // 0x17fc3c: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x17fc3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17fc40: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x17fc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17fc44: 0x960400f2  lhu         $a0, 0xF2($s0)
    ctx->pc = 0x17fc44u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
    // 0x17fc48: 0x5083005b  beql        $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x17FC48u;
    {
        const bool branch_taken_0x17fc48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17fc48) {
            ctx->pc = 0x17FC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FC48u;
            // 0x17fc4c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FDB8u;
            goto label_17fdb8;
        }
    }
    ctx->pc = 0x17FC50u;
    // 0x17fc50: 0xa60400f0  sh          $a0, 0xF0($s0)
    ctx->pc = 0x17fc50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 4));
    // 0x17fc54: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x17FC54u;
    SET_GPR_U32(ctx, 31, 0x17FC5Cu);
    ctx->pc = 0x17FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC54u;
    // 0x17fc58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABF0u, 0x17FC54u, 0x17FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC5Cu;
label_17fc5c:
    // 0x17fc5c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x17fc5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17fc60: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x17fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x17fc64: 0xa60400f2  sh          $a0, 0xF2($s0)
    ctx->pc = 0x17fc64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 4));
    // 0x17fc68: 0x9063f35a  lbu         $v1, -0xCA6($v1)
    ctx->pc = 0x17fc68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964058)));
    // 0x17fc6c: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x17FC6Cu;
    {
        const bool branch_taken_0x17fc6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fc6c) {
            ctx->pc = 0x17FD90u;
            goto label_17fd90;
        }
    }
    ctx->pc = 0x17FC74u;
    // 0x17fc74: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x17fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x17fc78: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x17fc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x17fc7c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x17fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x17fc80: 0xc062894  jal         func_18A250
    ctx->pc = 0x17FC80u;
    SET_GPR_U32(ctx, 31, 0x17FC88u);
    ctx->pc = 0x17FC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC80u;
    // 0x17fc84: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A250u, 0x17FC80u, 0x17FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC88u;
label_17fc88:
    // 0x17fc88: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x17fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x17fc8c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17fc90: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x17fc90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17fc94: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x17fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x17fc98: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x17fc98u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x17fc9c: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x17fc9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x17fca0: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x17fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x17fca4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x17fca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17fca8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17fca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17fcac: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17fcacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17fcb0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17fcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17fcb4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17fcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17fcb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17fcbc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x17fcbcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17fcc0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x17fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17fcc4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x17FCC4u;
    {
        const bool branch_taken_0x17fcc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fcc4) {
            ctx->pc = 0x17FD68u;
            goto label_17fd68;
        }
    }
    ctx->pc = 0x17FCCCu;
    // 0x17fccc: 0x8e030538  lw          $v1, 0x538($s0)
    ctx->pc = 0x17fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
    // 0x17fcd0: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x17fcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x17fcd4: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x17FCD4u;
    {
        const bool branch_taken_0x17fcd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fcd4) {
            ctx->pc = 0x17FDB4u;
            goto label_17fdb4;
        }
    }
    ctx->pc = 0x17FCDCu;
    // 0x17fcdc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x17fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17fce0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x17FCE0u;
    SET_GPR_U32(ctx, 31, 0x17FCE8u);
    ctx->pc = 0x17FCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCE0u;
    // 0x17fce4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x17FCE0u, 0x17FCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FCE8u;
label_17fce8:
    // 0x17fce8: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x17fce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x17fcec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17fcf0: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x17fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x17fcf4: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x17fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x17fcf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17fcf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fcfc: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x17fcfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x17fd00: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x17fd00u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x17fd04: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x17fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17fd08: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17fd0c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17fd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17fd10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17fd14: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17fd14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x17fd18: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17fd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17fd1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17fd20: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x17fd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x17fd24: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x17fd24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x17fd28: 0xa202057c  sb          $v0, 0x57C($s0)
    ctx->pc = 0x17fd28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1404), (uint8_t)GPR_U32(ctx, 2));
    // 0x17fd2c: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x17fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_17fd30:
    // 0x17fd30: 0xc058bf0  jal         func_162FC0
    ctx->pc = 0x17FD30u;
    SET_GPR_U32(ctx, 31, 0x17FD38u);
    ctx->pc = 0x17FD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD30u;
    // 0x17fd34: 0x322500ff  andi        $a1, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x162FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162FC0u, 0x17FD30u, 0x17FD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD38u;
label_17fd38:
    // 0x17fd38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FD38u;
    {
        const bool branch_taken_0x17fd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fd38) {
            ctx->pc = 0x17FD48u;
            goto label_17fd48;
        }
    }
    ctx->pc = 0x17FD40u;
    // 0x17fd40: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x17fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x17fd44: 0xa043057c  sb          $v1, 0x57C($v0)
    ctx->pc = 0x17fd44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1404), (uint8_t)GPR_U32(ctx, 3));
label_17fd48:
    // 0x17fd48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17fd48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17fd4c: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x17fd4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17fd50: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17FD50u;
    {
        const bool branch_taken_0x17fd50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fd50) {
            ctx->pc = 0x17FD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FD50u;
            // 0x17fd54: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FD30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17fd30;
        }
    }
    ctx->pc = 0x17FD58u;
    // 0x17fd58: 0x8e030538  lw          $v1, 0x538($s0)
    ctx->pc = 0x17fd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
    // 0x17fd5c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x17fd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x17fd60: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17FD60u;
    {
        const bool branch_taken_0x17fd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD60u;
        // 0x17fd64: 0xae030538  sw          $v1, 0x538($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd60) {
            ctx->pc = 0x17FDB4u;
            goto label_17fdb4;
        }
    }
    ctx->pc = 0x17FD68u;
label_17fd68:
    // 0x17fd68: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x17fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x17fd6c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x17fd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x17fd70: 0x8c65d918  lw          $a1, -0x26E8($v1)
    ctx->pc = 0x17fd70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x17fd74: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x17fd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x17fd78: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x17FD78u;
    {
        const bool branch_taken_0x17fd78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fd78) {
            ctx->pc = 0x17FDB4u;
            goto label_17fdb4;
        }
    }
    ctx->pc = 0x17FD80u;
    // 0x17fd80: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x17fd80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x17fd84: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x17fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x17fd88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17FD88u;
    {
        const bool branch_taken_0x17fd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD88u;
        // 0x17fd8c: 0xac64d918  sw          $a0, -0x26E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957336), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd88) {
            ctx->pc = 0x17FDB4u;
            goto label_17fdb4;
        }
    }
    ctx->pc = 0x17FD90u;
label_17fd90:
    // 0x17fd90: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x17fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x17fd94: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x17fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x17fd98: 0x8c65d918  lw          $a1, -0x26E8($v1)
    ctx->pc = 0x17fd98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x17fd9c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x17fd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x17fda0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17FDA0u;
    {
        const bool branch_taken_0x17fda0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fda0) {
            ctx->pc = 0x17FDB4u;
            goto label_17fdb4;
        }
    }
    ctx->pc = 0x17FDA8u;
    // 0x17fda8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x17fda8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x17fdac: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x17fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x17fdb0: 0xac64d918  sw          $a0, -0x26E8($v1)
    ctx->pc = 0x17fdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957336), GPR_U32(ctx, 4));
label_17fdb4:
    // 0x17fdb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17fdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17fdb8:
    // 0x17fdb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17fdb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fdbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17fdbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fdc0: 0x3e00008  jr          $ra
    ctx->pc = 0x17FDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDC0u;
        // 0x17fdc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FDC8u;
    // 0x17fdc8: 0x0  nop
    ctx->pc = 0x17fdc8u;
    // NOP
    // 0x17fdcc: 0x0  nop
    ctx->pc = 0x17fdccu;
    // NOP
    if (ctx->pc == 0x17fdccu) { ctx->pc = 0x17fdd0u; }
}
