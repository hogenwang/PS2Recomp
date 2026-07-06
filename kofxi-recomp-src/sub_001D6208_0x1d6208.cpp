#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D6208
// Address: 0x1d6208 - 0x1d63e8
void sub_001D6208_0x1d6208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6208_0x1d6208");
#endif

    switch (ctx->pc) {
        case 0x1d6218u: goto label_1d6218;
        case 0x1d6240u: goto label_1d6240;
        case 0x1d6318u: goto label_1d6318;
        case 0x1d6330u: goto label_1d6330;
        case 0x1d6358u: goto label_1d6358;
        default: break;
    }

    ctx->pc = 0x1d6208u;

    // 0x1d6208: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x1d6208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1d620c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1D620Cu;
    {
        const bool branch_taken_0x1d620c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d620c) {
            ctx->pc = 0x1D6210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D620Cu;
            // 0x1d6210: 0x63102  srl         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6238u;
            goto label_1d6238;
        }
    }
    ctx->pc = 0x1D6214u;
    // 0x1d6214: 0x0  nop
    ctx->pc = 0x1d6214u;
    // NOP
label_1d6218:
    // 0x1d6218: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d6218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d621c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d621cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d6220: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d6220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d6224: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d6224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d6228: 0x0  nop
    ctx->pc = 0x1d6228u;
    // NOP
    // 0x1d622c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D622Cu;
    {
        const bool branch_taken_0x1d622c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D622Cu;
            // 0x1d6230: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d622c) {
            ctx->pc = 0x1D6218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d6218;
        }
    }
    ctx->pc = 0x1D6234u;
    // 0x1d6234: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x1d6234u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
label_1d6238:
    // 0x1d6238: 0x10c00034  beqz        $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x1D6238u;
    {
        const bool branch_taken_0x1d6238 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6238) {
            ctx->pc = 0x1D630Cu;
            goto label_1d630c;
        }
    }
    ctx->pc = 0x1D6240u;
label_1d6240:
    // 0x1d6240: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1d6240u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6244: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d6244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d6248: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x1d6248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d624c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d624cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d6250: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d6250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6254: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d6254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d6258: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d6258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d625c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d625cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d6260: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1d6260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1d6264: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d6264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d6268: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x1d6268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x1d626c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1d626cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1d6270: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1d6270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1d6274: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1d6274u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6278: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d6278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d627c: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x1d627cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6280: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d6280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d6284: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d6284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6288: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d6288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d628c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d628cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d6290: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d6290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d6294: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x1d6294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x1d6298: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x1d6298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x1d629c: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1d629cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1d62a0: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1d62a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x1d62a4: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1d62a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d62a8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d62a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d62ac: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x1d62acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d62b0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d62b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d62b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d62b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d62b8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d62b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d62bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d62bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d62c0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d62c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d62c4: 0xac880020  sw          $t0, 0x20($a0)
    ctx->pc = 0x1d62c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 8));
    // 0x1d62c8: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x1d62c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x1d62cc: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x1d62ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x1d62d0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1d62d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1d62d4: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1d62d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d62d8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d62d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d62dc: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x1d62dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d62e0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d62e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d62e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d62e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d62e8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d62e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d62ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d62ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d62f0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1d62f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1d62f4: 0xac880030  sw          $t0, 0x30($a0)
    ctx->pc = 0x1d62f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 8));
    // 0x1d62f8: 0xac870034  sw          $a3, 0x34($a0)
    ctx->pc = 0x1d62f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 7));
    // 0x1d62fc: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x1d62fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x1d6300: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x1d6300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x1d6304: 0x14c0ffce  bnez        $a2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1D6304u;
    {
        const bool branch_taken_0x1d6304 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6304u;
            // 0x1d6308: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6304) {
            ctx->pc = 0x1D6240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d6240;
        }
    }
    ctx->pc = 0x1D630Cu;
label_1d630c:
    // 0x1d630c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D630Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6314u;
    // 0x1d6314: 0x0  nop
    ctx->pc = 0x1d6314u;
    // NOP
label_1d6318:
    // 0x1d6318: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1d6318u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1d631c: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x1d631cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1d6320: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x1d6320u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x1d6324: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6324u;
    {
        const bool branch_taken_0x1d6324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6324u;
            // 0x1d6328: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6324) {
            ctx->pc = 0x1D634Cu;
            goto label_1d634c;
        }
    }
    ctx->pc = 0x1D632Cu;
    // 0x1d632c: 0x0  nop
    ctx->pc = 0x1d632cu;
    // NOP
label_1d6330:
    // 0x1d6330: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d6330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d6334: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d6334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d6338: 0x0  nop
    ctx->pc = 0x1d6338u;
    // NOP
    // 0x1d633c: 0x0  nop
    ctx->pc = 0x1d633cu;
    // NOP
    // 0x1d6340: 0x0  nop
    ctx->pc = 0x1d6340u;
    // NOP
    // 0x1d6344: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D6344u;
    {
        const bool branch_taken_0x1d6344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6344u;
            // 0x1d6348: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6344) {
            ctx->pc = 0x1D6330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d6330;
        }
    }
    ctx->pc = 0x1D634Cu;
label_1d634c:
    // 0x1d634c: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x1d634cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x1d6350: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D6350u;
    {
        const bool branch_taken_0x1d6350 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6350) {
            ctx->pc = 0x1D63E0u;
            goto label_1d63e0;
        }
    }
    ctx->pc = 0x1D6358u;
label_1d6358:
    // 0x1d6358: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d6358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d635c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d635cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d6360: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d6360u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d6364: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d6364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d6368: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d6368u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d636c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d636cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d6370: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d6370u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d6374: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d6374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d6378: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d6378u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d637c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d6380: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d6380u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d6384: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d6384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d6388: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d6388u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d638c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d638cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d6390: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d6390u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d6394: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d6394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d6398: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d6398u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d639c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d639cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d63a0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d63a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d63a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d63a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d63a8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d63a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d63ac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d63acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d63b0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d63b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d63b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d63b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d63b8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d63b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d63bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d63bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d63c0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d63c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d63c4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d63c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d63c8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d63c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d63cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d63ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d63d0: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1d63d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d63d4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d63d8: 0x14c0ffdf  bnez        $a2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D63D8u;
    {
        const bool branch_taken_0x1d63d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D63DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D63D8u;
            // 0x1d63dc: 0xa0850000  sb          $a1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d63d8) {
            ctx->pc = 0x1D6358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d6358;
        }
    }
    ctx->pc = 0x1D63E0u;
label_1d63e0:
    // 0x1d63e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D63E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D63E8u;
    ctx->pc = 0x1d63e8u;
}
