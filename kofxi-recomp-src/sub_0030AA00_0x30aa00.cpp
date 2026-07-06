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

// Function: sub_0030AA00
// Address: 0x30aa00 - 0x30ab40
void sub_0030AA00_0x30aa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AA00_0x30aa00");
#endif

    switch (ctx->pc) {
        case 0x30aa14u: goto label_30aa14;
        case 0x30aa4cu: goto label_30aa4c;
        case 0x30aa68u: goto label_30aa68;
        case 0x30aa70u: goto label_30aa70;
        case 0x30aaa8u: goto label_30aaa8;
        case 0x30aac4u: goto label_30aac4;
        case 0x30aaccu: goto label_30aacc;
        case 0x30ab04u: goto label_30ab04;
        case 0x30ab20u: goto label_30ab20;
        case 0x30ab28u: goto label_30ab28;
        case 0x30ab30u: goto label_30ab30;
        default: break;
    }

    ctx->pc = 0x30aa00u;

    // 0x30aa00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30aa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30aa04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30aa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30aa08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30aa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30aa0c: 0xc0c29cc  jal         func_30A730
    ctx->pc = 0x30AA0Cu;
    SET_GPR_U32(ctx, 31, 0x30AA14u);
    ctx->pc = 0x30AA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AA0Cu;
    // 0x30aa10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A730u, 0x30AA0Cu, 0x30AA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AA14u;
label_30aa14:
    // 0x30aa14: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30aa18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30aa1c: 0x8c424738  lw          $v0, 0x4738($v0)
    ctx->pc = 0x30aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18232)));
    // 0x30aa20: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30AA20u;
    {
        const bool branch_taken_0x30aa20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30aa20) {
            ctx->pc = 0x30AA70u;
            goto label_30aa70;
        }
    }
    ctx->pc = 0x30AA28u;
    // 0x30aa28: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x30aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x30aa2c: 0x8c421de0  lw          $v0, 0x1DE0($v0)
    ctx->pc = 0x30aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7648)));
    // 0x30aa30: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30AA30u;
    {
        const bool branch_taken_0x30aa30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30aa30) {
            ctx->pc = 0x30AA70u;
            goto label_30aa70;
        }
    }
    ctx->pc = 0x30AA38u;
    // 0x30aa38: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30aa3c: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30aa40: 0x24632000  addiu       $v1, $v1, 0x2000
    ctx->pc = 0x30aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x30aa44: 0xc0c29e0  jal         func_30A780
    ctx->pc = 0x30AA44u;
    SET_GPR_U32(ctx, 31, 0x30AA4Cu);
    ctx->pc = 0x30AA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AA44u;
    // 0x30aa48: 0xac4320c0  sw          $v1, 0x20C0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8384), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A780u, 0x30AA44u, 0x30AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AA4Cu;
label_30aa4c:
    // 0x30aa4c: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30aa50: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x30aa50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30aa54: 0x8c424738  lw          $v0, 0x4738($v0)
    ctx->pc = 0x30aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18232)));
    // 0x30aa58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30aa5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30aa5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aa60: 0xc0c2988  jal         func_30A620
    ctx->pc = 0x30AA60u;
    SET_GPR_U32(ctx, 31, 0x30AA68u);
    ctx->pc = 0x30AA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AA60u;
    // 0x30aa64: 0x433004  sllv        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A620u, 0x30AA60u, 0x30AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AA68u;
label_30aa68:
    // 0x30aa68: 0xc0c2a44  jal         func_30A910
    ctx->pc = 0x30AA68u;
    SET_GPR_U32(ctx, 31, 0x30AA70u);
    ctx->pc = 0x30A910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A910u, 0x30AA68u, 0x30AA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AA70u;
label_30aa70:
    // 0x30aa70: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30aa74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30aa78: 0x8c424740  lw          $v0, 0x4740($v0)
    ctx->pc = 0x30aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18240)));
    // 0x30aa7c: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30AA7Cu;
    {
        const bool branch_taken_0x30aa7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30aa7c) {
            ctx->pc = 0x30AACCu;
            goto label_30aacc;
        }
    }
    ctx->pc = 0x30AA84u;
    // 0x30aa84: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x30aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x30aa88: 0x8c421de4  lw          $v0, 0x1DE4($v0)
    ctx->pc = 0x30aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7652)));
    // 0x30aa8c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30AA8Cu;
    {
        const bool branch_taken_0x30aa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30aa8c) {
            ctx->pc = 0x30AACCu;
            goto label_30aacc;
        }
    }
    ctx->pc = 0x30AA94u;
    // 0x30aa94: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30aa98: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30aa9c: 0x24632040  addiu       $v1, $v1, 0x2040
    ctx->pc = 0x30aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8256));
    // 0x30aaa0: 0xc0c29e0  jal         func_30A780
    ctx->pc = 0x30AAA0u;
    SET_GPR_U32(ctx, 31, 0x30AAA8u);
    ctx->pc = 0x30AAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AAA0u;
    // 0x30aaa4: 0xac4320c0  sw          $v1, 0x20C0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8384), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A780u, 0x30AAA0u, 0x30AAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AAA8u;
