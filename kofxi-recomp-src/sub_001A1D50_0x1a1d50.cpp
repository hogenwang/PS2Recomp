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

// Function: sub_001A1D50
// Address: 0x1a1d50 - 0x1a1f40
void sub_001A1D50_0x1a1d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1D50_0x1a1d50");
#endif

    switch (ctx->pc) {
        case 0x1a1e9cu: goto label_1a1e9c;
        case 0x1a1ec4u: goto label_1a1ec4;
        default: break;
    }

    ctx->pc = 0x1a1d50u;

    // 0x1a1d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1d54: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x1a1d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x1a1d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1d5c: 0x8067b283  lb          $a3, -0x4D7D($v1)
    ctx->pc = 0x1a1d5cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947459)));
    // 0x1a1d60: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1d64: 0x8063e478  lb          $v1, -0x1B88($v1)
    ctx->pc = 0x1a1d64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294960248)));
    // 0x1a1d68: 0x1467000d  bne         $v1, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x1A1D68u;
    {
        const bool branch_taken_0x1a1d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1a1d68) {
            ctx->pc = 0x1A1DA0u;
            goto label_1a1da0;
        }
    }
    ctx->pc = 0x1A1D70u;
    // 0x1a1d70: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1d74: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x1a1d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x1a1d78: 0x8084e480  lb          $a0, -0x1B80($a0)
    ctx->pc = 0x1a1d78u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294960256)));
    // 0x1a1d7c: 0x8063b284  lb          $v1, -0x4D7C($v1)
    ctx->pc = 0x1a1d7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947460)));
    // 0x1a1d80: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1D80u;
    {
        const bool branch_taken_0x1a1d80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1d80) {
            ctx->pc = 0x1A1DA0u;
            goto label_1a1da0;
        }
    }
    ctx->pc = 0x1A1D88u;
    // 0x1a1d88: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1d8c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a1d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a1d90: 0x9084e488  lbu         $a0, -0x1B78($a0)
    ctx->pc = 0x1a1d90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294960264)));
    // 0x1a1d94: 0x906395d0  lbu         $v1, -0x6A30($v1)
    ctx->pc = 0x1a1d94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940112)));
    // 0x1a1d98: 0x50830066  beql        $a0, $v1, . + 4 + (0x66 << 2)
    ctx->pc = 0x1A1D98u;
    {
        const bool branch_taken_0x1a1d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a1d98) {
            ctx->pc = 0x1A1D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1D98u;
            // 0x1a1d9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1F34u;
            goto label_1a1f34;
        }
    }
    ctx->pc = 0x1A1DA0u;
