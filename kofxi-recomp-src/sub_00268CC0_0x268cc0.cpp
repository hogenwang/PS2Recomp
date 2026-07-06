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

// Function: sub_00268CC0
// Address: 0x268cc0 - 0x268f18
void sub_00268CC0_0x268cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268CC0_0x268cc0");
#endif

    switch (ctx->pc) {
        case 0x268cecu: goto label_268cec;
        case 0x268d0cu: goto label_268d0c;
        case 0x268d4cu: goto label_268d4c;
        case 0x268d64u: goto label_268d64;
        case 0x268d74u: goto label_268d74;
        case 0x268d94u: goto label_268d94;
        case 0x268da8u: goto label_268da8;
        case 0x268dc4u: goto label_268dc4;
        case 0x268dd4u: goto label_268dd4;
        case 0x268de8u: goto label_268de8;
        case 0x268decu: goto label_268dec;
        case 0x268e00u: goto label_268e00;
        case 0x268e14u: goto label_268e14;
        case 0x268e30u: goto label_268e30;
        case 0x268e40u: goto label_268e40;
        case 0x268e60u: goto label_268e60;
        case 0x268ea0u: goto label_268ea0;
        case 0x268edcu: goto label_268edc;
        case 0x268eecu: goto label_268eec;
        default: break;
    }

    ctx->pc = 0x268cc0u;

    // 0x268cc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x268cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x268cc4: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x268cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x268cc8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x268cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x268ccc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x268cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x268cd0: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x268cd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x268cd4: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x268cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x268cd8: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x268cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x268cdc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x268cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x268ce0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x268ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x268ce4: 0xc097d9a  jal         func_25F668
    ctx->pc = 0x268CE4u;
    SET_GPR_U32(ctx, 31, 0x268CECu);
    ctx->pc = 0x268CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268CE4u;
    // 0x268ce8: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F668u, 0x268CE4u, 0x268CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268CECu;
label_268cec:
    // 0x268cec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x268cecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268cf0: 0x6a10005  bgez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x268CF0u;
    {
        const bool branch_taken_0x268cf0 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x268CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CF0u;
        // 0x268cf4: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268cf0) {
            ctx->pc = 0x268D08u;
            goto label_268d08;
        }
    }
    ctx->pc = 0x268CF8u;
    // 0x268cf8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x268cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x268cfc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x268cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x268d00: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x268D00u;
    {
        const bool branch_taken_0x268d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D00u;
        // 0x268d04: 0x24a57dd8  addiu       $a1, $a1, 0x7DD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d00) {
            ctx->pc = 0x268D8Cu;
            goto label_268d8c;
        }
    }
    ctx->pc = 0x268D08u;
label_268d08:
    // 0x268d08: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x268d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_268d0c:
    // 0x268d0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x268d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268d10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x268d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x268d14: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x268d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x268d18: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x268d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x268d1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x268d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268d20: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x268d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x268d24: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x268d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x268d28: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x268d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x268d2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x268d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268d30: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x268d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x268d34: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x268d34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268d38: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x268d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x268d3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x268d3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268d40: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x268d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x268d44: 0xc097c56  jal         func_25F158
    ctx->pc = 0x268D44u;
    SET_GPR_U32(ctx, 31, 0x268D4Cu);
    ctx->pc = 0x268D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268D44u;
    // 0x268d48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F158u, 0x268D44u, 0x268D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268D4Cu;
label_268d4c:
    // 0x268d4c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268D4Cu;
    {
        const bool branch_taken_0x268d4c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x268D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D4Cu;
        // 0x268d50: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d4c) {
            ctx->pc = 0x268D64u;
            goto label_268d64;
        }
    }
    ctx->pc = 0x268D54u;
    // 0x268d54: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x268d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x268d58: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x268d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x268d5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x268D5Cu;
    {
        const bool branch_taken_0x268d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D5Cu;
        // 0x268d60: 0x24a57e08  addiu       $a1, $a1, 0x7E08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d5c) {
            ctx->pc = 0x268D8Cu;
            goto label_268d8c;
        }
    }
    ctx->pc = 0x268D64u;
label_268d64:
    // 0x268d64: 0x10800062  beqz        $a0, . + 4 + (0x62 << 2)
    ctx->pc = 0x268D64u;
    {
        const bool branch_taken_0x268d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D64u;
        // 0x268d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d64) {
            ctx->pc = 0x268EF0u;
            goto label_268ef0;
        }
    }
    ctx->pc = 0x268D6Cu;
    // 0x268d6c: 0xc098552  jal         func_261548
    ctx->pc = 0x268D6Cu;
    SET_GPR_U32(ctx, 31, 0x268D74u);
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x268D6Cu, 0x268D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268D74u;
label_268d74:
    // 0x268d74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x268d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268d78: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x268D78u;
    {
        const bool branch_taken_0x268d78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x268D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D78u;
        // 0x268d7c: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d78) {
            ctx->pc = 0x268D9Cu;
            goto label_268d9c;
        }
    }
    ctx->pc = 0x268D80u;
    // 0x268d80: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x268d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x268d84: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x268d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x268d88: 0x24a57e38  addiu       $a1, $a1, 0x7E38
    ctx->pc = 0x268d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32312));