label_30aaa8:
    // 0x30aaa8: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30aaac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x30aaacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30aab0: 0x8c424740  lw          $v0, 0x4740($v0)
    ctx->pc = 0x30aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18240)));
    // 0x30aab4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30aab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30aab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aabc: 0xc0c2988  jal         func_30A620
    ctx->pc = 0x30AABCu;
    SET_GPR_U32(ctx, 31, 0x30AAC4u);
    ctx->pc = 0x30AAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AABCu;
    // 0x30aac0: 0x433004  sllv        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A620u, 0x30AABCu, 0x30AAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AAC4u;
label_30aac4:
    // 0x30aac4: 0xc0c2a44  jal         func_30A910
    ctx->pc = 0x30AAC4u;
    SET_GPR_U32(ctx, 31, 0x30AACCu);
    ctx->pc = 0x30A910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A910u, 0x30AAC4u, 0x30AACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AACCu;
label_30aacc:
    // 0x30aacc: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30aad0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30aad4: 0x8c424748  lw          $v0, 0x4748($v0)
    ctx->pc = 0x30aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18248)));
    // 0x30aad8: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30AAD8u;
    {
        const bool branch_taken_0x30aad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x30aad8) {
            ctx->pc = 0x30AB28u;
            goto label_30ab28;
        }
    }
    ctx->pc = 0x30AAE0u;
    // 0x30aae0: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x30aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x30aae4: 0x8c421de8  lw          $v0, 0x1DE8($v0)
    ctx->pc = 0x30aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7656)));
    // 0x30aae8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30AAE8u;
    {
        const bool branch_taken_0x30aae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30aae8) {
            ctx->pc = 0x30AB28u;
            goto label_30ab28;
        }
    }
    ctx->pc = 0x30AAF0u;
    // 0x30aaf0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30aaf4: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30aaf8: 0x24632080  addiu       $v1, $v1, 0x2080
    ctx->pc = 0x30aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8320));
    // 0x30aafc: 0xc0c29e0  jal         func_30A780
    ctx->pc = 0x30AAFCu;
    SET_GPR_U32(ctx, 31, 0x30AB04u);
    ctx->pc = 0x30AB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AAFCu;
    // 0x30ab00: 0xac4320c0  sw          $v1, 0x20C0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8384), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A780u, 0x30AAFCu, 0x30AB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB04u;
label_30ab04:
    // 0x30ab04: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30ab08: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x30ab08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ab0c: 0x8c424748  lw          $v0, 0x4748($v0)
    ctx->pc = 0x30ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18248)));
    // 0x30ab10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ab14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30ab14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ab18: 0xc0c2988  jal         func_30A620
    ctx->pc = 0x30AB18u;
    SET_GPR_U32(ctx, 31, 0x30AB20u);
    ctx->pc = 0x30AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AB18u;
    // 0x30ab1c: 0x433004  sllv        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A620u, 0x30AB18u, 0x30AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB20u;
label_30ab20:
    // 0x30ab20: 0xc0c2a44  jal         func_30A910
    ctx->pc = 0x30AB20u;
    SET_GPR_U32(ctx, 31, 0x30AB28u);
    ctx->pc = 0x30A910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A910u, 0x30AB20u, 0x30AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB28u;
label_30ab28:
    // 0x30ab28: 0xc0c29f8  jal         func_30A7E0
    ctx->pc = 0x30AB28u;
    SET_GPR_U32(ctx, 31, 0x30AB30u);
    ctx->pc = 0x30A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7E0u, 0x30AB28u, 0x30AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB30u;
label_30ab30:
    // 0x30ab30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30ab30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ab34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30ab34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ab38: 0x3e00008  jr          $ra
    ctx->pc = 0x30AB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AB38u;
        // 0x30ab3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AB40u;
}
