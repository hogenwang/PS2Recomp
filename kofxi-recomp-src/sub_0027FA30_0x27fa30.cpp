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

// Function: sub_0027FA30
// Address: 0x27fa30 - 0x27fca0
void sub_0027FA30_0x27fa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027FA30_0x27fa30");
#endif

    switch (ctx->pc) {
        case 0x27fa78u: goto label_27fa78;
        case 0x27fa98u: goto label_27fa98;
        case 0x27fab0u: goto label_27fab0;
        case 0x27faccu: goto label_27facc;
        case 0x27fb1cu: goto label_27fb1c;
        case 0x27fb40u: goto label_27fb40;
        case 0x27fb5cu: goto label_27fb5c;
        case 0x27fb74u: goto label_27fb74;
        case 0x27fba4u: goto label_27fba4;
        case 0x27fbb8u: goto label_27fbb8;
        case 0x27fbccu: goto label_27fbcc;
        case 0x27fc18u: goto label_27fc18;
        case 0x27fc20u: goto label_27fc20;
        case 0x27fc44u: goto label_27fc44;
        case 0x27fc5cu: goto label_27fc5c;
        case 0x27fc70u: goto label_27fc70;
        case 0x27fc7cu: goto label_27fc7c;
        default: break;
    }

    ctx->pc = 0x27fa30u;

    // 0x27fa30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27fa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27fa34: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x27fa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x27fa38: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x27fa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x27fa3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27fa3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa40: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27fa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27fa44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27fa44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa48: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x27fa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x27fa4c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x27fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x27fa50: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27fa54: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x27fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x27fa58: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27FA58u;
    {
        const bool branch_taken_0x27fa58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA58u;
        // 0x27fa5c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa58) {
            ctx->pc = 0x27FA68u;
            goto label_27fa68;
        }
    }
    ctx->pc = 0x27FA60u;
    // 0x27fa60: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x27FA60u;
    {
        const bool branch_taken_0x27fa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA60u;
        // 0x27fa64: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa60) {
            ctx->pc = 0x27FB88u;
            goto label_27fb88;
        }
    }
    ctx->pc = 0x27FA68u;
label_27fa68:
    // 0x27fa68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27fa68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa6c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x27FA6Cu;
    {
        const bool branch_taken_0x27fa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA6Cu;
        // 0x27fa70: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa6c) {
            ctx->pc = 0x27FB00u;
            goto label_27fb00;
        }
    }
    ctx->pc = 0x27FA74u;
    // 0x27fa74: 0x0  nop
    ctx->pc = 0x27fa74u;
    // NOP
label_27fa78:
    // 0x27fa78: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x27fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27fa7c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x27fa7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x27fa80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27fa80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa84: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x27fa84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x27fa88: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x27fa88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27fa8c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x27fa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x27fa90: 0xc09fdf8  jal         func_27F7E0
    ctx->pc = 0x27FA90u;
    SET_GPR_U32(ctx, 31, 0x27FA98u);
    ctx->pc = 0x27FA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA90u;
    // 0x27fa94: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F7E0u, 0x27FA90u, 0x27FA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA98u;
label_27fa98:
    // 0x27fa98: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x27FA98u;
    {
        const bool branch_taken_0x27fa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA98u;
        // 0x27fa9c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa98) {
            ctx->pc = 0x27FB84u;
            goto label_27fb84;
        }
    }
    ctx->pc = 0x27FAA0u;
    // 0x27faa0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27faa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27faa4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x27faa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27faa8: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x27FAA8u;
    SET_GPR_U32(ctx, 31, 0x27FAB0u);
    ctx->pc = 0x27FAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FAA8u;
    // 0x27faac: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB80u, 0x27FAA8u, 0x27FAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FAB0u;
label_27fab0:
    // 0x27fab0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x27FAB0u;
    {
        const bool branch_taken_0x27fab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FAB0u;
        // 0x27fab4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fab0) {
            ctx->pc = 0x27FB7Cu;
            goto label_27fb7c;
        }
    }
    ctx->pc = 0x27FAB8u;
    // 0x27fab8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x27fab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x27fabc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x27fabcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27fac0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x27fac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27fac4: 0xc049c48  jal         func_127120
    ctx->pc = 0x27FAC4u;
    SET_GPR_U32(ctx, 31, 0x27FACCu);
    ctx->pc = 0x27FAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FAC4u;
    // 0x27fac8: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x27FAC4u, 0x27FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FACCu;
