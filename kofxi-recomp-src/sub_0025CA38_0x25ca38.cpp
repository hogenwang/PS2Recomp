#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025CA38
// Address: 0x25ca38 - 0x25cb68
void sub_0025CA38_0x25ca38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CA38_0x25ca38");
#endif

    switch (ctx->pc) {
        case 0x25ca5cu: goto label_25ca5c;
        case 0x25ca68u: goto label_25ca68;
        case 0x25ca70u: goto label_25ca70;
        case 0x25ca94u: goto label_25ca94;
        case 0x25caacu: goto label_25caac;
        case 0x25caecu: goto label_25caec;
        case 0x25cb28u: goto label_25cb28;
        case 0x25cb38u: goto label_25cb38;
        case 0x25cb48u: goto label_25cb48;
        default: break;
    }

    ctx->pc = 0x25ca38u;

    // 0x25ca38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25ca38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25ca3c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25ca3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25ca40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25ca40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25ca44: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x25ca44u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x25ca48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25ca48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25ca4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25ca4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25ca50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25ca50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25ca54: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x25CA54u;
    SET_GPR_U32(ctx, 31, 0x25CA5Cu);
    ctx->pc = 0x25CA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CA54u;
            // 0x25ca58: 0x3c1201c1  lui         $s2, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CA5Cu; }
        if (ctx->pc != 0x25CA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CA5Cu; }
        if (ctx->pc != 0x25CA5Cu) { return; }
    }
    ctx->pc = 0x25CA5Cu;
label_25ca5c:
    // 0x25ca5c: 0x8e641750  lw          $a0, 0x1750($s3)
    ctx->pc = 0x25ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5968)));
    // 0x25ca60: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x25CA60u;
    SET_GPR_U32(ctx, 31, 0x25CA68u);
    ctx->pc = 0x25CA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CA60u;
            // 0x25ca64: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CA68u; }
        if (ctx->pc != 0x25CA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CA68u; }
        if (ctx->pc != 0x25CA68u) { return; }
    }
    ctx->pc = 0x25CA68u;
label_25ca68:
    // 0x25ca68: 0x8e50ae90  lw          $s0, -0x5170($s2)
    ctx->pc = 0x25ca68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294946448)));
    // 0x25ca6c: 0x0  nop
    ctx->pc = 0x25ca6cu;
    // NOP
label_25ca70:
    // 0x25ca70: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25CA70u;
    {
        const bool branch_taken_0x25ca70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ca70) {
            ctx->pc = 0x25CA8Cu;
            goto label_25ca8c;
        }
    }
    ctx->pc = 0x25CA78u;
    // 0x25ca78: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x25ca78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25ca7c: 0x5451fffc  bnel        $v0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x25CA7Cu;
    {
        const bool branch_taken_0x25ca7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x25ca7c) {
            ctx->pc = 0x25CA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25CA7Cu;
            // 0x25ca80: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25CA70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25ca70;
        }
    }
    ctx->pc = 0x25CA84u;
    // 0x25ca84: 0x56000012  bnel        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x25CA84u;
    {
        const bool branch_taken_0x25ca84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ca84) {
            ctx->pc = 0x25CA88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25CA84u;
            // 0x25ca88: 0x86020046  lh          $v0, 0x46($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25CAD0u;
            goto label_25cad0;
        }
    }
    ctx->pc = 0x25CA8Cu;
label_25ca8c:
    // 0x25ca8c: 0xc098552  jal         func_261548
    ctx->pc = 0x25CA8Cu;
    SET_GPR_U32(ctx, 31, 0x25CA94u);
    ctx->pc = 0x25CA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CA8Cu;
            // 0x25ca90: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CA94u; }
        if (ctx->pc != 0x25CA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CA94u; }
        if (ctx->pc != 0x25CA94u) { return; }
    }
    ctx->pc = 0x25CA94u;
label_25ca94:
    // 0x25ca94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25ca94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca98: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x25CA98u;
    {
        const bool branch_taken_0x25ca98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CA98u;
            // 0x25ca9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca98) {
            ctx->pc = 0x25CB30u;
            goto label_25cb30;
        }
    }
    ctx->pc = 0x25CAA0u;
    // 0x25caa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25caa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25caa4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x25CAA4u;
    SET_GPR_U32(ctx, 31, 0x25CAACu);
    ctx->pc = 0x25CAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CAA4u;
            // 0x25caa8: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CAACu; }
        if (ctx->pc != 0x25CAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CAACu; }
        if (ctx->pc != 0x25CAACu) { return; }
    }
    ctx->pc = 0x25CAACu;
label_25caac:
    // 0x25caac: 0xa6110008  sh          $s1, 0x8($s0)
    ctx->pc = 0x25caacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 17));
    // 0x25cab0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x25cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x25cab4: 0x2642ae90  addiu       $v0, $s2, -0x5170
    ctx->pc = 0x25cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946448));
    // 0x25cab8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25cabc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x25cabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x25cac0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x25cac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25cac4: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x25cac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x25cac8: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x25cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x25cacc: 0x86020046  lh          $v0, 0x46($s0)
    ctx->pc = 0x25caccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