label_268d8c:
    // 0x268d8c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x268D8Cu;
    SET_GPR_U32(ctx, 31, 0x268D94u);
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x268D8Cu, 0x268D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268D94u;
label_268d94:
    // 0x268d94: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x268D94u;
    {
        const bool branch_taken_0x268d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D94u;
        // 0x268d98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d94) {
            ctx->pc = 0x268EF0u;
            goto label_268ef0;
        }
    }
    ctx->pc = 0x268D9Cu;
label_268d9c:
    // 0x268d9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268da0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x268DA0u;
    SET_GPR_U32(ctx, 31, 0x268DA8u);
    ctx->pc = 0x268DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268DA0u;
    // 0x268da4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x268DA0u, 0x268DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268DA8u;
label_268da8:
    // 0x268da8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x268da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268dac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x268dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x268db0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x268db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268db4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x268db4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268db8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x268db8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268dbc: 0xc097c56  jal         func_25F158
    ctx->pc = 0x268DBCu;
    SET_GPR_U32(ctx, 31, 0x268DC4u);
    ctx->pc = 0x268DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268DBCu;
    // 0x268dc0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F158u, 0x268DBCu, 0x268DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268DC4u;
label_268dc4:
    // 0x268dc4: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x268DC4u;
    {
        const bool branch_taken_0x268dc4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x268DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DC4u;
        // 0x268dc8: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268dc4) {
            ctx->pc = 0x268E08u;
            goto label_268e08;
        }
    }
    ctx->pc = 0x268DCCu;
    // 0x268dcc: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x268DCCu;
    SET_GPR_U32(ctx, 31, 0x268DD4u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x268DCCu, 0x268DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268DD4u;
label_268dd4:
    // 0x268dd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x268dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268dd8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x268dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x268ddc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268DDCu;
    {
        const bool branch_taken_0x268ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x268DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DDCu;
        // 0x268de0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ddc) {
            ctx->pc = 0x268DF4u;
            goto label_268df4;
        }
    }
    ctx->pc = 0x268DE4u;
    // 0x268de4: 0xc098560  jal         func_261580
label_268de8:
    if (ctx->pc == 0x268DE8u) {
        ctx->pc = 0x268DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DE4u;
        // 0x268de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268DECu;
        goto label_268dec;
    }
    ctx->pc = 0x268DE4u;
    SET_GPR_U32(ctx, 31, 0x268DECu);
    ctx->pc = 0x268DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268DE4u;
    // 0x268de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x268DE4u, 0x268DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268DECu;
label_268dec:
    // 0x268dec: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
    ctx->pc = 0x268DECu;
    {
        const bool branch_taken_0x268dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268DECu;
        // 0x268df0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268dec) {
            ctx->pc = 0x268D0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_268d0c;
        }
    }
    ctx->pc = 0x268DF4u;
label_268df4:
    // 0x268df4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x268df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x268df8: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x268DF8u;
    SET_GPR_U32(ctx, 31, 0x268E00u);
    ctx->pc = 0x268DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268DF8u;
    // 0x268dfc: 0x24a57e08  addiu       $a1, $a1, 0x7E08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x268DF8u, 0x268E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E00u;
label_268e00:
    // 0x268e00: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x268E00u;
    {
        const bool branch_taken_0x268e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268e00) {
            ctx->pc = 0x268ECCu;
            goto label_268ecc;
        }
    }
    ctx->pc = 0x268E08u;
label_268e08:
    // 0x268e08: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x268e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x268e0c: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x268E0Cu;
    SET_GPR_U32(ctx, 31, 0x268E14u);
    ctx->pc = 0x268E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E0Cu;
    // 0x268e10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEE8u, 0x268E0Cu, 0x268E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E14u;
label_268e14:
    // 0x268e14: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x268e14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e18: 0x6810007  bgez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x268E18u;
    {
        const bool branch_taken_0x268e18 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x268E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E18u;
        // 0x268e1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e18) {
            ctx->pc = 0x268E38u;
            goto label_268e38;
        }
    }
    ctx->pc = 0x268E20u;
    // 0x268e20: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x268e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x268e24: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x268e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x268e28: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x268E28u;
    SET_GPR_U32(ctx, 31, 0x268E30u);
    ctx->pc = 0x268E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E28u;
    // 0x268e2c: 0x24a57e68  addiu       $a1, $a1, 0x7E68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x268E28u, 0x268E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E30u;
label_268e30:
    // 0x268e30: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x268E30u;
    {
        const bool branch_taken_0x268e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268e30) {
            ctx->pc = 0x268ECCu;
            goto label_268ecc;
        }
    }
    ctx->pc = 0x268E38u;