label_1a1da0:
    // 0x1a1da0: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x1a1da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x1a1da4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1da8: 0x8066b284  lb          $a2, -0x4D7C($v1)
    ctx->pc = 0x1a1da8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947460)));
    // 0x1a1dac: 0xa087e478  sb          $a3, -0x1B88($a0)
    ctx->pc = 0x1a1dacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294960248), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a1db0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1db4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a1db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a1db8: 0xa086e480  sb          $a2, -0x1B80($a0)
    ctx->pc = 0x1a1db8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294960256), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a1dbc: 0x906595d0  lbu         $a1, -0x6A30($v1)
    ctx->pc = 0x1a1dbcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940112)));
    // 0x1a1dc0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1dc4: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1A1DC4u;
    {
        const bool branch_taken_0x1a1dc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DC4u;
        // 0x1a1dc8: 0xa065e488  sb          $a1, -0x1B78($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294960264), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1dc4) {
            ctx->pc = 0x1A1E74u;
            goto label_1a1e74;
        }
    }
    ctx->pc = 0x1A1DCCu;
    // 0x1a1dcc: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x1a1dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x1a1dd0: 0x24e40138  addiu       $a0, $a3, 0x138
    ctx->pc = 0x1a1dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 312));
    // 0x1a1dd4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a1dd4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a1dd8: 0x3c05ff80  lui         $a1, 0xFF80
    ctx->pc = 0x1a1dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65408 << 16));
    // 0x1a1ddc: 0x30870fff  andi        $a3, $a0, 0xFFF
    ctx->pc = 0x1a1ddcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1a1de0: 0x24630033  addiu       $v1, $v1, 0x33
    ctx->pc = 0x1a1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 51));
    // 0x1a1de4: 0x306407ff  andi        $a0, $v1, 0x7FF
    ctx->pc = 0x1a1de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x1a1de8: 0x240cf000  addiu       $t4, $zero, -0x1000
    ctx->pc = 0x1a1de8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1a1dec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1df0: 0x45b00  sll         $t3, $a0, 12
    ctx->pc = 0x1a1df0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x1a1df4: 0x9466e6a8  lhu         $a2, -0x1958($v1)
    ctx->pc = 0x1a1df4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294960808)));
    // 0x1a1df8: 0x34aa0fff  ori         $t2, $a1, 0xFFF
    ctx->pc = 0x1a1df8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
    // 0x1a1dfc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1e00: 0xcc3024  and         $a2, $a2, $t4
    ctx->pc = 0x1a1e00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 12));
    // 0x1a1e04: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1e08: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x1a1e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1a1e0c: 0xa485e6a8  sh          $a1, -0x1958($a0)
    ctx->pc = 0x1a1e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294960808), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a1e10: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x1a1e10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x1a1e14: 0x8c69e6a8  lw          $t1, -0x1958($v1)
    ctx->pc = 0x1a1e14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960808)));
    // 0x1a1e18: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1a1e18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1a1e1c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1a1e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1a1e20: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1e24: 0x12a4824  and         $t1, $t1, $t2
    ctx->pc = 0x1a1e24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 10));
    // 0x1a1e28: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1e2c: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x1a1e2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x1a1e30: 0x9468e6d0  lhu         $t0, -0x1930($v1)
    ctx->pc = 0x1a1e30u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294960848)));
    // 0x1a1e34: 0xace9e6a8  sw          $t1, -0x1958($a3)
    ctx->pc = 0x1a1e34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960808), GPR_U32(ctx, 9));
    // 0x1a1e38: 0x93a7c  dsll32      $a3, $t1, 9
    ctx->pc = 0x1a1e38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << (32 + 9));
    // 0x1a1e3c: 0x94c9e6a8  lhu         $t1, -0x1958($a2)
    ctx->pc = 0x1a1e3cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294960808)));
    // 0x1a1e40: 0x10c4024  and         $t0, $t0, $t4
    ctx->pc = 0x1a1e40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 12));
    // 0x1a1e44: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1e48: 0x7357e  dsrl32      $a2, $a3, 21
    ctx->pc = 0x1a1e48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) >> (32 + 21));
    // 0x1a1e4c: 0x31270fff  andi        $a3, $t1, 0xFFF
    ctx->pc = 0x1a1e4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
    // 0x1a1e50: 0x30c607ff  andi        $a2, $a2, 0x7FF
    ctx->pc = 0x1a1e50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2047);
    // 0x1a1e54: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x1a1e54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x1a1e58: 0x63300  sll         $a2, $a2, 12
    ctx->pc = 0x1a1e58u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 12));
    // 0x1a1e5c: 0xa4a7e6d0  sh          $a3, -0x1930($a1)
    ctx->pc = 0x1a1e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294960848), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a1e60: 0x8c84e6d0  lw          $a0, -0x1930($a0)
    ctx->pc = 0x1a1e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960848)));
    // 0x1a1e64: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x1a1e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x1a1e68: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1a1e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1a1e6c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1A1E6Cu;
    {
        const bool branch_taken_0x1a1e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E6Cu;
        // 0x1a1e70: 0xac64e6d0  sw          $a0, -0x1930($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960848), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e6c) {
            ctx->pc = 0x1A1F30u;
            goto label_1a1f30;
        }
    }
    ctx->pc = 0x1A1E74u;