label_27facc:
    // 0x27facc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x27faccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27fad0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x27fad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x27fad4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27FAD4u;
    {
        const bool branch_taken_0x27fad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FAD4u;
        // 0x27fad8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fad4) {
            ctx->pc = 0x27FAF8u;
            goto label_27faf8;
        }
    }
    ctx->pc = 0x27FADCu;
    // 0x27fadc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27fae0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x27fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x27fae4: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x27fae4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x27fae8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x27fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27faec: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x27faecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x27faf0: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x27faf0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x27faf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_27faf8:
    // 0x27faf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27fafc: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x27fafcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_27fb00:
    // 0x27fb00: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x27fb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x27fb04: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27FB04u;
    {
        const bool branch_taken_0x27fb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB04u;
        // 0x27fb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb04) {
            ctx->pc = 0x27FB2Cu;
            goto label_27fb2c;
        }
    }
    ctx->pc = 0x27FB0Cu;
    // 0x27fb0c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x27fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x27fb10: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x27fb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27fb14: 0xc0a0542  jal         func_281508
    ctx->pc = 0x27FB14u;
    SET_GPR_U32(ctx, 31, 0x27FB1Cu);
    ctx->pc = 0x27FB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB14u;
    // 0x27fb18: 0x452823  subu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281508u, 0x27FB14u, 0x27FB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB1Cu;
label_27fb1c:
    // 0x27fb1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27FB1Cu;
    {
        const bool branch_taken_0x27fb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB1Cu;
        // 0x27fb20: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb1c) {
            ctx->pc = 0x27FB38u;
            goto label_27fb38;
        }
    }
    ctx->pc = 0x27FB24u;
    // 0x27fb24: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x27FB24u;
    {
        const bool branch_taken_0x27fb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB24u;
        // 0x27fb28: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb24) {
            ctx->pc = 0x27FA78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27fa78;
        }
    }
    ctx->pc = 0x27FB2Cu;
label_27fb2c:
    // 0x27fb2c: 0xde020018  ld          $v0, 0x18($s0)
    ctx->pc = 0x27fb2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x27fb30: 0x5c40ffd1  bgtzl       $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x27FB30u;
    {
        const bool branch_taken_0x27fb30 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x27fb30) {
            ctx->pc = 0x27FB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FB30u;
            // 0x27fb34: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FA78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27fa78;
        }
    }
    ctx->pc = 0x27FB38u;
label_27fb38:
    // 0x27fb38: 0xc0a065c  jal         func_281970
    ctx->pc = 0x27FB38u;
    SET_GPR_U32(ctx, 31, 0x27FB40u);
    ctx->pc = 0x27FB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB38u;
    // 0x27fb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281970u, 0x27FB38u, 0x27FB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB40u;
label_27fb40:
    // 0x27fb40: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x27FB40u;
    {
        const bool branch_taken_0x27fb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fb40) {
            ctx->pc = 0x27FB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FB40u;
            // 0x27fb44: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FB90u;
            goto label_27fb90;
        }
    }
    ctx->pc = 0x27FB48u;
    // 0x27fb48: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x27fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x27fb4c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27FB4Cu;
    {
        const bool branch_taken_0x27fb4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB4Cu;
        // 0x27fb50: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb4c) {
            ctx->pc = 0x27FB5Cu;
            goto label_27fb5c;
        }
    }
    ctx->pc = 0x27FB54u;
    // 0x27fb54: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x27FB54u;
    SET_GPR_U32(ctx, 31, 0x27FB5Cu);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x27FB54u, 0x27FB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB5Cu;
label_27fb5c:
    // 0x27fb5c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x27fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x27fb60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27fb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fb64: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27FB64u;
    {
        const bool branch_taken_0x27fb64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB64u;
        // 0x27fb68: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb64) {
            ctx->pc = 0x27FB74u;
            goto label_27fb74;
        }
    }
    ctx->pc = 0x27FB6Cu;
    // 0x27fb6c: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x27FB6Cu;
    SET_GPR_U32(ctx, 31, 0x27FB74u);
    ctx->pc = 0x281C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C30u, 0x27FB6Cu, 0x27FB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB74u;
label_27fb74:
    // 0x27fb74: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27FB74u;
    {
        const bool branch_taken_0x27fb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB74u;
        // 0x27fb78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb74) {
            ctx->pc = 0x27FBD0u;
            goto label_27fbd0;
        }
    }
    ctx->pc = 0x27FB7Cu;
label_27fb7c:
    // 0x27fb7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27FB7Cu;
    {
        const bool branch_taken_0x27fb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FB7Cu;
        // 0x27fb80: 0x24020807  addiu       $v0, $zero, 0x807 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb7c) {
            ctx->pc = 0x27FB88u;
            goto label_27fb88;
        }
    }
    ctx->pc = 0x27FB84u;
label_27fb84:
    // 0x27fb84: 0x2402080d  addiu       $v0, $zero, 0x80D
    ctx->pc = 0x27fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_27fb88:
    // 0x27fb88: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x27fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x27fb8c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x27fb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_27fb90:
    // 0x27fb90: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x27fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x27fb94: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x27fb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x27fb98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27fb98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fb9c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x27FB9Cu;
    SET_GPR_U32(ctx, 31, 0x27FBA4u);
    ctx->pc = 0x27FBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FB9Cu;
    // 0x27fba0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x27FB9Cu, 0x27FBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBA4u;