label_268e38:
    // 0x268e38: 0xc0977aa  jal         func_25DEA8
    ctx->pc = 0x268E38u;
    SET_GPR_U32(ctx, 31, 0x268E40u);
    ctx->pc = 0x268E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E38u;
    // 0x268e3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DEA8u, 0x268E38u, 0x268E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268E40u;
label_268e40:
    // 0x268e40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x268e40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e44: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x268e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268e48: 0x2239021  addu        $s2, $s1, $v1
    ctx->pc = 0x268e48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x268e4c: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x268e4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x268e50: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x268E50u;
    {
        const bool branch_taken_0x268e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E50u;
        // 0x268e54: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e50) {
            ctx->pc = 0x268ECCu;
            goto label_268ecc;
        }
    }
    ctx->pc = 0x268E58u;
    // 0x268e58: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x268e58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268e5c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x268e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_268e60:
    // 0x268e60: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x268e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x268e64: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x268E64u;
    {
        const bool branch_taken_0x268e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268e64) {
            ctx->pc = 0x268E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268E64u;
            // 0x268e68: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268EBCu;
            goto label_268ebc;
        }
    }
    ctx->pc = 0x268E6Cu;
    // 0x268e6c: 0x92030079  lbu         $v1, 0x79($s0)
    ctx->pc = 0x268e6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 121)));
    // 0x268e70: 0x54760012  bnel        $v1, $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x268E70u;
    {
        const bool branch_taken_0x268e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x268e70) {
            ctx->pc = 0x268E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268E70u;
            // 0x268e74: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268EBCu;
            goto label_268ebc;
        }
    }
    ctx->pc = 0x268E78u;
    // 0x268e78: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x268e78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x268e7c: 0x5455000f  bnel        $v0, $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x268E7Cu;
    {
        const bool branch_taken_0x268e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x268e7c) {
            ctx->pc = 0x268E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268E7Cu;
            // 0x268e80: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268EBCu;
            goto label_268ebc;
        }
    }
    ctx->pc = 0x268E84u;
    // 0x268e84: 0xae130014  sw          $s3, 0x14($s0)
    ctx->pc = 0x268e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
    // 0x268e88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x268e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e8c: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x268e8cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x268e90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x268e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268e94: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x268e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x268e98: 0xc09754a  jal         func_25D528
    ctx->pc = 0x268E98u;
    SET_GPR_U32(ctx, 31, 0x268EA0u);
    ctx->pc = 0x268E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268E98u;
    // 0x268e9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D528u, 0x268E98u, 0x268EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268EA0u;
label_268ea0:
    // 0x268ea0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x268ea0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x268ea4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x268ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x268ea8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x268ea8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x268eac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x268eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x268eb0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x268EB0u;
    {
        const bool branch_taken_0x268eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268eb0) {
            ctx->pc = 0x268ECCu;
            goto label_268ecc;
        }
    }
    ctx->pc = 0x268EB8u;
    // 0x268eb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x268eb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_268ebc:
    // 0x268ebc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x268ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x268ec0: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x268ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x268ec4: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x268EC4u;
    {
        const bool branch_taken_0x268ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268ec4) {
            ctx->pc = 0x268EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268EC4u;
            // 0x268ec8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268E60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_268e60;
        }
    }
    ctx->pc = 0x268ECCu;
label_268ecc:
    // 0x268ecc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x268ECCu;
    {
        const bool branch_taken_0x268ecc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x268ecc) {
            ctx->pc = 0x268EDCu;
            goto label_268edc;
        }
    }
    ctx->pc = 0x268ED4u;
    // 0x268ed4: 0xc098560  jal         func_261580
    ctx->pc = 0x268ED4u;
    SET_GPR_U32(ctx, 31, 0x268EDCu);
    ctx->pc = 0x268ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268ED4u;
    // 0x268ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x268ED4u, 0x268EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268EDCu;
label_268edc:
    // 0x268edc: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x268EDCu;
    {
        const bool branch_taken_0x268edc = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x268EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EDCu;
        // 0x268ee0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268edc) {
            ctx->pc = 0x268EF0u;
            goto label_268ef0;
        }
    }
    ctx->pc = 0x268EE4u;
    // 0x268ee4: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x268EE4u;
    SET_GPR_U32(ctx, 31, 0x268EECu);
    ctx->pc = 0x268EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268EE4u;
    // 0x268ee8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F278u, 0x268EE4u, 0x268EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268EECu;
label_268eec:
    // 0x268eec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x268eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268ef0:
    // 0x268ef0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x268ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x268ef4: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x268ef4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x268ef8: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x268ef8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x268efc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x268efcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x268f00: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x268f00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x268f04: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x268f04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x268f08: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x268f08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268f0c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x268f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268f10: 0x3e00008  jr          $ra
    ctx->pc = 0x268F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F10u;
        // 0x268f14: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268F18u;
}