label_1a1e74:
    // 0x1a1e74: 0x7463c  dsll32      $t0, $a3, 24
    ctx->pc = 0x1a1e74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 24));
    // 0x1a1e78: 0x64e3c  dsll32      $t1, $a2, 24
    ctx->pc = 0x1a1e78u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 24));
    // 0x1a1e7c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1e80: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x1a1e80u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x1a1e84: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x1a1e84u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    // 0x1a1e88: 0x2484e690  addiu       $a0, $a0, -0x1970
    ctx->pc = 0x1a1e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960784));
    // 0x1a1e8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e90: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1a1e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1a1e94: 0xc04013a  jal         func_1004E8
    ctx->pc = 0x1A1E94u;
    SET_GPR_U32(ctx, 31, 0x1A1E9Cu);
    ctx->pc = 0x1A1E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E94u;
    // 0x1a1e98: 0x240701c0  addiu       $a3, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004E8u, 0x1A1E94u, 0x1A1E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E9Cu;
label_1a1e9c:
    // 0x1a1e9c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x1a1e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x1a1ea0: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x1a1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x1a1ea4: 0x8068b283  lb          $t0, -0x4D7D($v1)
    ctx->pc = 0x1a1ea4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947459)));
    // 0x1a1ea8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1eac: 0x8049b284  lb          $t1, -0x4D7C($v0)
    ctx->pc = 0x1a1eacu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947460)));
    // 0x1a1eb0: 0x2484e6b8  addiu       $a0, $a0, -0x1948
    ctx->pc = 0x1a1eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960824));
    // 0x1a1eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1eb8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1a1eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1a1ebc: 0xc04013a  jal         func_1004E8
    ctx->pc = 0x1A1EBCu;
    SET_GPR_U32(ctx, 31, 0x1A1EC4u);
    ctx->pc = 0x1A1EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1EBCu;
    // 0x1a1ec0: 0x240701c0  addiu       $a3, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004E8u, 0x1A1EBCu, 0x1A1EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1EC4u;
label_1a1ec4:
    // 0x1a1ec4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1ec8: 0x2408fe00  addiu       $t0, $zero, -0x200
    ctx->pc = 0x1a1ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x1a1ecc: 0x9467e6c8  lhu         $a3, -0x1938($v1)
    ctx->pc = 0x1a1eccu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294960840)));
    // 0x1a1ed0: 0x6409008c  daddiu      $t1, $zero, 0x8C
    ctx->pc = 0x1a1ed0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)140);
    // 0x1a1ed4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1a1ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1a1ed8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a1ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a1edc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1ee0: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x1a1ee0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x1a1ee4: 0x9466e6f0  lhu         $a2, -0x1910($v1)
    ctx->pc = 0x1a1ee4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294960880)));
    // 0x1a1ee8: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x1a1ee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x1a1eec: 0xa4a7e6c8  sh          $a3, -0x1938($a1)
    ctx->pc = 0x1a1eecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294960840), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a1ef0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1ef4: 0xc82824  and         $a1, $a2, $t0
    ctx->pc = 0x1a1ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x1a1ef8: 0x9463e700  lhu         $v1, -0x1900($v1)
    ctx->pc = 0x1a1ef8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294960896)));
    // 0x1a1efc: 0xa93025  or          $a2, $a1, $t1
    ctx->pc = 0x1a1efcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x1a1f00: 0x64050118  daddiu      $a1, $zero, 0x118
    ctx->pc = 0x1a1f00u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)280);
    // 0x1a1f04: 0xa486e6f0  sh          $a2, -0x1910($a0)
    ctx->pc = 0x1a1f04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294960880), (uint16_t)GPR_U32(ctx, 6));
    // 0x1a1f08: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x1a1f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x1a1f0c: 0x652025  or          $a0, $v1, $a1
    ctx->pc = 0x1a1f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1a1f10: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1f14: 0xa464e700  sh          $a0, -0x1900($v1)
    ctx->pc = 0x1a1f14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294960896), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a1f18: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1f1c: 0x9464e7f0  lhu         $a0, -0x1810($v1)
    ctx->pc = 0x1a1f1cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961136)));
    // 0x1a1f20: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x1a1f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x1a1f24: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a1f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a1f28: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1a1f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1a1f2c: 0xa464e7f0  sh          $a0, -0x1810($v1)
    ctx->pc = 0x1a1f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294961136), (uint16_t)GPR_U32(ctx, 4));
label_1a1f30:
    // 0x1a1f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1f34:
    // 0x1a1f34: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F34u;
        // 0x1a1f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1F3Cu;
    // 0x1a1f3c: 0x0  nop
    ctx->pc = 0x1a1f3cu;
    // NOP
}