label_27fba4:
    // 0x27fba4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27fba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fba8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27FBA8u;
    {
        const bool branch_taken_0x27fba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fba8) {
            ctx->pc = 0x27FBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FBA8u;
            // 0x27fbac: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FBBCu;
            goto label_27fbbc;
        }
    }
    ctx->pc = 0x27FBB0u;
    // 0x27fbb0: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x27FBB0u;
    SET_GPR_U32(ctx, 31, 0x27FBB8u);
    ctx->pc = 0x281C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C30u, 0x27FBB0u, 0x27FBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBB8u;
label_27fbb8:
    // 0x27fbb8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x27fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_27fbbc:
    // 0x27fbbc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27FBBCu;
    {
        const bool branch_taken_0x27fbbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBBCu;
        // 0x27fbc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fbbc) {
            ctx->pc = 0x27FBD0u;
            goto label_27fbd0;
        }
    }
    ctx->pc = 0x27FBC4u;
    // 0x27fbc4: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x27FBC4u;
    SET_GPR_U32(ctx, 31, 0x27FBCCu);
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x27FBC4u, 0x27FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FBCCu;
label_27fbcc:
    // 0x27fbcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27fbccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27fbd0:
    // 0x27fbd0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27fbd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27fbd4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x27fbd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27fbd8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x27fbd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27fbdc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x27fbdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27fbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x27FBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FBE0u;
        // 0x27fbe4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FBE8u;
    // 0x27fbe8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27fbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27fbec: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x27fbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27fbf0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27fbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27fbf4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x27fbf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fbf8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27fbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27fbfc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27fbfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27fc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27fc04: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x27fc04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc08: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27fc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27fc0c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27fc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27fc10: 0xc0a2e20  jal         func_28B880
    ctx->pc = 0x27FC10u;
    SET_GPR_U32(ctx, 31, 0x27FC18u);
    ctx->pc = 0x27FC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC10u;
    // 0x27fc14: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B880u, 0x27FC10u, 0x27FC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC18u;
label_27fc18:
    // 0x27fc18: 0xc0a13de  jal         func_284F78
    ctx->pc = 0x27FC18u;
    SET_GPR_U32(ctx, 31, 0x27FC20u);
    ctx->pc = 0x27FC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC18u;
    // 0x27fc1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F78u, 0x27FC18u, 0x27FC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC20u;
label_27fc20:
    // 0x27fc20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27fc20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc24: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27FC24u;
    {
        const bool branch_taken_0x27fc24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC24u;
        // 0x27fc28: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc24) {
            ctx->pc = 0x27FC4Cu;
            goto label_27fc4c;
        }
    }
    ctx->pc = 0x27FC2Cu;
    // 0x27fc2c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x27fc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x27fc30: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x27fc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x27fc34: 0x24060807  addiu       $a2, $zero, 0x807
    ctx->pc = 0x27fc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
    // 0x27fc38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27fc38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc3c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x27FC3Cu;
    SET_GPR_U32(ctx, 31, 0x27FC44u);
    ctx->pc = 0x27FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC3Cu;
    // 0x27fc40: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x27FC3Cu, 0x27FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC44u;
label_27fc44:
    // 0x27fc44: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27FC44u;
    {
        const bool branch_taken_0x27fc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC44u;
        // 0x27fc48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc44) {
            ctx->pc = 0x27FC80u;
            goto label_27fc80;
        }
    }
    ctx->pc = 0x27FC4Cu;
label_27fc4c:
    // 0x27fc4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27fc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc50: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x27fc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x27fc54: 0xc0a1558  jal         func_285560
    ctx->pc = 0x27FC54u;
    SET_GPR_U32(ctx, 31, 0x27FC5Cu);
    ctx->pc = 0x27FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC54u;
    // 0x27fc58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285560u, 0x27FC54u, 0x27FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC5Cu;
label_27fc5c:
    // 0x27fc5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27fc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27fc60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc64: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x27fc64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc68: 0xc09ff28  jal         func_27FCA0
    ctx->pc = 0x27FC68u;
    SET_GPR_U32(ctx, 31, 0x27FC70u);
    ctx->pc = 0x27FC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC68u;
    // 0x27fc6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FCA0u, 0x27FC68u, 0x27FC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC70u;
label_27fc70:
    // 0x27fc70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27fc70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fc74: 0xc0a1430  jal         func_2850C0
    ctx->pc = 0x27FC74u;
    SET_GPR_U32(ctx, 31, 0x27FC7Cu);
    ctx->pc = 0x27FC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FC74u;
    // 0x27fc78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2850C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2850C0u, 0x27FC74u, 0x27FC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FC7Cu;
label_27fc7c:
    // 0x27fc7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27fc7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27fc80:
    // 0x27fc80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27fc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27fc84: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x27fc84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27fc88: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27fc88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27fc8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27fc8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27fc90: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27fc90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fc94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27fc94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fc98: 0x3e00008  jr          $ra
    ctx->pc = 0x27FC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FC98u;
        // 0x27fc9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FCA0u;
}
