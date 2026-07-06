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

// Function: sub_00196F10
// Address: 0x196f10 - 0x197070
void sub_00196F10_0x196f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196F10_0x196f10");
#endif

    ctx->pc = 0x196f10u;

    // 0x196f10: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x196f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x196f14: 0x8467d118  lh          $a3, -0x2EE8($v1)
    ctx->pc = 0x196f14u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294955288)));
    // 0x196f18: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x196f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x196f1c: 0x8464d138  lh          $a0, -0x2EC8($v1)
    ctx->pc = 0x196f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294955320)));
    // 0x196f20: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x196f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x196f24: 0x8466d098  lh          $a2, -0x2F68($v1)
    ctx->pc = 0x196f24u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294955160)));
    // 0x196f28: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x196f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x196f2c: 0x8465d0b8  lh          $a1, -0x2F48($v1)
    ctx->pc = 0x196f2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294955192)));
    // 0x196f30: 0x871823  subu        $v1, $a0, $a3
    ctx->pc = 0x196f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x196f34: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x196f34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x196f38: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x196f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x196f3c: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x196f3cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x196f40: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x196f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x196f44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x196f44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x196f48: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x196f48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x196f4c: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x196F4Cu;
    {
        const bool branch_taken_0x196f4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x196f4c) {
            ctx->pc = 0x196F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196F4Cu;
            // 0x196f50: 0xa61821  addu        $v1, $a1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196F5Cu;
            goto label_196f5c;
        }
    }
    ctx->pc = 0x196F54u;
    // 0x196f54: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x196f54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f58: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x196f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_196f5c:
    // 0x196f5c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x196f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x196f60: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x196f60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x196f64: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x196f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x196f68: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x196f68u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x196f6c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x196f6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x196f70: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x196f70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x196f74: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x196F74u;
    {
        const bool branch_taken_0x196f74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x196f74) {
            ctx->pc = 0x196F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196F74u;
            // 0x196f78: 0x8243c  dsll32      $a0, $t0, 16 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196F84u;
            goto label_196f84;
        }
    }
    ctx->pc = 0x196F7Cu;
    // 0x196f7c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x196f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196f80: 0x8243c  dsll32      $a0, $t0, 16
    ctx->pc = 0x196f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 16));
label_196f84:
    // 0x196f84: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x196f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x196f88: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x196f88u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x196f8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x196f8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x196f90: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x196f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x196f94: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x196f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x196f98: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x196f98u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x196f9c: 0x8468d110  lh          $t0, -0x2EF0($v1)
    ctx->pc = 0x196f9cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294955280)));
    // 0x196fa0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x196fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x196fa4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x196fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x196fa8: 0x8485d130  lh          $a1, -0x2ED0($a0)
    ctx->pc = 0x196fa8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294955312)));
    // 0x196fac: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x196facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x196fb0: 0x8487d090  lh          $a3, -0x2F70($a0)
    ctx->pc = 0x196fb0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294955152)));
    // 0x196fb4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x196fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x196fb8: 0x8486d0b0  lh          $a2, -0x2F50($a0)
    ctx->pc = 0x196fb8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294955184)));
    // 0x196fbc: 0xa82023  subu        $a0, $a1, $t0
    ctx->pc = 0x196fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x196fc0: 0x44c3c  dsll32      $t1, $a0, 16
    ctx->pc = 0x196fc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 16));
    // 0x196fc4: 0xc72023  subu        $a0, $a2, $a3
    ctx->pc = 0x196fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x196fc8: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x196fc8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x196fcc: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x196fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x196fd0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x196fd0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x196fd4: 0x124082a  slt         $at, $t1, $a0
    ctx->pc = 0x196fd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x196fd8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x196FD8u;
    {
        const bool branch_taken_0x196fd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x196FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196FD8u;
        // 0x196fdc: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196fd8) {
            ctx->pc = 0x196FE4u;
            goto label_196fe4;
        }
    }
    ctx->pc = 0x196FE0u;
    // 0x196fe0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x196fe0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196fe4:
    // 0x196fe4: 0xc72021  addu        $a0, $a2, $a3
    ctx->pc = 0x196fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x196fe8: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x196fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x196fec: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x196fecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x196ff0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x196ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x196ff4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x196ff4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x196ff8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x196ff8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x196ffc: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x196ffcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x197000: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x197000u;
    {
        const bool branch_taken_0x197000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x197000) {
            ctx->pc = 0x197004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197000u;
            // 0x197004: 0x6243c  dsll32      $a0, $a2, 16 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197010u;
            goto label_197010;
        }
    }
    ctx->pc = 0x197008u;
    // 0x197008: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x197008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19700c: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x19700cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
label_197010:
    // 0x197010: 0x92c3c  dsll32      $a1, $t1, 16
    ctx->pc = 0x197010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) << (32 + 16));
    // 0x197014: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x197014u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x197018: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x197018u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x19701c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x19701cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x197020: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x197020u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x197024: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x197024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x197028: 0x55043  sra         $t2, $a1, 1
    ctx->pc = 0x197028u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 1));
    // 0x19702c: 0x9089d0e8  lbu         $t1, -0x2F18($a0)
    ctx->pc = 0x19702cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294955240)));
    // 0x197030: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x197030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x197034: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x197034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x197038: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x197038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19703c: 0x8c88d0c8  lw          $t0, -0x2F38($a0)
    ctx->pc = 0x19703cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955208)));
    // 0x197040: 0xa109006c  sb          $t1, 0x6C($t0)
    ctx->pc = 0x197040u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 108), (uint8_t)GPR_U32(ctx, 9));
    // 0x197044: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x197044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x197048: 0x8ce7d0c8  lw          $a3, -0x2F38($a3)
    ctx->pc = 0x197048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294955208)));
    // 0x19704c: 0xa4e30068  sh          $v1, 0x68($a3)
    ctx->pc = 0x19704cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 104), (uint16_t)GPR_U32(ctx, 3));
    // 0x197050: 0x8cc3d0c8  lw          $v1, -0x2F38($a2)
    ctx->pc = 0x197050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955208)));
    // 0x197054: 0xa46a006a  sh          $t2, 0x6A($v1)
    ctx->pc = 0x197054u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 106), (uint16_t)GPR_U32(ctx, 10));
    // 0x197058: 0x90a5d078  lbu         $a1, -0x2F88($a1)
    ctx->pc = 0x197058u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294955128)));
    // 0x19705c: 0x8c83d0c8  lw          $v1, -0x2F38($a0)
    ctx->pc = 0x19705cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955208)));
    // 0x197060: 0x3e00008  jr          $ra
    ctx->pc = 0x197060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197060u;
        // 0x197064: 0xa065006d  sb          $a1, 0x6D($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 109), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197068u;
    // 0x197068: 0x0  nop
    ctx->pc = 0x197068u;
    // NOP
    // 0x19706c: 0x0  nop
    ctx->pc = 0x19706cu;
    // NOP
    if (ctx->pc == 0x19706cu) { ctx->pc = 0x197070u; }
}