label_25cad0:
    // 0x25cad0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x25CAD0u;
    {
        const bool branch_taken_0x25cad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CAD0u;
            // 0x25cad4: 0x96030046  lhu         $v1, 0x46($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cad0) {
            ctx->pc = 0x25CB08u;
            goto label_25cb08;
        }
    }
    ctx->pc = 0x25CAD8u;
    // 0x25cad8: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x25cad8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x25cadc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25cadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cae0: 0x24c670e0  addiu       $a2, $a2, 0x70E0
    ctx->pc = 0x25cae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28896));
    // 0x25cae4: 0xc0985b8  jal         func_2616E0
    ctx->pc = 0x25CAE4u;
    SET_GPR_U32(ctx, 31, 0x25CAECu);
    ctx->pc = 0x25CAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CAE4u;
            // 0x25cae8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (runtime->hasFunction(0x2616E0u)) {
        auto targetFn = runtime->lookupFunction(0x2616E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CAECu; }
        if (ctx->pc != 0x25CAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002616E0_0x2616e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CAECu; }
        if (ctx->pc != 0x25CAECu) { return; }
    }
    ctx->pc = 0x25CAECu;
label_25caec:
    // 0x25caec: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x25caecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25caf0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CAF0u;
    {
        const bool branch_taken_0x25caf0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x25CAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CAF0u;
            // 0x25caf4: 0xa6020044  sh          $v0, 0x44($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25caf0) {
            ctx->pc = 0x25CB04u;
            goto label_25cb04;
        }
    }
    ctx->pc = 0x25CAF8u;
    // 0x25caf8: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x25caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x25cafc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25CAFCu;
    {
        const bool branch_taken_0x25cafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CAFCu;
            // 0x25cb00: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cafc) {
            ctx->pc = 0x25CB30u;
            goto label_25cb30;
        }
    }
    ctx->pc = 0x25CB04u;
label_25cb04:
    // 0x25cb04: 0x96030046  lhu         $v1, 0x46($s0)
    ctx->pc = 0x25cb04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
label_25cb08:
    // 0x25cb08: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x25cb08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x25cb0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25cb10: 0x8e641750  lw          $a0, 0x1750($s3)
    ctx->pc = 0x25cb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5968)));
    // 0x25cb14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25cb18: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x25cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x25cb1c: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x25cb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x25cb20: 0xc043320  jal         func_10CC80
    ctx->pc = 0x25CB20u;
    SET_GPR_U32(ctx, 31, 0x25CB28u);
    ctx->pc = 0x25CB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CB20u;
            // 0x25cb24: 0xa6030046  sh          $v1, 0x46($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 70), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB28u; }
        if (ctx->pc != 0x25CB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB28u; }
        if (ctx->pc != 0x25CB28u) { return; }
    }
    ctx->pc = 0x25CB28u;
label_25cb28:
    // 0x25cb28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25CB28u;
    {
        const bool branch_taken_0x25cb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CB28u;
            // 0x25cb2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb28) {
            ctx->pc = 0x25CB4Cu;
            goto label_25cb4c;
        }
    }
    ctx->pc = 0x25CB30u;
label_25cb30:
    // 0x25cb30: 0xc043320  jal         func_10CC80
    ctx->pc = 0x25CB30u;
    SET_GPR_U32(ctx, 31, 0x25CB38u);
    ctx->pc = 0x25CB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CB30u;
            // 0x25cb34: 0x8e641750  lw          $a0, 0x1750($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5968)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB38u; }
        if (ctx->pc != 0x25CB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB38u; }
        if (ctx->pc != 0x25CB38u) { return; }
    }
    ctx->pc = 0x25CB38u;
label_25cb38:
    // 0x25cb38: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x25cb38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x25cb3c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x25cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x25cb40: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x25CB40u;
    SET_GPR_U32(ctx, 31, 0x25CB48u);
    ctx->pc = 0x25CB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25CB40u;
            // 0x25cb44: 0x24a570f8  addiu       $a1, $a1, 0x70F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB48u; }
        if (ctx->pc != 0x25CB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CB48u; }
        if (ctx->pc != 0x25CB48u) { return; }
    }
    ctx->pc = 0x25CB48u;
label_25cb48:
    // 0x25cb48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25cb48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cb4c:
    // 0x25cb4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25cb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25cb50: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25cb50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cb54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25cb54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cb58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25cb58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cb5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25cb5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cb60: 0x3e00008  jr          $ra
    ctx->pc = 0x25CB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25CB60u;
            // 0x25cb64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25CB68u;
    ctx->pc = 0x25cb68u;
}
